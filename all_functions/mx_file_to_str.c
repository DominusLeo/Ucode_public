#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>
#include <malloc/malloc.h>
#include <stdlib.h>
#include <stdio.h>

char *mx_strnew(const int size);

char *mx_file_to_str(const char *filename) {
    int content;
    char *dst_str;
    int count = 0;
    char buf;

    content = open(filename, O_RDONLY);
    if(content < 0)
        return NULL;
    for (; read(content, &buf, 1); count++);
    dst_str = mx_strnew(count);
    close(content);
    content = open(filename, O_RDONLY);
    for (int i = 0; read(content, &buf, 1); i++)
        dst_str[i] = buf;
    close(content);
    return dst_str;
}

    int main(int argc, char *argv[]) {
        char *s;

        argc = argc * 1;
        s = mx_file_to_str(argv[1]);
        printf("%s", s);
        //system("leaks -q a.out");
    }
