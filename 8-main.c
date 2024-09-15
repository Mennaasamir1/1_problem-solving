#include "main.h"

int main(void)
{
    int MonthlyPayment;
    int LoanAmount, Result;

    printf("Enter loan amount: ");
    scanf("%d", &LoanAmount);
    printf("Enter monthly payment: ");
    scanf("%d", &MonthlyPayment);

    Result = Loan_Installment(LoanAmount, MonthlyPayment);
    printf("%d months\n", Result);
    
}