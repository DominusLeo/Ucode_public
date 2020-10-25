#include <unistd.h>
#include <stdio.h>
#include <string.h>

int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printchar(char c);
void mx_printint(int n);
char *mx_strchr(const char *s, int c);

void mx_print_pname(int argc, char *argv[]) {
    argc = argc * 1;
    for(int i = mx_strlen(argv[0]); argv[0][i] != '/'; i--);
    for(int j = i + 1; j < lengt; j++)
        mx_printchar(argv[0][j]);
    mx_printchar('\n');
}

int main(int argc, char *argv[]) {

    mx_print_pname(argc, argv);
    return 0;
}
