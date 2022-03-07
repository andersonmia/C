#include<stdio.h>
int main(){
    char name[]="Anderson Mia";
    printf("%c",*(name));
    printf("%c",*(name+1));
    printf("%c",*(name+2));
    printf("%c",*(name+3));
    printf("%c",*(name+4));
    printf("%c",*(name+5));
    printf("%c",*(name+6));
    printf("%c",*(name+7));

    //the pointer helps in the string manipulation
    printf("\n");
    char *pointername;
    pointername = name;
     printf("%c",*(pointername));
    printf("%c",*(name+1));
    printf("%c",*(name+2));
    printf("%c",*(name+3));
    printf("%c",*(name+4));
    printf("%c",*(name+5));
    printf("%c",*(name+6));
    printf("%c",*(name+7));
    return 0;
}
