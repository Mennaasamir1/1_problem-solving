#include "main.h"
/**
 * main - starting point of the program.
 * Description - prints letters from A - Z
 * Return: 0 or 1
 */
int main(void)
{
    int counter, letter;

    for (counter = 65; counter <= 90; counter++)
    {
        printf("%c", counter);
    }
    printf("\n");
}