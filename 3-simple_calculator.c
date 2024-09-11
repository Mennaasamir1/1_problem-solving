#include "main.h"
/**
 * SimpleCalc - function that handles simple calculations.
 * @num1: first number
 * @num2: second number
 * @op: operator
 */
void SimpleCalc(int num1, int num2, char op)
{
    float ans;

    if (op == '+')
    {
        ans = num1 + num2;
        printf("%d + %d = %f\n", num1, num2, ans);
    }
    else if (op == '-')
    {
        ans = num1 - num2;
        printf("%d - %d = %f\n", num1, num2, ans);
    }
    else if (op == '*')
    {
        ans = num1 * num2;
        printf("%d * %d = %f\n", num1, num2, ans);   
    }
    else if (op == '/')
    {
        if (num2 == 0)
        {
            printf("division cannot be zero\n");
            scanf("%d", &num2);
        }
        ans = num1 / num2;
        printf("%d / %d = %f\n", num1, num2, ans);
    }
    else
    {
        printf("invalid");
    }
}