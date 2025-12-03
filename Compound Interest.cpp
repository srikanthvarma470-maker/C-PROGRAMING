#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, ci;

    printf("Enter Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter Rate of interest: ");
    scanf("%lf", &rate);

    printf("Enter Time in years: ");
    scanf("%lf", &time);

    amount = principal * pow((1 + rate / 100), time);
    ci = amount - principal;

    printf("\nCompound Interest = %.2lf", ci);
    printf("\nTotal Amount = %.2lf\n", amount);

    return 0;
}

