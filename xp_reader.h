/* xp_reader.h
 * This file is part of libxpudp
 */

/*!
  @addtogroup xp_reader
  @{
 */

#ifndef	__XP_READER_H
#define	__XP_READER_H

#include "xp_shared.h" /* Needed for the xp_parsed_packet struct */

struct xp_parsed_packet xp_reader_parse_from_raw_packet(char *buffer);

#endif /* __XP_READER_H */

/*! @} */

