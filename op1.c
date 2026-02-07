#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num1 = get_int("Enter number 1: ");
    int num2 = get_int("Enter number 2: ");

    int sum, diff, prod, quot, rem;

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quot = num1 / num2;
    rem = num1 % num2;

    printf("The sum of two integers is %d\n", sum);
    printf("The difference is %d\n", diff);
    printf("The product is %d\n", prod);
    printf("The quotient is %d\n", quot);
    printf("The remainder is %d\n", rem);

    return 0;
}
