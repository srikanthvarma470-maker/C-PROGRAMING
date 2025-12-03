#include <stdio.h>

int main() {
    int days, years, weeks, remaining_days;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;              // 1 year = 365 days
    remaining_days = days % 365;

    weeks = remaining_days / 7;      // 1 week = 7 days
    remaining_days = remaining_days % 7;

    printf("%d days = %d years, %d weeks, and %d days\n",
           days, years, weeks, remaining_days);

    return 0;
}

