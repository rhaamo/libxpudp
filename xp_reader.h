/* xp_reader.h
 * This file is part of libxpudp
 */

/*!
  @addtogroup xp_reader
  @{
 */

#ifndef	__XP_READER_H
#define	__XP_READER_H

/*! \struct xp_parsed_packet */
struct xp_parsed_packet
{
	int index;	/*!< Index, same as in X-Plane "Data Input & Output" screen */
	
	float values[8];	/*!< The 8 values */
};

struct xp_parsed_packet xp_reader_parse_from_raw_packet(char *buffer);

#endif /* __XP_READER_H */

/*! @} */
