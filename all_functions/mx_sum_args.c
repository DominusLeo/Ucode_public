#include <unistd.h>
#include <stdio.h>
#include <string.h>

void mx_printchar(char c);
void mx_printint(int n);
int mx_atoi(const char *str);
//bool mx_isspace(char c);
//bool mx_isdigit(int c);

int mx_sum_args(int argc, char *argv[]) {
    int valid_int[argc];
    int sum = 0;

    if (argc == 1)
        return '\0';
    for (int i = 1; i < argc; i++) {
        valid_int[i] = mx_atoi(argv[i]);
        sum += valid_int[i];
    }
    mx_printint(sum);
    mx_printchar('\n');
    return 0;
}

int main(int argc, char *argv[]) {
    mx_sum_args(argc, argv);
}
