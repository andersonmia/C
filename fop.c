#include<Stdio.h>

int main(){
int i;
for(i=1;i<=10;i++){
	if(i==5)
		continue;
	
	if(1==9)
	break;
	printf("%d",i);
}

	return 0;
}
