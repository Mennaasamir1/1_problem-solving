#include "main.h"
/**
 * FactorialOfNum - calculates the factorial of a given number.
 * @number: number
 * Return: factorial of number
 */
int FactorialOfNum(int number)
{
    int factorial = 1;
    int count = number + 1;

    if (number < 0)
    {
        printf("number must be positive\n");
        return 1;
    }
    else
    {
        while (count != 1)
        {
            count = count - 1;
            factorial = factorial * count;
        }
        return factorial;
    }
}