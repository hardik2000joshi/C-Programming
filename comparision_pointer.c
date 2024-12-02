#include <stdio.h>
int main(){
    int x[5]={10, 20, 30, 40, 50}, *p, *t, *r;
    p=&x[0]; // Through & (ampersand) storing memory address of variable x[0] in pointer variable(p)
    t=(x+2);
    r=&x[2];
    if(p==t){
        printf("Address of x [0] is %d\n", p);
        printf("Address of x[1] is %d\n", t);

    }
    if(t==r){
        printf("Address of x[1] is %d\n", t);
        printf("Address of x[1] is %d\n", r);
    }
    return 0;
}