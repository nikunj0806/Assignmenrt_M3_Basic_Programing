//WAP to perform Palindrome number using for loop and function
#include <stdio.h>
int main() 
{
  int n, reversed = 0, remainder, original;
    printf("\n\n\t Enter an integer: ");
    scanf("%d", &n);
    original = n;

    
    while (n!=0)
	 {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    
    if (original == reversed)
        printf("\n\n\t %d is a palindrome.", original);
    else
        printf("\n\n\t %d is not a palindrome.", original);

   
}
