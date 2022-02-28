//function ageToDays(years,months,days){
//    int age = ((years*365) + (months*28) + days);
//    console.log(`Your age in days is approximatetly ${age} days`);
//}
//ageToDays(16,11,0);
#include<Stdio.h>
 int years,months,days;
void ageToDays( years,months,days){
		int age = ((years*365) + (months*28) + days);
		printf("Your age in days is approximately: %d",age);
}
 int main(){
 	printf("Enter the number of years:");
 	scanf("%d",&years);
 	printf("\nEnter the number of months:");
 	scanf("%d",&months);
 	printf("\nEnter the number of days:");
 	scanf("%d",&days);
 	
 	ageToDays(years,months,days);
 	return 0;
 }
