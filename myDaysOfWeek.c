#include<stdio.h>
int main(){
	char *week[7] = {
		{"Sunday"},
		{"Monday"},
		{"Tuesday"},
		{"Wednesday"},
		{"Thursday"},
		{"Friday"},
		{"Saturday"},
	};
	char day[15];
	int count = 0;
	
	printf("Enter the day of the week: ");
	scanf("%s",day);
	
	while((count < 7) && strcmp(day,week[count])==0){
		count++;		
	}
	if(count < 7){
		printf("The day %s is day no.%d",day,count);
	}else{
		printf("Invalid day");
	}
	
}
