//WAP to find factorial using recursion
#include<stdio.h>  
int main()    
{    
 	int i,fact=1,number;    
 	
	 	printf("\n\n\t Enter a number: ");    
  		scanf("%d",&number);    
   
   		 for(i=1;i<=number;i++)
		{    
      	fact=fact*i;    
  		}    
  		
	printf("\n\n\t Factorial of %d is: %d",number,fact);    

}   
