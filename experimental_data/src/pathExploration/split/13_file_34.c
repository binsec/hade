#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	int garb = 0;
	int k = 13;
	char var[k];
	klee_make_symbolic(var,k,"var");
	for (int it=0; it<k; it++) {
		if ( var[it] > 65) {
			garb++;
		} else {
			garb--;
		}
	}

	unsigned char c = argv[1][0];
	
	if (argc > 1) {
		if (c > 127)
			printf("win\n");
		else
			printf("lose\n");
	} else {
		printf("Usage: program-name character\n");
	}
	return 0;
}
