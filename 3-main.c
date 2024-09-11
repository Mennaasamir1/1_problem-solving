#include "main.h"
#include <stdio.h>

int main(void)
{
    int num1, num2;
    char operator;

    printf("Enter operator: ");
    scanf("%c", &operator);
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    

    SimpleCalc(num1, num2, operator);

}