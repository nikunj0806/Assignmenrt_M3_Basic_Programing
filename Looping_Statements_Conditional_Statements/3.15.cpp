//Calculate sum of 10 numbers using of while loop
#include<stdio.h>
main()
{	
	int i,j,n[10],sum=0;
	i=1;
	while(i<=10)
	{	printf("\n\n\t enter number: ");
		scanf("%d",&n[i]);
		sum=sum+n[i];
		i++;
	}
	printf("\n\n\t sum:%d ",sum);	
}
