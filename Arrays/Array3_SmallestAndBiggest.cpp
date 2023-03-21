#include <stdio.h>
//Get the smallest and the biggest value in the array with 10 elements.
int main() {
	int array[10],i,biggest,smallest;  //declare variables
	printf("Enter 10 numbers: \n");    //prompt user to input 10 numbers
	for(i=0;i<10;i++)                  //read the numbers
	scanf("%d",&array[i]);             //take the numbers

	biggest=smallest=array[0];         //set smallest and biggest to the first element in the array
	for(i=1;i<10;i++) {                //loop through the rest of the array
		if(array[i]>biggest)           //check if number is the biggest
		biggest=array[i];

		if(array[i]<smallest)          //check if the number is smallest
		smallest=array[i];
	}

//print results
printf("\nThe smallest number is: %d",smallest);
printf("\nThe biggest number is: %d\n",biggest);

return 0;
}
