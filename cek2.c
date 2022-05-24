#include<stdio.h>

void transpose(int matrix[2][2]);
int determinant(int matrix[2][2]);

int main(){
    int i, j, k, repeat = 1;
    int matrix[2][2], b[2][2], c[2][2];

    while (repeat != 0)
    {
        printf("Enter matrix elements:\n");
        for ( i = 0; i < 2; i++)
        {
            for ( j = 0; j < 2; j++)
            {
                printf("> ");
                scanf("%d", &matrix[i][j]);
            }

        }
        transpose(matrix);
        determinant(matrix);
        printf("Do you want to input again? (0 = No, 1 = Yes)\n");
        printf("> ");
       
        scanf("%d", &repeat);
    }

    return 0;
}

void transpose(int matrix[2][2]){
    int transpose [2][2];
    int i, j;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            transpose[j][i] = matrix[i][j];
        }

    }
    printf("Transpose of the matrix is:\n");
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 2; j){
            printf("%d\t", transpose[i][j]);
        }
    printf("\n");
    }
}

int determinant(int matrix[2][2]){
    int determinant = matrix[0][0]*matrix[1][1] - matrix[1][0]*matrix[0][1];
    printf("Determinant of the matrix is:\n");
    printf("%d\n", determinant);
}
