#include <stdio.h>
#include <stdlib.h>
#include </home/klee/klee_src/include/klee/klee.h>
#include <string.h>

int main(int argc, char* argv[]) {
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
