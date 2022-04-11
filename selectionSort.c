#include<stdio.h>
int main(){
	int i,n,elements[n],j=0,min,minIndex,start = 0;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("\n");
	
	for(i = 0; i < n; i++){	
		printf("Enter element %d: ",i+1);
		scanf("%d",&elements[i]);
		
	}
	printf("\nThe elements are: ");
	for(j = 0; j < n; j++){
		printf("%d\n",elements[j]);
	}

	min = elements[start];
	for(minIndex = 0; minIndex < n; minIndex++){
		if(elements[minIndex] < min){
			min = elements[minIndex];
		}
	}
	
	printf("\nThe smallest number is %d",min);
	
	
}
