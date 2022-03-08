#include<stdio.h>
int sum(int number);

int summer(int number){
	int result;
	if(number>0){
	return result = number + summer(number-1);
	}

}

int main(){
	int x;
	printf("Enter a number of your choice: ");
	scanf("%d",&x);
	summer(x);
	int result = summer(x);

	printf("\nThe sum of the numbers less than %d with %d inclusive is %d",x,x,result);
	return 0;
}

