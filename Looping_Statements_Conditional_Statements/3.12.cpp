
//Program of Armstrong Number in C Using For Loop & While
#include<stdio.h>
main()
{
	int n, rem, sum=0,a;
	printf("\n\n\t Input a number to revrese  : ");
	scanf("%d",&n);
	a=n;
	
	while(n!=0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		
		n=n/10;	
	}
	if(a==sum)
	printf("\n\n\t Armstrong Number");
	else
	printf("\n\n\t not Armstrong Number");
}
