#include <stdio.h>

int main() {
    float tax_rate, salary, tax, final_salary;

    printf("Please enter salary: ");
    scanf("%f", &salary);

    printf("Please enter tax rate: ");
    scanf("%f", &tax_rate);

    tax = salary * (tax_rate /100);
    final_salary = salary - tax;

    printf("\nTax to be paid: %f\n", tax);
    printf("Salary after tax: %f\n", final_salary);

    return 0;
}
