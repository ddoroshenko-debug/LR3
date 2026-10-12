#include <stdio.h>

int sum_of_digits(int n)
{
    if (n < 0)
        return sum_of_digits(-(n + 1)) + 1;

    if (n < 10)
        return n;

    return n % 10 + sum_of_digits(n / 10);
}

int main()
{
    int n;

    printf("Введіть ціле число: ");
    scanf("%d", &n);

    printf("сума цифр = %d\n", sum_of_digits(n));

    return 0;
}
