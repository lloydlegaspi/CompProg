#include <stdio.h>
// Count all odd and even numbers in an array with 10 elements.
int main() {
	int numbers[10];   //declaration of array variable
	int odd_count = 0, even_count = 0;   //initialization for the counter of even and odd numbers
		
	printf("Enter 10 numbers:\n");  //prompt the user to enter 10 numbers
	for (int i = 0; i < 10; i++) {  //read the user input
    	scanf("%d", &numbers[i]);   //take the user input
    }
    
	for (int i = 0; i <10; i++) {  //loop to check if a number is odd or even
		if (numbers[i] % 2 == 0) {   //if number is even, then increment 1 in even_count
			even_count++;
		} else {                   //else if numebr is odd, then increment 1 in odd_count
			odd_count++;
		}
	}
	
	printf("Count of odd numbers: %d\n", odd_count);  //print the count of odd numbers
	printf("Count of even numbers: %d\n", even_count); //print the count of even numbers
					
	return 0;
}

