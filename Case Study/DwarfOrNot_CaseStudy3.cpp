#include <stdio.h>

//Program by: John Lloyd S. Legaspi - BSCS 1-5

/* Write a program that will input non-negative integer and call a function DWARF to 
determine if the integer is DWARF or NOT. An integer is said to be DWARF if the sum of 
its factors is greater than the half of the number.*/

void DWARF(int num){
    int sumOfFactors = 0;										//variable for the sum of the factors
    
    // For the list of the factors and its sum
    
    printf("Factors are: ");   					
    for (int i = 1; i < num; ++i) {								//loop for finding the factors
        if (num % i == 0) {										//condition 
            printf("%d ", i);									//print the factor
            sumOfFactors+=i;									//calculate the sum of the factors
        }
    }
    printf("\nSum of its factors: %d", sumOfFactors);			//print the sum of the factors
    	
    // For the half of the number
    
    float halfOfNum = ((float)num/2);												//variable for the half of the number
    printf("\nHalf of the number : %d/2 = %0.2f", num, halfOfNum);		           	//print the half of the number
    
    // Is number DWARF or NOT DWARF
    
    if(sumOfFactors > halfOfNum){								//condition if the number is DWARF or NOT	
        printf("\n%d is DWARF",num);							//print DWARF if true
    }else{
        printf("\n%d is NOT DWARF",num);						//else print NOT DWARF
    }
}

int main() {
    int input;													//variable for the input number

	// Input number
    printf("Enter non-negative integer value : ");				//prompt user to input number
    scanf("%d",&input);											//take the input number from the user
    
    // Is number non-negative or not
	if(input < 0){												//condition if number is negative
        printf("Error! Please input a non-negative integer.");	//print error if true
    }else{
    	printf("Input number: %d\n", input);					//else print the input number
        DWARF(input);											//then proceed to the process
    }
    return 0;
}
