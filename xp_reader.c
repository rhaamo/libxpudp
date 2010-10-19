/* xp_reader.c
 * This file is part of libxpudp
 */

/*!
  @defgroup xp_reader Reader parts of libxpudp
  @brief Functions to parse an UDP packet to an "Human-Readable" state
  @{
 */

#include	"xp_reader.h"
#include	"xp_utils.h"

/*!
  \fn float xp_reader_parse_from_raw_packet(char *buffer)
  \brief Take a char[2100] as a buffer, parse it and return a float[9] with 1 index and 8 values\n
  The returned float is like:\n
    foo[0] = index\n
    foo[1] = value1\n
    foo[2] = value2\n
    foo[3] = value3\n
    foo[4] = value4\n
    foo[5] = value5\n
    foo[6] = value6\n
    foo[7] = value7\n
    foo[8] = value8
  \param buffer A char[2100] buffer from recv or similar
  \return A float[9] with 1 Index and 8 Values
 */
struct xp_parsed_packet xp_reader_parse_from_raw_packet(char *buffer)
{
	(void)xp_log("%s:%i %s: Entering", __FILE__, __LINE__, __func__);
	
	int length = sizeof(buffer);	/* should be 2100 */
	union {
		float fv;
		int   iv;
		unsigned char buffer[4];
	}value;
	
	struct xp_parsed_packet packet;	/* our final packet */
	
	int y;	/* 36 bytes chunk counter */
	int x;  /*  4 bytes chunk counter */
	int v;  /* data unit v number     */
	int i;
	
	float item[9];			/* holdes Index + 8 Values */
	
	y=5;	/* always start a byte 5. 0 - 4 = "D A T A &" byte 5 is
						the first usefull thing */
	
	while (y < length)
	{
		x = v = 0;
		while (x < 36) /* Why 36 ? */
		{
			/* Big Endian */
			for (i = 0; i < 4; i++)
				value.buffer[i] = buffer[y+x+i];
			
			if (x == 0) {
				(void)xp_log("%s:%i %s: Got Integer", __FILE__, __LINE__, __func__);
				item[v] = value.iv;
			} else {
				(void)xp_log("%s:%i %s: Got Float", __FILE__, __LINE__, __func__);
				item[v] = value.fv;
			}
			v++;
			x += 4;
		}
		y += 36;	/* Jump to next data unit, the next 36 bytes */
	}
	
	packet.index = item[0];
	packet.value1 = item[1];
	packet.value2 = item[2];
	packet.value3 = item[3];
	packet.value4 = item[4];
	packet.value5 = item[5];
	packet.value6 = item[6];
	packet.value7 = item[7];
	packet.value8 = item[8];
	
	return packet;
}

/*! @} */
