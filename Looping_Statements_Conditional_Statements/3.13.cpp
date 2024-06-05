//calculate the Factorial of a Given Number using while loop
#include<stdio.h>
main()
{	int n,i,f;
	printf("\n\n\t enter number :");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("\n\n\t Factorial number :%d",f);	
}
