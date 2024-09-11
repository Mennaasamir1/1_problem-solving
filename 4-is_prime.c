#include "main.h"
/**
 * IsPrimeNum - checks if a number is prime or not
 * @number: number to be checked
 * Return: 1 if the number is prime, 0 if not prime
 */
int IsPrimeNum(int number)
{
    int counter = 2;
    int m = round(number / 2);

    if (number < 0)
    {
        printf("invalid number, try again.");
        scanf("%d", &number);
    }
    else
    {
        if (number <= counter)
            return 1;
        else
        {
            counter += 1;
            if (number % counter == 0)
                return 0;
            else
            {
                if (counter == m)
                    return 1;
            }
        }
    }
}