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

	if (argc < 2) {
		printf("Usage: program-name argument\n");
		return 1;
	}
	
	unsigned char c = argv[1][0];
	if (c == 127)
		printf("win\n");
	else
		printf("lose\n");

	if ( argv[1][0] == 126 ) {
		puts("Success !");
		klee_report_error("err",6,"Secret found!","txt");
	}

	return 0;
}
