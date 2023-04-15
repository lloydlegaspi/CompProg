#include <stdio.h>

/*function that prompts the user to enter the number of rows and columns for a matrix, 
and stores the values in the 'rows' and 'cols' variables using pointers.*/

void inputSize(int *rows, int *cols) {
    printf("Enter number of rows: ");
    scanf("%d", rows);
    printf("Enter number of columns: ");
    scanf("%d", cols);
}

/*function that prompts the user to enter the elements of a matrix, 
and stores the values in a 2D array called 'matrix.'*/

void inputElements(int matrix[][100], int rows, int cols) {
    int i, j;
    printf("\nEnter elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main() {
    int matrix1[100][100], matrix2[100][100];
    int rows1, cols1, rows2, cols2;
    int i, j;
    
    printf("Input the number of rows and columns for the two matrices.(It must have the same sizes.)\n");

    // input size of first matrix
    printf("\n-- Size for matrix 1 --\n");
    inputSize(&rows1, &cols1);

    // input size of second matrix
    printf("\n-- Size for matrix 2 --\n");
    inputSize(&rows2, &cols2);

    // check if matrices have the same sizes
    if (rows1 != rows2 || cols1 != cols2) {
        printf("\nThe two matrices are not equal. Try again and make it have the same sizes.\n");
        return 0;
    }
    
    printf("\nGreat! The two matrices are the same size. Let's now input their elements.\n");

    // input elements of first matrix
    printf("\n-- Elements for matrix 1 --");
    inputElements(matrix1, rows1, cols1);

    // input elements of second matrix
    printf("\n-- Elements for matrix 2 --");
    inputElements(matrix2, rows2, cols2);

    // compare the elements of the two matrices
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                printf("\nThe two matrices are not equal.\n");
                return 0;
            }
        }
    }

    printf("\nThe two matrices are equal.\n");

    return 0;
}


