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

	int i;
	int sum = 0;
	
	if (argc < 2) {
		printf("Usage: program-name char\n");
		return 1;
	}
	
	for (i = 0; i < argv[1][0]; i++)
		sum += i;
		
	printf("Sum is: %d\n", sum);
	
	return 0;
}
