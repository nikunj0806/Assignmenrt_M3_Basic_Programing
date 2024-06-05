/*Accept 5 numbers from user and perform
sum of array*/
#include<stdio.h>
main()
{
	int n[5],i,sum=0;
	printf("\n\n\t enter  5 number ");
	i=0;
	while(i<5)
	{
		printf("\n\n\t enter number :");
		scanf("%d",&n[i]);
		sum=sum+n[i];
		i++;
	}
	printf("\n\n\t sum = %d",sum);
}
