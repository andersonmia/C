#include<stdio.h>
int main(){
	char mia[5] = "mia";
	char *me;
	me = mia;
	printf("The address of variable is: %u",mia);
	printf("\nThe address of pointer is: %u",me);
	printf("\nThe content of pointer is: %c",*(me+1));
}
