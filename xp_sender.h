/* xp_sender.h
 * This file is part of libxpudp
 */

/*!
  @addtogroup xp_sender
  @{
 */

#ifndef	__XP_SENDER_H
#define	__XP_SENDER_H

#include "xp_shared.h" /* Needed for the xp_parsed_packet struct */

char * xp_sender_parse_from_struct(struct xp_parsed_packet datas_in);

#endif /* __XP_SENDER_H */

/*! @} */
