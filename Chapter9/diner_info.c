#include <stdio.h>
#include <stdlib.h>

// Программа 2
// 444

int main(int argc, char *argv[])
{
    printf("Обедов: %s\n", argv[1]);
    printf("Сок: %s\n", getenv("JUICE"));
    return 0;
}