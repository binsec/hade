#include <stdio.h>
#include <stdlib.h>

/* argv[1] is 16-bytes long */

int main(int argc, char* argv[]) {

        int sum = 0;

	const char *str = argv[1];
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
