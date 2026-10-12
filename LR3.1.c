
#include <stdio.h>
#include <math.h>

void Calculations(int *group, int *variant, int *course)
{
    int sum = *group + *variant + *course;
    int product = (*group) * (*variant) * (*course);

    printf("\nСума = %d\n", sum);
    printf("Добуток = %d\n", product);
    printf("Синус суми = %f\n", sin(sum));

    *group = sum;
    *variant = product;
    *course = (int)(sin(sum) * 1000);
}

int main()
{
    int group = 80;  
    int variant = 8;
    int course = 4;   

    printf("Початкові значення:\n");
    printf("група: = %d\n", group);
    printf("варіант = %d\n", variant);
    printf("курс = %d\n", course);

    Calculations(&group, &variant, &course);

    printf("\nНові значення:\n");
    printf("група: = %d\n", group);
    printf("варіант: = %d\n", variant);
    printf("курс: = %d\n", course);

    return 0;
}
