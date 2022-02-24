#include<stdio.h>
int multiply(int n);

int main(){
	int  number, result;
	printf("Enter a positive integer:");
	scanf("%d",&number);
	
	result = multiply(number);
	
	printf("factorial = %d",result);
	return 0;
	
	
}

int multiply(int num){
	if(num >=1){
		return num * multiply(num-1);
	}else{
		return 1;
	}
}
