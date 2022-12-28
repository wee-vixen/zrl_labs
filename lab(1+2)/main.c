#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcs.h"

int main() {
	int n = 0;
	puts("ENTER THE DIMENSION OF THE ARRAY");
	scanf("%d", &n);
	if (n < 1) {
		puts("HMM, ERROR!! The dimention of the array must be >= 1!");
		exit(0);
	}

	float *array = (float *) calloc(n, sizeof(float));
	if (array == NULL) {
		puts("Some problems with allocating memory for the array!");
		exit(0);
	}
	puts("We start writing numbers to the array");
	for (int i = 0; i < n; i++) {
		scanf("%f", &array[i]);
	}	
	puts("It's over");

	collacting(array, n);
	print_array(array, n);

	free(array);
	return 0;
}
