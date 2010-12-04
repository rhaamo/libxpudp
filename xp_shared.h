/* xp_shared.h
 * This file is part of libxpudp
 */

/*!
  @addtogroup xp_reader
  @addtogroup xp_sender
  @{
*/

#ifndef __XP_SHARED_H
#define __XP_SHARED_H

/*! \struct xp_parsed_packet */
struct xp_parsed_packet
{
  int index;	/*!< Index, same as in X-Plane "Data Input & Output" screen */
  float values[8];	/*!< The 8 values */
};

#endif /* __XP_SHARED_H */

/*! @} */
