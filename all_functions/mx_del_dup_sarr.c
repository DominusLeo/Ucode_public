#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int *mx_copy_int_arr(const int *src, int size);

static int in_array(int a, int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == a) {
            return 0;
        }
    }
    return 1;
}

int *mx_del_dup_sarr(int *src, int src_size, int *dst_size) {
    int *dst = NULL;
    int size = 0;
    int b = 0;

    if(src_size <= 0)
        return 0;
    for (int i = 0; i < src_size; i++) {
        if (in_array(src[i], src, size) && src[i] != src[i + 1]) {
            size++;
        }
    }
    dst = (int*)malloc(sizeof(int) * size);
    for (int j = 0; j < src_size; j++) {
        if (in_array(src[j], src, b) && src[j] != src[j + 1]) {
            dst[b] = src[j];
            b++;
        }
    }
    *dst_size = size;
    return dst;
}

/*
    int main() {
        int arrsrc[] = {1, 2, 1, 2, 3, 3, 4, 4, 5};
        int dst_len;
        int len = 9;
        int *dst_new =  mx_del_dup_sarr(arrsrc, len, &dst_len);
        //printf("%d\n\n\n\n", dst_len);
        for (int i = 0; i < dst_len; i++) {
            printf("%d\n", dst_new[i]);
        }
    }
*/
