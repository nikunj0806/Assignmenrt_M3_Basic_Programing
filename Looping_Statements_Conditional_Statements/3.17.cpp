/*.Calculate 5 numbers from user and calculate number of even and odd using
of while loop*/
#include<stdio.h>
main()
{	
	int a,i,odd=0,even=0;
	
	printf("\n\n \t enter 5 number ");
	i=1;
	while(i<=5)
	{	
		printf("\n\n \t enter Natural number : ");
		scanf("%d",&a);
		i++;
		if(a%2==0)
		{
			printf("\n\n \t even   %d ",even);
			even++;
		}
		else
		{	
			printf("\n\n \t odd  %d ",odd);
			odd++;
		}
		
	}	
	printf("\n\n \t even   %d ",even);
	printf("\n\n \t odd  %d ",odd);

}
