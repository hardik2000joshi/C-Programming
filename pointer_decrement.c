#include <stdio.h>
int main(){
    int z=25, *ptr;
    ptr=&z; // Through & (ampersand) storing memory address of variable a in pointer variable(p)
    printf("Address of a is%d\n", ptr);
    ptr--;
    printf("Address of a is %d\n", ptr);
    return 0;
}