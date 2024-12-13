// program to demonstrate working of gets() and puts() in string in C Programming:
#include <stdio.h>
int main(){
    char name[20];
    puts("enter your name: ");
    gets(name); // gets() is used like a scanf() function used to read strings in C Programming to enter user input
    puts (name);
    // puts() is used like a printf() function used to write strings in C Programming
    return 0;
}