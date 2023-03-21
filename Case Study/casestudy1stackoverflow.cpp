#include <stdio.h>
#include<conio.h>

//Program by: John Lloyd S. Legaspi - BSCS 1-5

int main(void) 
{
    int num, i;
    printf("\t\t\t\t\tEnter a positive number: ");
    scanf("%d", &num);
    
    if(num>=0)
    {

		printf("\t\t\t\t\tPrime factorization of %d: ", num);            //Print the output.
    
	//Determine the prime factors of a number
    	for(i = 2; i <= num; i++) {             //Loop to check the factors.
        while(num % i == 0) {               //While the input is divisible to "i" which is initially 2.
            printf("%d ", i);               //Print the factor.
            num = num / i;                  //Divide the num by "i" which is initially 2 to change the value of num.
            
        }
    }
	}else{
	printf("\t\t\t\tError! Wrong input number.");
}
	getch();
    return 0;
}
