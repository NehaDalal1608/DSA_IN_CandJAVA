#include <stdio.h>
void inputMatrix(int mat[10][10], int rows, int cols) 
{
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void displayMatrix(int mat[10][10], int rows, int cols) 
{
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

void lowerTriangular(int mat[10][10], int rows, int cols) 
{
    printf("Lower Triangular Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
        {
            if (i < j) 
            {
                printf("0\t");
            } else {
                printf("%d\t", mat[i][j]);
            }
        }
        printf("\n");
    }
}

void upperTriangular(int mat[10][10], int rows, int cols) 
{
    printf("Upper Triangular Matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            if (i > j) 
            {
                printf("0\t");
            } else {
                printf("%d\t", mat[i][j]);
            }
        }
        printf("\n");
    }
}

void transposeMatrix(int mat[10][10], int rows, int cols) 
{
    printf("Transpose Matrix:\n");
    for (int i = 0; i < cols; i++) 
    {
        for (int j = 0; j < rows; j++) 
        {
            printf("%d\t", mat[j][i]);
        }
        printf("\n");
    }
}

int main() 
{
    int mat[10][10];
    int rows, cols;

    printf("Enter the number of rows and columns (up to 10): ");
    scanf("%d %d", &rows, &cols);

    inputMatrix(mat, rows, cols);

    int choice;
    printf("Choose operation:\n");
    printf("1. Lower Triangular Matrix\n");
    printf("2. Upper Triangular Matrix\n");
    printf("3. Transpose Matrix\n");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1:
            lowerTriangular(mat, rows, cols);
            break;
        case 2:
            upperTriangular(mat, rows, cols);
            break;
        case 3:
            transposeMatrix(mat, rows, cols);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}



/*Output:
Enter the number of rows and columns (up to 10): 2
2
Enter elements of the matrix:
12 34 54 65
Choose operation:
1. Lower Triangular Matrix
2. Upper Triangular Matrix
3. Transpose Matrix
3
Transpose Matrix:
12	54	
34	65	
*/
