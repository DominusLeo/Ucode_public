#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>
#include <malloc/malloc.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
        static void mx_printchar(char c) {
            write(1, &c, 1);
        }
        static void mx_printint(int n) {
            if (n == INT_MIN) {
                write(1, "-2147483648", 11);
                return;
            }
            if (n < 0) {
                mx_printchar('-');
                n *= -1;
            }
            if (n > 9)
                mx_printint(n / 10);
            mx_printchar((n % 10) + 48);
        }
    static void hallo(void ) {
        printf("hallo");
    }
*/

double mx_timer(void (*f)()) {
    if(clock() < 0)
        return -1;
    clock_t start = clock();
    f();
    clock_t finish = clock();
    if(finish - start < 0)
        return -1;
    return ((double) (finish - start)) / CLOCKS_PER_SEC;
}

/*
    int main(void) {
        //char a[] = "23456"

        double time = mx_timer(hallo);
        printf("%f", time);
    }
*/
