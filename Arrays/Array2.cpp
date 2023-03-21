#include <stdio.h>
//Program by: John Lloyd S. Legaspi - BSCS 1-5
//Count the frequency of each element in an array whose number of elements are inputted by user using the keyboard.
int main() {
	int n, i; //declare variable for the number of elements, and the numbers
	printf("Enter the number of element of the array: "); //prompt the user to input the number of elements
	scanf("%d", &n); //read the user input
	
	int array[n]; //declare array variable 
	printf("Enter %d numbers: \n", n); //prompt the user to input the specified numbers
	for (int i = 0; i < n; i++) {   //check the input numbers
		scanf("%d", &array[i]);     //read the user input
	}
	
	int frequency[100000] = {0};     //declare array variable for the frequency of each numbers
	for (int i = 0; i < n; i++) {  //count the frequency of each numbers
		frequency[array[i]]++;     //increment the count of frequency for each array[i]
	}
	
	for (int i = 0; i < 100000; i++) {  //print the result
		if (frequency[i]) {     //only print the numbers the user inputted
		printf("%d occurs %d times\n", i, frequency[i]);
		}
	
	}
	return 0;
	
}
