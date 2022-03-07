#include<Stdio.h>
int base,height,hypotenuse;
void
area(base,height,hypotenuse){
   int areaT = (base*height)/2;
   printf("The area of the triangle is: %d",areaT);
}
perimeter(base,height,hypotenuse){
   int aSq = base*base;
   int bSq = height*height;
   int cSq = hypotenuse*hypotenuse;
   
   int perT;
   if(aSq+bSq==cSq){
        perT = (base + height + hypotenuse);
        printf("The perimeter of the triangle is: %d",perT);
    
   }else{
       perT = (base + (hypotenuse*2));
       printf("The perimeter of the triangle is: %d",perT);
    
}
}


int main (){
	int base,height,hypotenuse;

int area(base,height,hypotenuse){
   int areaT = (base*height)/2;
   printf("The area of the triangle is: %d",areaT);
}
int perimeter(base,height,hypotenuse){
   int aSq = base*base;
   int bSq = height*height;
   int cSq = hypotenuse*hypotenuse;
   
   int perT;
   if(aSq+bSq==cSq){
        perT = (base + height + hypotenuse);
        printf("\nThe perimeter of the triangle is: %d",perT);
    
   }else{
       perT = (base + (hypotenuse*2));
       printf("\nThe perimeter of the triangle is: %d",perT);
    
}
}

	
	printf("Enter the base of the triangle:");
	scanf("%d",&base);
	printf("\nEnter the height of the triangle:");
	scanf("%d",&height);
	printf("\nEnter the hypotenuse of the triangle:");
	scanf("%d",&base);
	
	area(base,height,hypotenuse);
	perimeter(base,height,hypotenuse);
}


