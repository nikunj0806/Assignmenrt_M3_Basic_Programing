// Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
main()
{
	int n,sum=0,i;
	printf("\n\n \t enter Natural number : ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("\n\n \t Sum of Natural Numbers  :%d ",sum);
}
