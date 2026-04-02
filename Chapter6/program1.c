#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island
{
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;

island* create(char *name)
{
    island *i = malloc(sizeof(island));

    i->name = strdup(name);
    i->opens = "9:00";
    i->closes = "17:00";
    i->next = NULL;

}

void display (island *start)
{
    island *i = start;

    for (; i != NULL; i->next)
    {
        printf("Название: %s открыт: %s-%s\n", i->name, i->opens, i->closes);
    }
}

void release(island *start)
{
    island *i = start;
    island *next = NULL;

    for (; i != NULL; i = next)
    {
        next = i->next;
        free(i->name);
        free(i);
    }
}

int main()
{
    island *start = NULL;
    island *i = NULL;
    island *next = NULL;

    char name[80];
    for( ; fgets(name, 80, stdin) != NULL; i = next )
    {
        next = create(name);

        if (start == NULL)
            start = next;

        if (i != NULL)
            i->next = next;
    }

    display(start);
    release(start);

    /*
    island amity = {"остров Дружбы", "09:00", "17:00", NULL};
    island craggy = {"Скалистый", "09:00", "17:00", NULL};
    island isla_nublar = {"Туманный", "09:00", "17:00", NULL};
    island skull = {"остров Черепа", "09:00", "17:00", NULL};
    island shutter = {"остров Проклятых", "09:00", "17:00", NULL};

    amity.next = &craggy;
    craggy.next = &isla_nublar;
    isla_nublar.next = &skull;
    skull.next = &shutter;
    */
}