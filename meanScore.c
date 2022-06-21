#include<stdio.h>
int main(){
	int numberOfSubjects,code,i,marks[numberOfSubjects],total = 0;
	char firstname[15],lastname[15];
	double mean;
	printf("Enter student code: ");
	scanf("%d",&code);
	
	printf("\nEnters student names: ");
	scanf("%14s%*[^,],%14s",&lastname,&firstname);
	
	printf("\nEnter the number of subjects: ");
	scanf("%d",&numberOfSubjects);
	
	int max = numberOfSubjects*100;
	
	for(i = 0; i < numberOfSubjects; i++){
		printf("\nEnter marks for subject %d: ",i+1);
		scanf("%d",&marks[i]);		
		total = total + marks[i];				
	}

	mean = (total/max)*100;

	printf("============= Output =============\n");
	printf("Student: %s %s ID: %d\n",strupr(firstname),strupr(lastname),code);
	printf("Has Obtained: %d/%d\n",total,max);
	printf("Percentage: %.1f%%",mean);
	return 0;
}
