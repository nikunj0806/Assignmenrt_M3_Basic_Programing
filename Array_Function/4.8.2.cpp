/*WAP to reverse a string and check that the string is palindrome
or notWrite a program of structure employee that provides the
following
a. information -print and display empno, empname,
addressandage
b. Write a program of structure for five employee
that provides the following information -print and
displayempno, empname, address andage*/

#include <stdio.h>
struct Employee 
{

    char empname[50];
    char address[100];
    int age,empno;
};
main() 

{
	struct Employee emp;
	int i;
	i=1;
	while(i<=2)
	{
	printf("\n\n\t Enter Employee Number: ");
    scanf("%d", &emp.empno);
    printf("\n\n\t Enter Employee Name: ");
    scanf("%s", emp.empname);
    printf("\n\n\t Enter Address: ");
    scanf("%s", emp.address);
    printf("\n\n\t Enter Age: ");
    scanf("%d", &emp.age);
   
    printf("\n\n\t Enter Employee Number: %d",emp.empno);
    printf("\n\n\t Enter Employee Name: %s", emp.empname);
    printf("\n\n\t Enter Address: %s", emp.address);
    printf("\n\n\t Enter Age: %d",emp.age);
    i++;
	}
	
}
