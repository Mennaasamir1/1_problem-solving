#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program.
 * Return: 1 if true, 0 if false.
 */
int main(void)
{
    int num;
    int answer;

    printf("Enter a number: ");
    scanf("%d", &num);

    answer = FactorialOfNum(num);
    
    if (num > 0)
        printf("the answer is: %d\n", answer);

    return 0;

}