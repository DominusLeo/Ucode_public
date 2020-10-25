#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);

void mx_print_argbints(int argc, char *argv[]) {
    unsigned int number;
    int binar[32] = {0};

    for(int i = 1; i < argc; i++) {
        number = mx_atoi(argv[i]);
        for (int j = 0; j < 32; j++, number /= 2)
            binar[j] = number % 10 % 2;
        for (int j = 31; j >= 0; j--)
            mx_printint(binar[j]);
        mx_printchar('\n');
    }
}

int main(int argc, char *argv[]) {
    mx_print_argbints(argc, argv);
}
