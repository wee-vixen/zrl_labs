#include <stdio.h>
#include "bitwise.h"

int main() {
	puts("HI! Do u have troubles w/ bitwise operation?");
	puts("1 - YESSS/ 0 - NO:>");
	int i = 0;
	scanf("%d", &i);
	if ((i > 1) or (i < 0)) {
		puts("Well, as u wish. I won't help!");
		return 0;
	}
	switch (i) {
		case 0 :
			{
			printf("U R a genius, so u don't belong here\n");
			return 0;
			}
		case 1:
			{
			printf("Ok,I want to help u!\n");
			}
	}

	int tmp = 1;
	int k = 0; //attempt counter
	while (tmp < 6 and tmp > 0) {
		puts("There r 4 actions. U will choose one number depending on desired operation");
		puts("1 - bitwise multiplication,\n2 - bitwise summ,\n3 - exclusive summ,\n4 - reversal\nChoose one");

		if (k > 0) {
			puts("U can leave the selection if u press <5>");
		}
		k++;//after the first loop it makes no sence to exit the program
			//but after the second cycle u can terminate the program

		scanf("%d", &tmp);

		while (tmp > 5 or tmp < 1) {
			printf("There isn't such operation:( Select from the list of existing commands\n");
			scanf("%d", &tmp);
		}

		switch (tmp) {
			case 1: 
				{
				puts("Choise : bitwise multiplication");
				puts("Enter two binary numbers");
				unsigned long int num1 = 0;
				unsigned long int num2 = 0;
				scanf("%lu", &num1);
				puts("and the second number");
				scanf("%lu", &num2);
			
				if (num1 == 0 or num2 == 0) {
					puts("Input error!");
					break;
				}

				int dec_num1 = 0;
				dec_num1 = binarytodecimal(num1);
				//printf("%d\n", dec_num1);
				int dec_num2 = 0;
				dec_num2 = binarytodecimal(num2);
				//printf("%d\n", dec_num2);
				if (dec_num1 == -100 or dec_num2 == -100) {
					puts("The entered number isn't binary");
					break;
				}

				int dec_result = (dec_num1 bitand dec_num2);
				//printf("%d", dec_result); <- answer in decimal form
				unsigned long int bin_result = 0;
				bin_result = decimaltobinary(dec_result);

				printf("Answer is %lu\n", bin_result);				
				break;
				}	
			case 2:
				{
				puts("Choise : bitwise summ");
				puts("Enter two binary numbers");
				unsigned long int num1 = 0;
				unsigned long int num2 = 0;
				scanf("%lu", &num1);
				puts("and the second number");
				scanf("%lu", &num2);
			
				if (num1 == 0 or num2 == 0) {
					puts("Input error!");
					break;
				}

				int dec_num1 = 0;
				dec_num1 = binarytodecimal(num1);
				//printf("%d\n", dec_num1);
				int dec_num2 = 0;
				dec_num2 = binarytodecimal(num2);
				//printf("%d\n", dec_num2);
				if (dec_num1 == -100 or dec_num2 == -100) {
					puts("The entered number isn't binary");
					break;
				}

				int dec_result = (dec_num1 bitor dec_num2);
				//printf("%d", dec_result); <- answer in decimal form
				unsigned long int bin_result = 0;
				bin_result = decimaltobinary(dec_result);

				printf("Answer is %lu\n", bin_result);				
				break;
				}
			case 3:
				{
				puts("Choise : exclusive bitwise summ/ XOR");
				puts("Enter two binary numbers");
				unsigned long int num1 = 0;
				unsigned long int num2 = 0;
				scanf("%lu", &num1);
				puts("and the second number");
				scanf("%lu", &num2);
			
				if (num1 == 0 or num2 == 0) {
					puts("Input error!");
					break;
				}

				int dec_num1 = 0;
				dec_num1 = binarytodecimal(num1);
				//printf("%d\n", dec_num1);
				int dec_num2 = 0;
				dec_num2 = binarytodecimal(num2);
				//printf("%d\n", dec_num2);
				if (dec_num1 == -100 or dec_num2 == -100) {
					puts("The entered number isn't binary");
					break;
				}

				int dec_result = (dec_num1 xor dec_num2);
				//printf("%d", dec_result); <- answer in decimal form
				unsigned long int bin_result = 0;
				bin_result = decimaltobinary(dec_result);

				printf("Answer is %lu\n", bin_result);				
				break;
				}
			case 4:
				{
				puts("Choise : reversal");
				puts("Enter one binary number");
				unsigned long int num = 0;
				scanf("%lu", &num);
				
				if (num == 0) {
					puts("Input error!");
					break;
				}
				int dec_num = 0;
				dec_num = binarytodecimal(num);
				if (dec_num == -100) {
					puts("The entered number is not binary");
					break;
				}
				unsigned char bin_num = dec_num;
				unsigned char not_num = ~bin_num;
				//printf("Answer is %d\n", (int) not_num);
				unsigned long int bin_result = 0;
				bin_result = decimaltobinary((int) not_num);
				printf("Answer id %lu\n", bin_result);
				break;
				}
			case 5:
				{
				puts("Now u can't choose");
				puts("I hope I completed my task correctly");
				puts("Thanks for using. Bye-bye<3");
				return 0;
				}
			default:
				{
				printf("Input error!");
				}
		}
	}	
	puts("There was an outage beyond the permissible limits");	
	return 0;
}
