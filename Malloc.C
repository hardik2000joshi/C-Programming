#include <stdlib.h> // Include standard library for malloc
#include <stdio.h> // Include standard I/O library for printf

int main() {
int *ptr; // Declare a pointer to int
ptr = (int*)malloc(10 * sizeof(*ptr)); // Allocate memory for 10 integers and cast void* to int*

if (ptr != NULL) { // Check if malloc was successful
*(ptr + 7) = 80; // Assign the value 80 to the 8th integer
printf("Value of the 8th integer is %d\n", *(ptr + 7)); // Print the value of the 8th integer
printf("Address of 8th integer is %p\n", (void*)(ptr + 7)); // Print the address of the 8th integer
}

free(ptr); // Free the allocated memory

return 0; // Return success
}
