#include<Stdio.h>
void main(){
	char lastname[11];
	char firstname[11];
	
	printf("Enter your name (last , first): ");
	scanf("%10s%*[^,],%10s",lastname,firstname);
	printf("Nice to meet you %s %s\n",firstname,lastname);
}
