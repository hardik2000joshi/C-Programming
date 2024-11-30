#include <stdio.h>
int main() {
    // declare 2D array
    int a[3][3]= {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};  //[3] row [3] column
    int i, j;
    for (i=0; i<=2; i++) {
        for (j=0; j<=2; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}