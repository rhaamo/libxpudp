/* xp_sender.c
 * This file is part or libxpudp
 */

/*!
  @defgroup xp_sender Sender parts of libxpudp
  @brief Functions to build an UDP packet from "Human-Readable" stuff
  @{
*/

#include <stdlib.h>

#include "xp_sender.h"
#include "xp_utils.h"

char *
xp_sender_parse_from_struct(struct xp_parsed_packet datas_in)
{
	(void)xp_log("%s:%i %s: Entering", __FILE__, __LINE__, __func__);

	/* The packet length is 41, 36 after DATA& removal */
	char *buffer;
	buffer = (char*)malloc(sizeof(char) * 41);
	
	buffer[0] = 'D';
	buffer[1] = 'A';
	buffer[2] = 'T';
	buffer[3] = 'A';
	buffer[4] = 0;

	/* Transform an Int or Float into a four (4) bytes char */
	union {
		int iVal;
		float fVal;
		unsigned char buffer[4];
	} value;

	/* The index */
	value.iVal = datas_in.index;

	/* Add in into the buffer */
	buffer[5] = value.buffer[0];
	buffer[6] = value.buffer[1];
	buffer[7] = value.buffer[2];
	buffer[8] = value.buffer[3];

	/* Start at byte 9, right after the index */
	int act_byte = 9;

	/* Used in the for to increment the number of items */
	int act_item = 0;

	for (act_item = 0; act_item < 8; ++act_item) {
		/* We only use floats, X-Plane eat it perfectly */
		value.fVal = datas_in.values[act_item];

		buffer[act_byte] = value.buffer[0];
		act_byte++;
		buffer[act_byte] = value.buffer[1];
		act_byte++;
		buffer[act_byte] = value.buffer[2];
		act_byte++;
		buffer[act_byte] = value.buffer[3];
		act_byte++;
	}

	return buffer;
}
