#include <stdio.h>

    int num(int a){
        printf("%d", a);
    }
    int main(){
    int (*p_fun)(int)=num;
    p_fun(500);
    return 0;
}