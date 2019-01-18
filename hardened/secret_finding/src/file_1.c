#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
		
        int i;
        int sum = 0;

	const char *str = argv[1];
	register const char *s, *t;

	for (i = 0; i < 16; i++) {
		sum += i;
	}
	
	for (t = str; *t; ++t) {
		sum += *t;
	}
	
	printf("Sum is: %d\n", sum);
	
        /* secret */
        if ( sum == 1600 ) {
            printf("Success!\n");
        }

	return 0;
}
