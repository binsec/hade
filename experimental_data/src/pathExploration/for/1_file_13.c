#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	int garb0 = 0;
	char var0;
	klee_make_symbolic(&var0,sizeof(var0),"var0");
	for (int it=0; it<var0; it++) {
		garb0++;
	}

	if (argc < 2) {
		printf("Usage: program-name argument\n");
		return 1;
	}
	
	return 0;
}
