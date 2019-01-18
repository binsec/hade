#include <stdio.h>
#include <stdlib.h>

/* argv[1] is 16-bytes long */

int main(int argc, char* argv[]) {
	int i,j;
	int sum = 0;

	char str[17] = {0};
        str[16] = '\0';

        for (i=0; i<argv[1][0]; i++) {
            str[0]++;
        }

        for (i=0; i<argv[1][1];  i++) {
            str[1]++;
        }


        for (i=0; i<argv[1][2]; i++) {
            str[2]++;
        }


        for (i=0; i<argv[1][3]; i++) {
            str[3]++;
        }


        for (i=0; i<argv[1][4]; i++) {
            str[4]++;
        }

        for (j=5; j<16; j++) {
            str[j] = argv[1][j];
        }

	register const char *s, *t;

	for (t = str; *t; ++t) {
		sum += *t;
	}
			
	printf("Sum is: %d\n", sum);
	
        /* Secret */
        if ( sum == 1600 ) {
            printf("success!\n");
        }

	return 0;
}
