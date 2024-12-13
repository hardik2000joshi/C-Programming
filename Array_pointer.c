#include <stdio.h>
int main(){
    int *aptr[3];
    int a=123, b=456, c=789, i;
    aptr[0]= &a; // storing memory address of variable a in aptr[0]index
    aptr[1]= &b; // storing memory address of variable b in aptr[1]index
    aptr[2]= &c; // storing memory address of variable c in aptr[2]index
    for (i=0; i<3; i++){
        printf("Address=%d\t value=%d\n", aptr[i], *aptr[i]);
    }
    return 0;
    //1 memory address= 4 bytes
}