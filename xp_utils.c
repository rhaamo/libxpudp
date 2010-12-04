/* xp_utils.c
 * This file is part of libxpudp
 */

/*!
  @defgroup xp_utils Various utils used in Reader and Sender parts
  @brief Various utils used in Reader and Sender parts
  @{
 */

#include	"xp_utils.h"
#include	<stdio.h>
#include	<stdarg.h>
#include	<err.h>

/*!
  \fn int xp_log(char const *fmt, ...)
  \brief Log to STDERR if XP_DEBUG is defined
  \param fmt A string representing the thing to log
 */
/* Consider using usefull stuff like:
   %s __FILE__ %i __LINE__ %s __func__ when calling xp_log
*/
void
xp_log(const char* fmt, ...)
{
#ifdef	XP_DEBUG
	va_list args;
	va_start(args, fmt);
	vwarnx(fmt, args);
	va_end(args);
#endif
}

/*! @} */
