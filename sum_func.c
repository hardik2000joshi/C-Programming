#include <stdio.h>
int sum(int a, int b){
    return a+b;
}
int main(){
    int a, b;
    printf("Enter number");
    scanf("%d", &a);
    printf("Enter second number");
    scanf("%d", &b);
    int (*p_sum) (int, int)=sum;
    int result;
    result=p_sum(a, b);
    printf("sum of two entered number is %d", result);
    return 0;
}