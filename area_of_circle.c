//program to find area of circle:
#include <stdio.h>
int main(){
    float pi=3.14, area;
    int r;
    printf("Enter radius to find area of circle");
    scanf("%d", r);
    area=pi*r*r;
    printf("Area of circle is %f", area);
    return 0;
} 