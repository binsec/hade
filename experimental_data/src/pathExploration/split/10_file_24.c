#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	int garb = 0;
	int k = 10;
	char var[k];
	klee_make_symbolic(var,k,"var");
	for (int it=0; it<k; it++) {
		if ( var[it] > 65) {
			garb++;
		} else {
			garb--;
		}
	}

	unsigned char x;
	unsigned char c = argv[1][0];
	
	if (c > 127)
		x = c / 3;
	else
		x = c * 2;
	
	if (x > 63)
		printf("if-2-win\n");
	else
		printf("if-2-lose\n");
	
	return 0;
}
