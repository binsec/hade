#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {

	int garb4 = 0;
	for (int it=0; it<argv[1][4]; it++) {
		garb4++;
	}


	int garb3 = 0;
	for (int it=0; it<argv[1][3]; it++) {
		garb3++;
	}


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

	const char str[17] = {garb0, garb1,garb2, garb3, garb4, argv[1][5],argv[1][6],argv[1][7],argv[1][8],argv[1][9],argv[1][10],argv[1][11],argv[1][12],argv[1][13],argv[1][14],argv[1][15],'\0'};

        printf("résultat : %s\n",str);

	register const char *s, *t;

	for (t = str; *t; ++t) {
		sum += *t;
	}
			
	printf("Sum is: %d\n", sum);
	
	return 0;
}
