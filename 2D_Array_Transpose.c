// program to find transpose of matrix in an array:
#include <stdio.h>
int main() {
    int arr[100][100], transpose[100][100];
    int row, column, i, j;
    printf("Enter row");
    scanf("%d", &row);
    printf("Enter column");
    scanf("%d", &column);
    printf("Enter values in an array");
    for (i=0; i<=row; i++) {
        for(j=0; j<=column; j++) {
            scanf("%d", &arr[i][j]);
        }   
    }
    printf("Entered Matrix is:");
    for (i=0; i<=row; i++){
        for (j=0; j<=column; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    // transpose of matrix:
    for (i=0; i<=row; i++) {
        for (j=0; j<=column; j++) {
            transpose[i][j]=arr[j][i];  // transpose [i]= arr[j]  transpose [j]= arr[i]
        }
    }   
    printf("transpose of matrix is: ");
    for (i=0; i<=row; i++){
        for (j=0; j<=column; j++){
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}