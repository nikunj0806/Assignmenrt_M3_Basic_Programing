/*Write a program to find out the max from given number (E.g., No: -
1562Max number is 6)*/
#include<stdio.h>
main()
{
	int n=64728,digit,maxDigit;
	
	
 while (n != 0)
  {
         digit = n % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        n /= 10;
    }
	printf("\n\n\t Max Number = %d",maxDigit);
}

