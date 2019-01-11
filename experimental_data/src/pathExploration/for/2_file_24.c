#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	int garb1 = 0;
	char var1;
	klee_make_symbolic(&var1,sizeof(var1),"var1");
	for (int it=0; it<var1; it++) {
		garb1++;
	}


	int garb0 = 0;
	char var0;
	klee_make_symbolic(&var0,sizeof(var0),"var0");
	for (int it=0; it<var0; it++) {
		garb0++;
	}

	unsigned char x;
	unsigned char c = argv[1][0];
	
	if (c > 127)
		x = c / 3;
	else
		x = c * 2;
	
	if (x > 63)
		printf("if-2-win\n");
	else
		printf("if-2-lose\n");
	
	return 0;
}
