//WAP to print factorial of given number
#include<stdio.h>

main()
{
	int n, i, facto=1;
	
	printf("\n\n\t Input a number to print its factorial : ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		facto=facto*i;
		
		i=i+1; //i=i+1  //3
	}
	printf("\n\n\t Factorial of the given number =   %d",facto);
}
	

