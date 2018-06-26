
/* Author: Madhav Chauhan */

/* This program print hostname */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

        char hostname[100];
            gethostname(hostname, 100);

                printf("HOSTNAME:%s\n",hostname);
		printf("MADHAV SINGH CHAUHAN\n");

                    return EXIT_SUCCESS;
}
