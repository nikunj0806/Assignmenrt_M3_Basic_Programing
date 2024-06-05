/*WAP to take two Array input from user and sort them in
ascending ordescending order as per user’s choice*/
#include<stdio.h>

int main()
{
    char str[100];
    int i, length =0;
    
	printf("\n\n\t Enter the string : ");
    scanf("%s",str);
    i=0;
    while(str[i]!=0)
    {
    	length++;
    	i++;
	}
          
    printf("\n\n\t Length = %d",length);
    
   
}
