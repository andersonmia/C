#include<stdio.h>
enum week{mon = 10, tue,wed,thur,fri = 10, sat,sun
};
enum day{mond,tues,wedn,thurs,frid = 18,satu,sund
};

int main(){
	printf("The value of enum week :\t  %d\t%d\t%d\t%d\t%d\t%d\t%d\t",mon,tue,wed,thur,fri,sat,sun);
	printf("\nThe default value of enum day :   %d\t%d\t%d\t%d\t%d\t%d\t%d\t",mond,tues,wedn,thurs,frid,satu,sund);
	return 0;
}
