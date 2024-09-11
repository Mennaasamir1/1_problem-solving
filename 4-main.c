#include "main.h"

int main(void)
{
    int number, answer;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    answer = IsPrimeNum(number);
    printf("is %d a prime number? %d\n", number, answer);
    
}