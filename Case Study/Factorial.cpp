#include <stdio.h>

//Program by: John Lloyd S. Legaspi - BSCS 1-5

/*N factorial can be defined as the product of all integers from 1 to N and it is denoted by 
the symbol N!. 0! (zero factorial) is defined as 1. Write a program that will input N and 
would display N factorial. (Determine first if N is a nonnegative integer).*/

int main() {
    int num, i;													//variable for the number and i
    unsigned long long fact = 1;								//factorial variable
    
	// Input number
	printf("Enter a number to find the factorial: ");           //prompt the user to input number
    scanf("%d", &num);											//take the input from the user

    // Is number a non-negative integer or not
    if (num < 0)	{												//if the user enters a negative integer
        printf("Error! Please input a non-negative integer.");  //print error
    }else {														//else proceed to the process
        for (i = 1; i <= num; ++i) {							//loop to check the factors
            fact= fact*i;										//calculate the N-factorial
        }
        printf("N-Factorial of %d = %llu ", num, fact);			//print the N-factorial of the number
    }
	
    return 0;													//end of program
}

