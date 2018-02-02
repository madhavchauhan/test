
/* Author: Madhav Chauhan */

/* This program print hostnname */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

        char hostname[100];
            gethostname(hostname, 100);

                //puts(hostname);
                printf("HOSTNAME:%s\n",hostname);

                    return EXIT_SUCCESS;
}
