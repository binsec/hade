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

	int i,j;
	int sum = 0;
	
	const char *str = argv[1];
	register const char *s, *t;

	for (t = str; *t; ++t) {
		sum += *t;
	}
	
	if (sum > 127)
		sum += *t;
	else
		sum *= *t;
			
	printf("Sum is: %d\n", sum);
	
	if ( argv[1][0] == 126 ) {
		puts("Success !");
		klee_report_error("err",21,"Secret found!","txt");
	}
	return 0;
}
