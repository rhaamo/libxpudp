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
  \fn \struct xp_parsed_packet xp_reader_parse_from_raw_packet(char *buffer)
  \brief Take a char[2100] as a buffer, parse it and return a \struct xp_parsed_packet with index and values (float[8])
  \param buffer A char[2100] buffer from recv or similar
  \return A \struct xp_parsed_packet with index and values (float[8])
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
	for (i = 0; i <= 8; i++)
		packet.values[i] = item[i+1];
	
	return packet;
}

/*! @} */
