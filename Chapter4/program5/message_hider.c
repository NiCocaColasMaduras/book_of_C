#include <stdio.h>
#include "encrypt.h"

// со страницы 223 - 224

int main()
{
    char msg[80];
    while (fgets(msg, 80, stdin))
    {
        encrypt(msg);
        printf("%s", msg);
    }
    
}