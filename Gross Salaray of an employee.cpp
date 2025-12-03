#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    // Input basic salary
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    // Calculate HRA (20%) and DA (40%)
    hra = 0.20 * basic;
    da = 0.40 * basic;

    // Gross salary
    gross = basic + hra + da;

    // Output
    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}

