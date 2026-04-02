#include <stdio.h>

int main()
{
    int contestants[] = {1, 2, 3};
    int *choise = contestants;
    contestants[0] = 2;
    contestants[1] = contestants[2];
    contestants[2] = *choise;
    printf("Я собираюсь выбрать претендента номер %i\n", contestants[2]);
    return 0;
}