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
	if (c > 63) {
		printf("if-1-win ");
		unsigned char x = (c / 3) * 2;
		if (x == 127)
			printf("if-2-win\n");
		else
			printf("if-2-lose\n");
	} else {
		printf("if-1-lose\n");
	}
	return 0;
}
