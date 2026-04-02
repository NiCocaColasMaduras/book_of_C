#include <stdio.h>
#include "totaller.h"

// со страницы 206 - 207, 211 - 212

float total = 0.0;
short count = 0;
short tax_percent = 6;

int main()
{
    float val;
    printf("Цена блюда:");

    while (scanf("%f", &val) == 1)
    {
        printf("Итого на текущий момент: %.2f\n", add_with_tax(val));
        printf("Цена блюда: ");
    }

    printf("\nИтоговый счёт: %.2а\n", total);
    printf("\nКоличество блюд: %hi\n", count);
    
    return 0;
}

float add_with_tax(float f)
{
    float tax_rate = 1 + tax_percent / 100.0;
    total += f * tax_rate;
    count++;
    return total;
}