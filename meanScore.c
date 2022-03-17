#include<stdio.h>
int main(){
	int numberOfSubjects,code,i;
	
	double marks[numberOfSubjects],total = 0,mean;
	printf("Input a student code: ");
	scanf("%d",&code);
	
	printf("\nEnter the number of subjects: ");
	scanf("%d",&numberOfSubjects);
	
	int max = numberOfSubjects*100;
	
	for(i = 0; i < numberOfSubjects; i++){
		printf("\nEnter Subject %d marks[i]: ",i+1);
		scanf("%lf",&marks[i]);		
		total = total + marks[i];			
	}
	mean = (total/max)*100;

	printf("\nSTUDENT NUMBER: %d",code);
	printf("\nTOTAL MARKS OBTAINED: %.2f/%d",total,max);
	printf("\nPERCENTAGE: %.2f%%",mean);
	return 0;
}
