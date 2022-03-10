#include<stdio.h>
int main(){
	int i,j;
	char *multi[8][8] = {
	{"Mia","Anderson","is","a","good","girl"},
	{	"Grace","Fidele","is","my","ninja","twin"}
	};
	
	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			printf("%s\n",multi[i][j]);
		}
		printf("\n");
	}
	return 0;
}
