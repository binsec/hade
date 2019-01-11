#include <stdio.h>
#include <stdlib.h>
#include </home/klee/klee_src/include/klee/klee.h>
#include <string.h>

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

	klee_make_symbolic(argv[1],strlen(argv[1])+1,"input");
	
	for (i = 0; i < 127; i++) {
		for (j = 0; j < argv[1][0]; j++) {
			sum += j; 
		} 
	}
	
	printf("Sum is: %d\n", sum);
	
	return 0;
}
