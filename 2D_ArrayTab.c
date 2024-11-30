// program to print all the elements of 2D Array(Array of array) in tabular(table) form using \t
#include <stdio.h>
int main(){
    int x[3][3]= {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; //[3]- row [3]- column 
    // [0][0]= 1  [0][1]=2 [0][2]=3
    // [1][0]= 4  [1][1]=5 [1][2]=6
    // [2][0]= 7  [2][1]=8 [2][2]=9
    int i, j;
    for (i=0; i<=2; i++) {
        for(j=0; j<=2; j++) {
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
    return 0;
}