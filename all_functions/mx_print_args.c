#include <unistd.h>
#include <stdio.h>
#include <string.h>

//int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printchar(char c);

void mx_print_args(int argc, char *argv[]) {
    int i = 1;

    if (argc == 0)
        return;
    while(argv[i]) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
        i++;
    }
}

int main(int argc, char *argv[]) {
    mx_print_args(argc, argv);
    return 0;
}
