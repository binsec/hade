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

	int i;
	int sum = 0;
	
	for (i = 0; i < argc; i++) {
		if (argv[i][0] > 127) {
			sum += 1;
		}
	
		sum += i; 
	}
	
	printf("Sum is: %d\n", sum);
	
	if ( argv[1][0] == 126 ) {
		puts("Success !");
		klee_report_error("err",17,"Secret found!","txt");
	}
	return 0;
}
