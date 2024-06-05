/*WAP of Addition, Subtraction, Multiplication and Division using
Switchcase.(Must Be Menu Driven)*/
#include <stdio.h>

main() 
{
    char operation;
    float num1, num2, result;
    
    printf(" \n\n\t Choose operation:");
    printf(" \n\n\t 1. Addition (+)");
    printf(" \n\n\t 2. Subtraction (-)");
    printf(" \n\n\t 3. Multiplication (*)");
    printf(" \n\n\t 4. Division (/)");
    printf(" \n\n\t Enter your choice: ");
    scanf(" %c", &operation);

    printf("\n\n\t Enter two numbers ");
    printf("\n\n\t Enter fist numbers : ");
    scanf("%d",&num1);
    printf("\n\n\t Enter second numbers : ");
    scanf("%d",&num2);

    
    switch(operation) 
	{
        case '1':
            result = num1 + num2;
            printf("\n\n\t Result: %.2f", result);
            break;
        case '2':
            result = num1 - num2;
            printf("\n\n\t Result: %.2f", result);
            break;
        case '3':
            result = num1 * num2;
            printf(" \n\n\t Result: %.2f ", result);
            break;
        case '4':
            if (num2 != 0) 
			{
                result = num1 / num2;
                printf(" \n\n\t Result: %.2f ", result);
            } else
			 {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("\n\n\t try agin Invalid operation choice !");
    }

    return 0;
}

