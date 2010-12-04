/* ExampleReader.c
 * Example of an X-Plane Data Reader using libxpudp
 *
 * gcc -o xpreader ExampleReader.c xp_reader.c xp_utils.c
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

#include "xp_reader.h"	/* xp_reader_parse_from_raw_packet() */
#include "xp_utils.h"	/* xp_log() */
/* Include X-Plane 9.61RC2 Definitions */
#include "9.61RC2/XPDefinitions.h"	/* xp_type_desc[] */


#define	ER_PORT	48000

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
	struct xp_parsed_packet packet;

	if ((s=socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) == -1)
		(void)diep("socket");

	memset((char *) &si_me, 0, sizeof(si_me));
	si_me.sin_family = AF_INET;
	si_me.sin_port = htons(ER_PORT);
	si_me.sin_addr.s_addr = htonl(INADDR_ANY);
	if (bind(s, &si_me, sizeof(si_me)) == -1)
		(void)diep("bind");

	char bouffeur[2100];

	/* Comment the recv and uncomment other stuff to parse all received packets */
	//while(recv(s, bouffeur, sizeof(bouffeur), 0))
	recv(s, bouffeur, sizeof(bouffeur), 0);
	//{
	(void)xp_log("%s:%i %s: Got packet, parsing", __FILE__, __LINE__, __func__);
	packet = xp_reader_parse_from_raw_packet(bouffeur);
	(void)printf("Type (%i): %s\n", packet.index, xp_type_desc[packet.index]);
	for (z=0;z<=7;z++)
		(void)printf(" Value %i: %f\n", z, packet.values[z]);
	//}
}
