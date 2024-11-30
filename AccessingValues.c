#include <stdio.h>
int main(){
    int x;
    printf("Enter value of x\n");
    scanf("%d", &x); // & used to return memory address of the variable
    int *p;
    p=&x;
    printf("value of x entered by user is %d\n", x);
    printf("Address of variable x is %p\n", p); // %p- format specifier in c programming to print address stored in pointer variable
    printf("Address of variable x is %d\n", p);
    printf("Getting value from pointer variable is %d\n", *p);
    printf("Address of variable x is %d\n", p);
    printf("Address of variable x is %u\n", p);  // %u- format specifier used to print unsigned integer values
    *p=500;
    printf("New value of x is %d\n",x); 
    return 0;
} // & used to return memory address of the variable