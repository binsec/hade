#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	int garb = 0;
	int k = 10;
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
    if (sum < 127) {
      sum += 64;
    }

    sum += i;
  }

  printf("Sum is: %d\n", sum);

  return 0;
}
