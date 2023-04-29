/*PROGRAM THAT FINDS THE MAXIMUM AND MINIMUM ELEMENTS OF A TWO-DIMENSIONAL ARRAY USING POINTERS*/

#include <stdio.h>

int main() {
	
// Prompt the user to input the desired size of the 2D array

	int row, col;
	printf("Enter the number of rows and columns of the array: ");
	scanf("%d %d", &row, &col);
	
// Prompt the user to input the desired elements of the 2D array

	int arr[row][col];
	printf("Enter the elements of the array:\n");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%d", &arr[i][j]);
	}
}
	int *ptr = &arr[0][0];
	int min = *ptr;
	int max = *ptr;

/* Iterate over all the elements of the array, comparing each element
to the current minimum and maximum values and updating them if
necessary. */

	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			if(*(ptr + i * col + j) < min) {
				min = *(ptr + i * col + j);
			}
			if(*(ptr + i * col + j) > max) {
				max = *(ptr + i * col + j);
			}
		}
	}
	
// Print out the values of min and max to confirm that they have been correctly calculated.

	printf("\nThe maximum element in the array is: %d\n", max);
	printf("The minimum element in the array is: %d\n", min);
	
	return 0;
}

