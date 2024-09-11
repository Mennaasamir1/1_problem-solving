#include "main.h"

int main(void)
{
    int number, answer;
    char str[100];

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Ask a question: ");
    scanf("%s", str);
    answer = IsPrimeNum(number);
    printf("%d\n", answer);
    /*printf("is %d a prime number? %d\n", number, answer);*/
}