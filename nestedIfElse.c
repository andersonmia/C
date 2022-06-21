#include<stdio.h>
#include<string.h>
int main(){
	char occupation[20];
	char gender[6];
	double aggregate;
	char name[30];

	printf("Enter your name:");
	scanf("%s",&name);
	printf("\nWelcome %s, Please answer the questions below.\n\n",name);

	printf("Enter your occupation:");
	scanf("%s",&occupation);
	
	if(strcmp(occupation,"student")==0){
		printf("\nEnter your gender:");
		scanf("%s",&gender);

		if(strcmp(gender,"female")==0){
			printf("\nEnter your O-Level aggregate:");
			scanf("%lf",&aggregate);
	
			if(aggregate<=1.9 && aggregate>=1.8){
				printf("\nCongratualtions %s! You are officially enrolled in LuxArt High.",name);
			}
			else{
				printf("\nSorry %s!, you lack some qualifications!",name);
			}
		}
		else{
			printf("\nSorry dear %s, we enroll females only!",name);
		}
	}
	
	else{
		printf("\nSorry %s, we only enroll students!",name);
	}
return 0;	
}
	
//
//#include<stdio.h>
//int main(){
//	char occupation[20];
//	char gender[6];
//	double aggregate;
//	char name[30];
//	
//	printf("Enter your name:");
//	scanf("%s",&name);
//	printf("\nWelcome %s, Please answer the questions below.\n",name);
//	
//	printf("Enter your occupation:");
//	scanf("%s",&occupation);
//	
//	if(occupation=="student"){
//		printf("\n Enter your gender:");
//		scanf("%s",&gender);
//
//		if(gender=="female"){
//			printf("\nEnter your O-Level aggregate:");
//			scanf("%lf",&aggregate);
//	
//			if(aggregate<=1.10 && aggregate>=1.8){
//				printf("\nCongratualtions %s! You are officially enrolled in LuxArt High.",name);
//			}
//			else{
//				printf("\nSorry %s!, you lack some qualifications!",name);
//			}
//		}
//		else{
//			printf("\nSorry dear %s, you lack some qualifications!",name);
//		}
//	}
//	
//	else{
//		printf("\nSorry %s, we only enroll students!",name);
//	}
//return 0;	
//}
