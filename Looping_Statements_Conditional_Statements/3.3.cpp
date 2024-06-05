/*WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/
#include<stdio.h>
main()
{
	int number[50],i,even,odd,sum,sum1;
	i=1;
	printf("\n\n\t  Enter 10 number ");
	printf("\n...................................................");
	while(i<=10)
	{
		printf("\n\t Enter number :");
		scanf("%d",&number[i]);
		i++;
		
	}
	printf("\n...................................................");
	i=1;
	even=0;
	odd=0;
	sum=0;
	while(i<=10)
	{
	
		if(number[i]%2==0)
		{
		sum=sum+number[i];
		even++;
		}
		else
		{
		sum1=sum1+number[i];
		odd++;
		}
		i++;
	}
	printf("\n even number :%d",even);
	printf("\n odd number :%d",odd);
	printf("\n sum even number :%d",sum);
	printf("\n sum oddnumber :%d",sum1);
	

}
	

