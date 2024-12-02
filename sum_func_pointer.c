#include <stdio.h>
int sum(int a, int b){
    return a+b;
}
int main(){
    int(*p_func)(int, int);
    p_func=sum;
    int result =p_func(100, 50);
    printf("sum of two numbers is:%d", result);
    return 0;
}