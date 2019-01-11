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

	int i,j;
	int sum = 0;
	
	const char *str = argv[1];
	register const char *s, *t;

	for (i = 0; i < 16; i++) {
		sum += i;
	}
	
	for (t = str; *t; ++t) {
		sum += *t;
	}
	
	printf("Sum is: %d\n", sum);
	
	return 0;
}
