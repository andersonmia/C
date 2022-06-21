#include<stdio.h>

int main(){
	char firstname[15];
	char lastname[15];
	printf("Enter your names (lastname , firstname):");
	scanf("%14s%*[^,],%14s",&lastname,&firstname);
	printf("\n Your names are beautiful %s %s",lastname,firstname);
	return 0;
}
