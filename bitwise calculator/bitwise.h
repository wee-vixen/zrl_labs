#ifndef BITWISE_H
#define BITWISE_H

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iso646.h>
#define MAX(x, y) (x>y) ? x : y

unsigned long int decimaltobinary (int number) {
	int raz = 1;
	unsigned long int result = 0;
	while (number) {
		result += (number % 2) * raz;
		raz*=10;
		number/=2;
	}
	return result;
}

int binarytodecimal (unsigned long int number) {
	unsigned long int tmp = 0;
	tmp = number;
	while (tmp not_eq 0) {
		if (tmp % 10 > 1) {
			return -100;
		}
		tmp/=10;
	}

	int result = 0;
	int k = 0; //counter
	int ostat = 0;
	while (number not_eq 0) {
		ostat = number % 10;
		number/=10;
		result += ostat * pow(2, k);
		++k;
	}
	return result;
}

#endif //BITWISE_H//
