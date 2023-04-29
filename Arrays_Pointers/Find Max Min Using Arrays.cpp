/*PROGRAM THAT FINDS THE MAXIMUM AND MINIMUM ELEMENTS OF A TWO-DIMENSIONAL ARRAY USING ARRAYS*/

#include <stdio.h>

int main() {
	
// Prompt the user to input the desired size of the 2D array

	int row, clmn;
	printf("Enter the number of rows and columns: ");
	scanf("%d %d", &row, &clmn);
	
// Prompt the user to input the desired elements of the 2D array

	int arr[row][clmn];
	printf("\nEnter the elements of the array:\n");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < clmn; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

/* Iterate over all the elements of the array, comparing each element
to the current minimum and maximum values and updating them if
necessary. */

	int max = arr[0][0], min = arr[0][0];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < clmn; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
			if (arr[i][j] < min) {
				min = arr[i][j];
			}
		}
	}

	
// Print out the values of min and max to confirm that they have been correctly calculated.

	printf("\nThe maximum element in the array is: %d\n", max);
	printf("The minimum element in the array is: %d\n", min);
	
	return 0;
}
