#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    float num1;
    float num2;
    char op;
    char userInput;
    bool programClose = false;

    while (programClose != true)
    {
        printf("(N) to exit the program. Enter to continue\n");
        scanf("%c", &userInput);

        if (userInput == 'N')
        {
            break;
        } else if (userInput != 'N')
        {}

        printf("\nEnter Numbers: ");
        scanf("%f %c %f", &num1, &op, &num2);

        if  (op == '+')
        {
            printf("Answer: %f \n\n", num1 + num2);
        } else if (op == '-')
        {
            printf("Answer: %f \n\n", num1 - num2);
        } else if (op == '/')
        {
            printf("Answer: %f \n\n", num1 / num2);
        } else if (op == '*')
        {
            printf("Answer: %f \n\n", num1 * num2);
        } else
        {
            printf("\nInvalid Command.\n");
        }
    }
    return 0;
}

// Made by _r3kt69
