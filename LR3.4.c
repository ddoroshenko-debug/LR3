#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N;

    printf("Введіть розмір масиву N: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("Розмір масиву має бути додатним.\n");
        return 1;
    }

    int *arr = malloc(N * sizeof(int));

    if (arr == NULL)
    {
        printf("Помилка виділення пам'яті.\n");
        return 1;
    }

    srand(time(NULL));

    int *ptr = arr;

    for (int i = 0; i < N; i++)
    {
        *(ptr++) = rand() % 201 - 100;
    }

    int *min_ptr = arr;
    int *max_ptr = arr;

    for (int *ptr = arr + 1; ptr < arr + N; ptr++)
    {
        if (*ptr < *min_ptr)
            min_ptr = ptr;

        if (*ptr > *max_ptr)
            max_ptr = ptr;
    }

    printf("\nПочатковий масив:\n");

    for (int *ptr = arr; ptr < arr + N; ptr++)
    {
        printf("Значення: %d, Адреса: %p\n",
               *ptr, (void *)ptr);
    }

    printf("\nМінімум: %d, Адрес: %p\n",
           *min_ptr, (void *)min_ptr);

    printf("Максимум: %d, Адреса: %p\n",
           *max_ptr, (void *)max_ptr);

    int temp = *min_ptr;
    *min_ptr = *max_ptr;
    *max_ptr = temp;

     
    printf("\n=== 3. Результуючий масив після обміну ===\n");

    for (int *ptr = arr; ptr < arr + N; ptr++)
    {
         printf("Елемент %d: значення = %d | адреса = %p\n",
        (int)(ptr - arr), *ptr, (void *)ptr);
    }

    printf("\n");

    free(arr);

    return 0;
}
