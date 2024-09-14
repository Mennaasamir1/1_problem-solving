#include <stdio.h>

#define service  1.1
#define tax 1.16

int main(void)
{
    int TotalPay;

    printf("Enter totalpay: ");
    scanf("%d", &TotalPay);
   
    TotalPay *= tax * service;
    printf("totalpay = %d\n", TotalPay);
}