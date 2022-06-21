#include<stdio.h>
#include<stdlib.h>

int main(){

int i, j, n;

printf("Enter the number of rows: ");
scanf("%d",&n);

if(n <= 0){
printf("Thank you for using this program!");
exit(0);
}

for(i = 1; i <= n; i++){
for(j = n; j <= i; j--){
printf("*");
}
printf("\n");
}
}
