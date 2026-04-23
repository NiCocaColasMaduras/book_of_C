#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

// Программа 3
// 446 - 447

int main()
{
    if (execl("/sbin/ifconfig", "/sbin/ifconfig", NULL) == -1)
        if (execl("ipconfig", "ipconfig", NULL) == -1)
        {
            fprintf(stderr, "Не удалось запустить ipconfig: %s", strerror(errno));
            return 1;
        }
    return 0;
}