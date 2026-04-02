#include <stdio.h>
#include <string.h>

void print_reverse(char *s)
{
    size_t len = strlen(s);

    char *t = s + len - 1;
    while (t >= s)
    {
        printf("%c", *t);

        t = t - 1;
    }

    puts("");
}

int main()
{
    char *juises[] = {
        "питайя", "арбуз", "хурма", "аглифрукт",
        "ромовая ягода", "киви", "шелковица", "земляника",
        "черника", "ежевика", "карамбола"
    };

    char *a;

    puts(juises[6]);
    print_reverse(juises[7]);
    a = juises[2];
    juises[2] = juises[8];
    juises[8] = a;
    puts(juises[8]);
    print_reverse(juises[(18 + 7) / 5]);
    puts(juises[2]);
    print_reverse(juises[9]);
    juises[1] = juises[3];
    puts(juises[10]);
    print_reverse(juises[1]);

    return 0;
}