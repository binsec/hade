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

	unsigned char c = argv[1][0];
	
	if (c > 63) {
		printf("if-1-win ");
		unsigned char x = (c / 3) * 2;
		if (c > 127)
			printf("if-2-win\n");
		else
			printf("if-2-lose\n");
	} else {
		printf("if-1-lose\n");
	}
	return 0;
}
