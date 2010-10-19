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
	
	float value1;	/*!< Value 1 */
	float value2;	/*!< Value 2 */
	float value3;	/*!< Value 3 */
	float value4;	/*!< Value 4 */
	float value5;	/*!< Value 5 */
	float value6;	/*!< Value 6 */
	float value7;	/*!< Value 7 */
	float value8;	/*!< Value 8 */
};

struct xp_parsed_packet xp_reader_parse_from_raw_packet(char *buffer);

#endif /* __XP_READER_H */

/*! @} */
