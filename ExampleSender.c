/* ExampleSender.c
 * Example of an X-Plane Data Sender using libxpudp
 *
 * gcc -o xpsender ExampleSender.c xp_sender.c xp_utils.c
 *
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>

#include "xp_sender.h"
#include "xp_reader.h"
#include "xp_utils.h"	/* xp_log() */
/* Include X-Plane 9.61RC2 Definitions */
#include "9.61RC2/XPDefinitions.h"	/* xp_type[] */


#define	ES_PORT	49000

void
diep(char *s)
{
	perror(s);
	exit(1);
}

int
main(void)
{
	(void)xp_log("%s:%i %s: Starting", __FILE__, __LINE__, __func__);
	struct sockaddr_in si_me, si_other;
	int s, i, j, z, slen = sizeof(si_other);
	ssize_t nread;

	if ((s=socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) == -1)
		(void)diep("socket");

	memset((char *) &si_me, 0, sizeof(si_me));
	si_me.sin_family = AF_INET;
	si_me.sin_port = htons(ES_PORT);
	si_me.sin_addr.s_addr = htonl(INADDR_ANY);

	char *buffer;
	struct xp_parsed_packet packet;

	/* We want to control the throttle */
	packet.index = XP_THROTTLE_COMMAND;

	/* We want to set the first throttle to 0.75%
	 * And don't touch the others, use -999 to do it.
	 */
	packet.values[0] = 0.75;
	packet.values[1] = -999;
	packet.values[2] = -999;
	packet.values[3] = -999;
	packet.values[4] = -999;
	packet.values[5] = -999;
	packet.values[6] = -999;
	packet.values[7] = -999;

	/* Done setting the 8 values */

	/* Now use libxpudp sender function to get a built buffer
	 * we can directly use!
	 */
	buffer = xp_sender_parse_from_struct(packet);

	/* Send it ! */
	(void)xp_log("Sending datas");
	/* 41 is the size of the buffer, hardcoded, 'cause i don't know how to get it :p
	 * but anyway, it's always 41.
	 */
	sendto(s, buffer, 41, 0, (const struct sockaddr*)&si_me, sizeof(struct sockaddr_in));
	(void)xp_log("Datas sent");

	free(buffer);

	return (0);
}
