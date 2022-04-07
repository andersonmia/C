#include<stdio.h>
int main(){
	int a = 5;
	int *p = &a;
	*p = 8;
	printf("The memory of pointer: %u",p);
	printf("The content of pointer: %d",*p);
}
