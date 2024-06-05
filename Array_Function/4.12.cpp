//WAP to accept 5 students name and store it in array
#include<stdio.h>
main()
{
	char name[20][5];
	int i=0;
	while(i<5)
	{	
		printf("\n\n\t enter student name :");
		scanf("%s",& name[i]);
		i++;
	}
	i=0;
	while(i<5)
	{	
		printf("\n\n\t enter student naame : %s",name[i]);
		i++;
	}	
}
