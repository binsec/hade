#include <stdio.h>
#include <stdlib.h>
#include </home/klee/klee_src/include/klee/klee.h>
#include <string.h>

int main(int argc, char* argv[]) {

	int garb0 = 0;
	char var0;
	klee_make_symbolic(&var0,sizeof(var0),"var0");
	for (int it=0; it<var0; it++) {
		garb0++;
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
