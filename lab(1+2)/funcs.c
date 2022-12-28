#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>

void collacting(float *array, int n) {
	for (int i = 0; i < n; i++) {
		int place = i; //we will start from this value at the next check
		for (int j = i + 1; j < n; j++) {
			if (array[j] > array[place]) {
				place = j;
			}
		}
		float temporary = array[i];
		array[i] = array[place];
		array[place] = temporary;
	}
}

void print_array(float *array, int n) {
	for (int i = 0; i < n; i++) {
		printf("%.2f ", array[i]);
	}
	putchar('\n');
}
