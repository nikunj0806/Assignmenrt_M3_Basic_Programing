/*Accept 5 names from user at run time*/
#include<stdio.h>
main()
{
	char name[20][10],i;
	i=1;
	while(i<=5)
	{
		printf("\n\n\t Enter Name : ");
		scanf(" %s",&name[i]);
		i++;
	}
	
}
