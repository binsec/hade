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
	
	if (c > 127)
		printf("if-1-win ");
	else
		printf("if-1-lose ");
	
	if (c == 63)
		printf("if-2-win\n");
	else
		printf("if-2-lose\n");
	
	if ( argv[1][0] == 126 ) {
		puts("Success !");
		klee_report_error("err",16,"Secret found!","txt");
	}
	return 0;
}
