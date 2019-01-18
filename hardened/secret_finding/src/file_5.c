#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	
        int sum = 0;

        const char *str = argv[1];
        register const char *s, *t;

	for (t = str; *t; ++t) {
		sum += *t;
	}
	
        /* Secret */
        if ( sum == 1600 ) {
            printf("Success!\n");
        }

	if (sum > 127)
		sum += *t;
	else
		sum *= *t;
        
	printf("Sum is: %d\n", sum);
	
	return 0;
}
