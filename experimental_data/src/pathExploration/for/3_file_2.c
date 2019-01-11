#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	int garb2 = 0;
	for (int it=0; it<argv[1][2]; it++) {
		garb2++;
	}


	int garb1 = 0;
	for (int it=0; it<argv[1][1]; it++) {
		garb1++;
	}


	int garb0 = 0;
	for (int it=0; it<argv[1][0]; it++) {
		garb0++;
	}

	int i,j;
	int sum = 0;
	
	const char *str = argv[1];
	register const char *s, *t;

	for (i = 0; i < argv[1][0]; i++) {
		sum += i;
	}
	
	for (t = str; *t; ++t) {
		sum += *t;
	}
	
	printf("Sum is: %d\n", sum);
	
	return 0;
}
