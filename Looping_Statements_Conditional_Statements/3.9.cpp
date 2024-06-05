/*Write a program make a summation of given number (E.g., 1523 Ans: -
11)*/
#include<stdio.h>
main()
{
	int n,a,sum=0;
	printf("\n\n\t Input a number  : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		a=n%10;
		
		sum=sum+a;
		
		n=n/10;	
	}
	printf("\n\n\t summation Number = %d",sum);
}
