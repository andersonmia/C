#include<stdio.h>
#include<stdlib.h>
int main(){
int num;
FILE *fptr;
FILE *readFile;
char buffer[20];

fptr = fopen("/home/mia/Documents/Github/c/program.txt","w");
if(fptr == NULL)
{
printf("Error!");
exit(1);
}
printf("Enter num: ");
scanf("%d",&num);
fprintf(fptr,"%d",num);
fclose(fptr);

readFile = fopen("/home/mia/Documents/Github/c/program.txt","r");
fread(buffer,sizeof(buffer),sizeof(buffer),readFile);
fclose(readFile);
return 0;
}
