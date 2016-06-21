#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	struct in_addr addr;

	if (argc != 2) {
		fprintf(stderr, "%s <rawip>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if (inet_aton(argv[1], &addr) == 0) {
		fprintf(stderr, "Invalid address\n");
		exit(EXIT_FAILURE);
	}
	memset(&addr, 0, sizeof(addr));
	printf("%s\n", inet_ntoa(addr));
	exit(EXIT_SUCCESS);
}




