#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc/malloc.h>

int *mx_copy_int_arr(const int *src, int size) {
    int *dst = NULL;

    if(src == NULL || size < 0)
        return NULL;
    dst =  malloc(sizeof(int) * size);
    for(int i = 0; i < size; i++)
        dst[i] = src[i];
    return dst;
}

//int main(void) {
//    int arr[] = {1, 2, 3};
//    //int *arr = NULL;
//    int size = 3;
//
//    mx_copy_int_arr(arr, size);
//
//}
