// making a menu driven calculator
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

float memory = 0;
// menu part
void help()
{
    printf("function of calculator\n");
    printf(" + : for addition\texample:1+2\n");
    printf(" - : for subtraction\texample: 1-2\n");
    printf(" * : for multiplication\t example: 1*2\n");
    printf(" / : for division\t example :1/2\n");
    printf(" ^ : for  finding square \t example :5^2\n");
    printf(" # : for finding square root \t example : #4\n");
    printf("memory : to store current result in memory\n");
    printf("refresh: for restarting the calculator\n");
    printf("help : for opening the help menu\n");
}
int main()
{
    char input[100];
    float operand, result;
    char operator;
    printf("enter the input , if require any help then type 'help'\n");

    while (1)
    {
        printf("Enter calculation: ");
        if (fgets(input, sizeof(input), stdin) == NULL)
        {
            printf("Error reading input. Please try again.\n");
            continue;
        }
        input[strcspn(input, "\n")] = '\0';
        if (strcmp(input, "help") == 0)
        {
            help();
            continue;
        }
        if (strcmp(input, "refresh") == 0)
        {
            memory = 0;
            printf("calculator restarted\n");
            continue;
        }
        if (strcmp(input, "memory") == 0)
        {
            memory = result;
            printf("result stored in  memory");
            continue;
        }

        // square root calculation part

        if (input[0] == '#')
        {
            if (sscanf(input + 1, "%f", &operand) != 1)
            {
                printf("invalid input , please check help menu by typing 'help' on your screen");
                continue;
            }
            result = sqrt(operand);
            printf("%f\n", result);
            memory = result;
            continue;
        }

        if (sscanf(input, "%f %c %f", &memory, &operator, & operand))
        {
            switch (operator)
            {
            case '+':
                result = memory + operand;
                printf("%f\n", result);
                memory = result;
                break;
            case '-':
                result = memory - operand;
                printf("%f\n", result);
                memory = result;
                break;
            case '*':
                result = memory * operand;
                printf("%f\n", result);
                memory = result;
                break;
            case '/':
                if (operand == 0)
                    printf("enter value rather than 0 \n");

                result = memory / operand;
                printf("%f\n", result);
                memory = result;
                break;
            case '^':
                result = pow(operand, 2);
                printf("%f\n", result);
                memory = result;
                break;
            default:
                printf("invalid input ,use the help menu for calculator's function\n");
                break;
            }
        }
    }
    return 0;
}