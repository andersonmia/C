#include<stdio.h>

int main()
{
	int n,i,j,k;
	
	printf("Please input a number: ");
	scanf("%d",&n);
	
	if((n <= 0) || (n%2==1) || (!isdigit(n)) ){
		printf("Thank you for using this program\n");
		
	}
	
	for(i=0 ; i<n ; i++)
	{
		for(j=n ; j>i ; j--)
			printf(" ");

		for(k=0 ; k<=i; k++)
		{
			if(k%2==0)
				printf("*");
			else
				printf("*");
		}
		printf("\n");
	}
    
    return 0;
}
