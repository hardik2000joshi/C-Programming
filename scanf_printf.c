// code to demonstrate working of scanf() and printf() function in strings: 
#include <stdio.h>
int main(){
    char name[20];
    printf("enter your name: ");
    scanf("%s", name);
    // scanf() is used to read input from user- to read strings in C
    // %s is a format specifier to print string values datatype- char format specifier-%s to print strings in C
    printf("%s", name);
    // printf() is used to write strings in c
    return 0;
}