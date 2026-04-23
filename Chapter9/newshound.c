#include <string.h>
#include <stdio.h>
#include <errno.h>

// Программа 5
// 454 - 456

int main(int argc, char *argv[]) {
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
        if (execle("/usr/bin/python", "/usr/bin/python", "/usr/bin/rssgossip.py", phrase, NULL, vars) == -1) {
            fprintf(stderr, "He more запустить скрипт: %s\n", strerror(errno));
            return 1;
        }
    }
    return 0;
}