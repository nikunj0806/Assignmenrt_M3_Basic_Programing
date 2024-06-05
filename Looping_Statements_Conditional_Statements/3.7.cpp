/*WAP to print number in reverse order e.g.: number = 64728 --->
reverse =82746 */
#include<stdio.h>
main()
{
	int n=64728, rem, rev=0;

	
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		//printf("%d",rem);
		
		n=n/10;	
	}
	printf("\n\n\t Reverse Number = %d",rev);
}
