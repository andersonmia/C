#include<stdio.h>
int main(){
	int i,j,k;
	char *mia[25][50][25]={{"Anderson is a good girl."},
	{"She is glad that it is the last day for the exams."},
	{"She is literally overjoyed!"}
	};

for(i = 0; i < 25; i++){
	for(j = 0; j < 50; j++){
		for(k = 0; k < 25; k++){
			printf("%s\n",mia[i][j][k]);
		}
	}
}
return 0;
}
