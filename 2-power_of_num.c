#include "main.h"
/**
 * PowerOfNum - calculater the number to the power of given num.
 * @number: number
 * @power: power
 * Return: the answer
 */
int PowerOfNum(int number, int power)
{
    int answer = 1;
    int counter = 0;

    if (power == 0)
        return (answer);
    else
    {
        while (counter != power)
        {
            answer = answer * number;
            counter += 1;
        }
        return answer;
    }
}
