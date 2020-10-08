#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>
#include <malloc/malloc.h>
#include <stdlib.h>
#include <stdio.h>

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
*/

void mx_foreach(const int *arr, int size, void (*f)(int)) {
    for(int i = 0; i < size; i++) {
        f(arr[i]);
    }
}

/*
    int main(void) {
        void mx_printint(int n);

        int arr[] = {1, 2, 3, 4, 5};
        int size = 5;

        mx_foreach(arr, size, mx_printint);
    }
*/
