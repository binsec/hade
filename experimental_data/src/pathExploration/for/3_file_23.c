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

	unsigned char x;
	unsigned char c = argv[1][0];
	
	if (c > 127)
		x = c / 3;
	else
		x = c * 2;
	
	if (x == 63)
		printf("if-2-win\n");
	else
		printf("if-2-lose\n");
	
	return 0;
}
