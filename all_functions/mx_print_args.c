#include <unistd.h>
#include <stdio.h>
#include <string.h>

//int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printchar(char c);

void mx_print_args(int argc, char *argv[]) {
    if (argc == 0)
        return;
    for (int i = 0; argv[i]; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}

int main(int argc, char *argv[]) {
    mx_print_args(argc, argv);
    return 0;
}
