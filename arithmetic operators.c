#include <stdio.h>
int main(void)
{
	int decimal_number;
	printf("Enter a decimal less than 1000:");
	scanf("%d", &decimal_number);
	printf("In octal number system %o\n", decimal_number);
	printf("Using my algorithm:", decimal_number);
	
	int quotient = decimal_number / 8;
	// most significant digit in octal number system (ONS)
	int remainder3 = decimal_number - quotient * 8; //0
	
	decimal_number = quotient;
	quotient = decimal_number / 8;
	// next digit in ONS
	int remainder2 = decimal_number - quotient * 8; //4
	
	decimal_number = quotient;
	//least significant digit in ONS
	quotient = decimal_number / 8;                  //2
	//next digit in ONS
	int remainder1 = decimal_number - quotient * 8;  //1
	
	
	printf("%d", quotient);
	printf("%d", remainder1);
	printf("%d", remainder2);
	printf("%d", remainder3);	
		
}















