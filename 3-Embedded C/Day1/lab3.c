
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // print prime number from 0 to 190
    // -----------------------------------------
    int num, i, is_prime;
    for (num = 2; num <= 190; num++)
    {
        is_prime = 1;
        for (i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
            printf("%d ", num);
    }
    // -----------------------------------------

    // print factorial
    // -----------------------------------------
    int rel, x;
    printf("Enter number: ");
    scanf("%d", &x);
    rel = 1;
    for (int i = x; i > 0; i--)
        rel = rel * i;
    printf("The factorial = %d", rel);
    // -----------------------------------------

    // num power num
    // -----------------------------------------
    int num, pwr, sum = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &pwr);
    for (int i = pwr; i > 0; i--)
        sum *= num;
    printf("The result is : %d", sum);
    // -----------------------------------------

    // reverse digits
    // -----------------------------------------
    int num, rev;
    printf("Enter number you want to reverse :");
    scanf("%d", num);

    for (int i = num; i > 0; i--)
    {
        rev = num % 10;
    }
    return 0;
}
