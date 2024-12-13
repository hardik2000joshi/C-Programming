// program to demonstrate working of malloc function in C
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr;
    ptr=malloc(10*sizeof(ptr)); // calling malloc function
    if(ptr!=NULL){
        *(ptr+7)=120;
        printf("value of 8th block is %d", *(ptr+7));
    } 
    return 0;
}
