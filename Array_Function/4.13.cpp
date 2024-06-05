/*WAP to accept 5 numbers from user and check entered number is even
or oddusing of array*/
#include<stdio.h>
main()
{
	int n[5],i;
	printf("\n\n\t enter 5 number");
	i=0;
	while(i<5)
	{
		printf("\n\n\t enter  number : ");
		scanf("%d",&n[i]);
		i++;
	}
	i=0;
	while(i<5)
	{
		if(n[i]%2==0)
		{
			printf("\n\n\t %d  number is even ",n[i]);
		}
		else
		{
				printf("\n\n\t %d  number is odd ",n[i]);
		}
		i++;
	}
	
}
