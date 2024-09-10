#include <stdio.h>
#include "main.h"
/*
* main - Entry point of the program.
* Return: 1 if true, 0 if false.
*/
int main(void)
{
    int number;
    int power, answer;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter power: ");
    scanf("%d", &power);

    answer = PowerOfNum(number, power);
    
    if (number >= 0)
        printf("%d ^ %d is %d\n", number, power, answer);

    return 0;
}