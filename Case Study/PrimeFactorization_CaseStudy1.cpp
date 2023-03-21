#include <stdio.h>
#include<conio.h>

//Program by: John Lloyd S. Legaspi - BSCS 1-5

/*Write a program that accepts a positive integer and gives its prime factorization, that 
expresses the integer as a product of primes.*/

int main() {
    int num, i;										//variable for the number and i									
    
    // Input number
    printf("\t\t\t\t\tEnter a positive number: ");	//prompt the user to input number
    scanf("%d", &num);								//take the input number from the user
    
    // Is number positive or not
    if(num>=0) {												//proceed to the process if true
		printf("\t\t\t\t\tPrime factorization of %d: ", num);   //print the output for prime factorization
    
	//Determine the prime factors of a number
    	for(i = 2; i <= num; i++) {             	//loop for finding the factors.
        while(num % i == 0) {              			//While the input is divisible to "i" which is initially 2.
            printf("%d ", i);           			//Print the factor.
            num = num / i;                 			//Divide the num by "i" which is initially 2 to change the value of num.  
			}
		}
	}else{											//else if the number is not positive
	printf("\t\t\t\tError! Please input a positive number.");   //print error
}
	getch();										
    return 0;										//end of program
}
