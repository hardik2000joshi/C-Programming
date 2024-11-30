#include <stdio.h>
int main(){
    int a=10, *p;
    p=&a; // Through & (ampersand) storing memory address of variable a in pointer variable(p)
    printf("Address of a is%d\n", p);
    p++;
    printf("Address of a is %d\n", p);
    return 0;
}