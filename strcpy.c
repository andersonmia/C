#include<stdio.h>
#include<string.h>
int main(){
	char name[5] = "Mia";
	char name1[5];
	char mia[4]="mia";
	char anderson[10] = "anderson";
	int c = 100;
	int *add;
	strcpy(name1,name);
	printf("%s",name1);
	strcat(mia,anderson);
	printf("\n%s",mia);
	printf("\n\n%u",&mia);
	add = &c;
	printf("\nDereference operator: %d",*add);
	printf("\nDereference operator memory: %u",add);
	return 0;
}
