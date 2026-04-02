#include <stdio.h>

void fortune_cookie (char msg[])
{
    printf("Сообщение гласит: %s\n", msg);
    printf("msg занимает %i байтов\n", sizeof(msg));
}

int main()
{
    char quote[] = "Печенье вас полнит";
    fortune_cookie(quote);
}