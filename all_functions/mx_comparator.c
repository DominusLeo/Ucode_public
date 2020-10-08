#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>
#include <malloc/malloc.h>
#include <stdlib.h>
#include <stdio.h>

//bool equal_nums(int a, int b) {
//    return a == b;
//}

int mx_comparator(const int *arr, int size, int x, bool (*compare)(int, int)) {
    if(arr == NULL || size == 0)
        return -1;
    for(int i = 0; i < size; i++)  {
        if(compare(x, arr[i])) {
            return i;
        }
    }
    return -1;
}

/*
    int main(void) {
        int arr[] = {1, 2, 3, 4, 5};
        int size = 5;
        int x = 5;
        int index;

        index = mx_comparator(arr, size, x, equal_nums);
        printf("%d", index);
    }
*/
