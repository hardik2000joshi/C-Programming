#include <stdio.h>
int main(){
    int a[5]={10, 20, 30, 40, 50}, *p, *q, *r;
    p=&a[0];
    q=(a+2);
    r=&a[2];
    if(p==q){
        printf("Address of a[0] is=%d\n", p);
        printf("Address of a[1] is=%d\n", q);

    }   
    if(q==r){
        printf("Address of a[1] is=%d\n", q);
        printf("Address of a[2] is=%d\n", r);
    } 
    return 0;
}