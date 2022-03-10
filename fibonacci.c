#include<stdio.h>

int main (){
	int num1 = 0, num2 = 1, num3, limit = 8, i;
	for(i = 0; i < limit; i++){
		 num3 = num1 + num2;
		 num1 = num2;
		 num2 = num3;
		 printf("%d ",num3);
	}
	return 0;
}

