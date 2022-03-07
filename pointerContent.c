#include<stdio.h>
int main(){
	int*pc,c;
	 c=22;
	 printf("Adress of c:%u\n",&c );
	 printf("Value of C:%d\n\n",c);
	 
	 
	 pc=&c;
	 printf("Adress of pointer pc:%u\n",pc);
	 printf("Content odf pointer pc:%d\n\n",pc);
	 
	 
	 c=11;
	 printf("Adress of pointer pc:%u\n",pc);
	 printf("Content of pointer pc:%d\n\n",*pc);
	 
	 
	 *pc=2;
	 printf("Adress of c :%u\n",&c);
	 printf("Value of c:%d\n\n",c);
	 
	 return 0;
}
