/*WRITE A PROGRAM THAT USES THE REORDER( )
FUNCTION TO SORT AN ARRAY OF INTEGERS.*/


#include <stdio.h>

// Creates a function that sorts the array of integers

void reorder(int arr[], int n) {
	int temp;
		for (int i = 0; i < n-1; i++) {
			for (int j = 0; j < n-i-1; j++) {
				if (arr[j] > arr[j+1]) {
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
}

int main() {
	
//Prompt the user to input the desired number of elements of the array

	int n;
	printf("Input the number of elements in the array: ");
	scanf("%d", &n);

//Prompt the user to enter the elements of the array

	int arr[n];
	printf("\nInput the elements of the array:\n");
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}

//Calls the reorder function

	reorder(arr, n);

//Print the sorted array

	printf("\nResult of the sorted array:\n");
		for (int i = 0; i < n; i++) {
			printf("%d ", arr[i]);
		}
	printf("\n");
	
	return 0;
}
