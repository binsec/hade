#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    
        int i;
        int sum = 0;

        const char *str = argv[1];
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
