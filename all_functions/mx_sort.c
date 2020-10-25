#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>
#include <malloc/malloc.h>
#include <stdlib.h>
#include <stdio.h>

bool compare(int a, int b) {
    return a > b;
}

void mx_sort(int *arr, int size, bool (*f)(int, int)) {
    int bulb = 0;

    if(size == 0)
        return;
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size - 1; j++)
            if(f(arr[j], arr[j + 1])) {
                bulb = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = bulb;
            }
}

/*
    int main(void) {
        int arr[] = {5, 4, 3, 2, 1, 0};
        int size = 6;

        mx_sort(arr, size, compare);
        for(int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }
*/
