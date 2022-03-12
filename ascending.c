#include<stdio.h>
int main(){
	int i,j,k,n,collection[n];
	
	printf("Enter the number of elements for your array: ");
	scanf("%d",&n);
	
	for(i = 0; i < n; i++){
		printf("Enter the %d th number: ",i+1);
		scanf("%d",&collection[i]);		
		printf(" Collection at index %d is %d \n",i,collection[i]);
		printf("\n");
	}

	for(j = 0; j < n; j++){
		for(k = 1; k < j; k++){
			if()
		}
	}
	
	return 0;
}
