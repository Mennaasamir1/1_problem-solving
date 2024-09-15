#include "main.h"
/**
 * Loan_Installment - calculates how long it takes
 * to pay off the loan.
 * @loan_amount - loan
 * @MonthlyPayment - how much you can pay
 * Return: how long it takes to pay off the loan
 */
int Loan_Installment(int loan_amount, int MonthlyPayment)
{
    int Result = loan_amount / MonthlyPayment;
    return Result;
}