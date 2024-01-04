#include<stdio.h>

int main() {
    int row, colam;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &colam);

    int A[row][colam];
     int B[row][colam];
     int C[row][colam];
// input form user fast matrix
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colam; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
// input form user 2nd matrix
for (int i = 0; i < row; i++) {
        for (int j = 0; j < colam; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);}
}
 for (int i = 0; i < row; i++) {
        for (int j = 0; j < colam; j++) {
       C[i][j]=A[i][j]+B[i][j];}
 }
// print A matrix
    printf("Matrix A:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colam; j++)
            printf(" %d", A[i][j]);

        printf("\n");
    }
 printf("Matrix B:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colam; j++)
            printf(" %d", B[i][j]);

        printf("\n");
    }

    printf("  Matrix : A +B  \n ");
      for (int i = 0; i < row; i++) {
        for (int j = 0; j < colam; j++)
            printf(" %d", C[i][j]);

        printf("\n");
    }
    return 0;
}
