#include <string.h>
#include <stdio.h>
#include <errno.h>

// Программа 6
// 459 - 462

int main(int argc, char *argv[])
{
    char *feeds[] = {"http://www.cnn.com/rss/celebx.xml",
                     "http://www.rollingstone.com/rock.xml",
                     "http://eonline.com/gossip.xml"};
    int times = 3;
    char *phrase = argv[1];
    int i;

    for (i = 0; i < times; i++) {
        char var[255];
        sprintf(var, "RSS_FEED=%s", feeds[i]);
        char *vars[] = {var, NULL};

        // нужен Cygwin
        
        /* pid_t pid = fork(); 
        if (pid == -1) {
            fprintf(stderr, "Не могу клонировать процесс: %s\n", strerror(errno));
            return 1;
        }

        if (pid == 0) {
            if (execle("/usr/bin/python", "/usr/bin/python", "/usr/bin/rssgossip.py", phrase, NULL, vars) == -1) {
                fprintf(stderr, "Не могу запустить скрипт: %s\n", strerror(errno));
                return 1;
            }
        }
        */
}