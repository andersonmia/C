#include<stdio.h>
int linearSearch(int arr[],int size, int key){
int i;
for(i = 0; i < size; i++)
    if(key == arr[i])
        return i;
return -1;

}
