#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	int garb2 = 0;
	for (int it=0; it<argv[1][2]; it++) {
		garb2++;
	}


	int garb1 = 0;
	for (int it=0; it<argv[1][1]; it++) {
		garb1++;
	}


	int garb0 = 0;
	for (int it=0; it<argv[1][0]; it++) {
		garb0++;
	}

	int i,j;
	int sum = 0;
	
	for (i = 0; i < argc; i++) {
		for (j = 1; j <= argv[1][0]; j++) {
			sum += j; 
		} 
	}
	
	printf("Sum is: %d\n", sum);
	
	return 0;
}
