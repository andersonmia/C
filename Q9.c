#include<stdio.h>

int main(){
	int marks,code,numberOfSubjects,i,total=0,totalize;
	char firstname[15],lastname[15];
	double percentage;
	
	printf("======================= input ======================\n");
	printf("\nEnter student code:");
	scanf("%d",&code);
	
	printf("Enter student names:");
	scanf("%14s%*[^,],%14s",firstname,lastname);
		
	printf("Enter number of subjects:");
	scanf("%d",&numberOfSubjects);
	
	for(i=0;i<numberOfSubjects;++i){
		printf("\nEnter marks for subject %d:",i+1);
		scanf("%d",&marks);	    
		totalize= total+marks;
		total=totalize;		
	}
	
	percentage= totalize*100/(numberOfSubjects*100);
	
	printf("\n======================= Output ======================\n");
	printf("\nStudent: %s %s",strupr(lastname),strupr(firstname));
	printf(" ID: %d\n",code);
	printf("Has Obtained: %d/%d\n",totalize,numberOfSubjects*100);
	printf("Percentage: %.1f%% \n",percentage);
	
	return 0;
}
