#include <string.h>
#include <stdio.h>
#include <errno.h>

// Программа 4
// 449 - 452

int main(int argc, char *argv[]) {
    char *my_env[] = {"FOOD=Кофе", NULL};
    if (execle("./coffee", "./coffee", "Пончики", NULL, my_env) == -1){
        fprintf(stderr,"Не могу запустить процесс 0: %s\n", strerror(errno));
        return 1;
    }
/*
    char *my_env[] = {"FOOD=пончиками", NULL};
    if(execle("./coffee", "./coffee", "сливки", NULL, my_env) == -1){
        fprintf(stderr,"Не могу запустить процесс 0: %s\n", strerror(errno));
        return 1;
    }

    if(execle("./coffee", "kofe", NULL, my_env) == -1){
        fprintf(stderr, "Не могу запустить процесс 0: %s\n", strerror(errno));
        return 1;
    }

    char *my_env[] = {"FOOD=пончиками", NULL};
    if(execle("./coffee", "кофе", NULL, my_env) == -1){
        fprintf(stderr, "Не могу запустить процесс 0: %s\n", strerror(errno));
        return 1;
    }
*/
    fprintf(stderr, "Не могу создать заказ: %s\n", strerror(errno));
    return 1;
}