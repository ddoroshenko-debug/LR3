
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 92, 2560, -779};
    int group = 80;
    int variant = 8;
    int course = 4;

    printf("Початковий масив:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);


    arr[0] = group;
    arr[1] = course;


    for (int i = 0; i < 5; i++)
        arr[i] += variant;

    printf("\nНовий масив:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}

