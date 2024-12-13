// program to demonstrate working of malloc function in C
#include <stdio.h> // Include standard library for malloc
#include <stdlib.h> // Include standard I/O library for printf
int main() {
    int *ptr; // Declare a pointer to integer
    ptr=malloc(10*sizeof(ptr)); // calling malloc function
    if(ptr!=NULL){  // check if malloc was successful or not
        *(ptr+7)=120; // assign value 120 to integer 8
        printf("value of 8th block is %d\n", *(ptr+7));  // print value of 8th block
        printf("value of 9th block is %d\n", *(ptr+8)); // print value of 9th block
        printf("Address of 8th block is %u\n", (ptr+7)); // print address of 8th block
        // %u used for unsigned decimal integers
        printf("Address of 9th block is %p\n", (ptr+8)); /* print address of 9th block 
        %p format specifier used to print address of a variable or memory location*/
        printf("Address of 8th block is %d\n", (ptr+7)); // address of 8th block in int- %d
        printf("Address of 9th block is %d\n", (ptr+8)); // address of 9th block in int- %d
        printf("Address of other block %d", (ptr+50));
    } 
    return 0;
}
