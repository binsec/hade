#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int i,j;
	int sum = 0;
	
//	const char *str = argv[1];
	
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

        register const char *s;

	for (s = str; *s; ++s) {
		sum += *s;
	}
	
	unsigned int len = (s - str);
	
	for (i = 0; i < len; i++) {
	    sum += str[i]; 
	}
	
	printf("Sum is: %d\n", sum);

        /* Secret */
        if ( sum == 1600 ) {
            printf("Success!\n");
        }

	return 0;
}
