#include <stdio.h>
int main(){
    int x=10, *p;
    p=&x; // Through & (ampersand) storing memory address of variable x in pointer variable(p)
    printf("value of x is %d\n", x);
    printf("Address of x is %d\n", p);
    x--;
    printf("value of x after decrement is %d\n", x);
    p--; // 4 bytes decrement in memory address
    printf("Address of x after decrement is %d\n", p);
    return 0;
}