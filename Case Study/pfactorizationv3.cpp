#include<stdio.h>
int main()
{
	int number;
	printf("\t\t\t\t\t\tEnter the number: ");
	scanf("%d", &number);
{
		int i=2;
		printf("\t\t\t\t\tPrime factorization of %d: ", number);
		while(number!=1)
		{
			while(number%i==0)
			{
				printf("%d ",i);
				number=number/i;
			}
			i++;
		}
}
	return 0;
}
