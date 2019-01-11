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
		sum += i; 
	}
	
	for (i = 1; i <= 4; i++) {
		sum += sum; 
	}
	
	printf("Sum is: %d\n", sum);
	
	return 0;
}
