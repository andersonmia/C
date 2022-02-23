#include<stdio.h>
int main(){
	int num1, sum1, sum2;
	for(num1 = 2, sum1=0, sum2 = 0; num1<=20; num1 = num1 +2 ){
		sum1 = sum1 + num1;
		sum2 = sum2 + num1 * num1;
	}
	printf("Sum of the first 20 even natural numbers = %d\n",sum1);
	printf("Sum of the square for the first 20 even natural numbers = %d",sum2);
	return 0;
}
