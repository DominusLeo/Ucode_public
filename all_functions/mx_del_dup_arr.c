#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int *mx_copy_int_arr(const int *src, int size);
int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
    int i;
    int j;
    int k;

    for (i = 0; i < src_size; i++)
        for (j = i + 1; j < src_size; j++)
            if (src[i] == src[j]) {
                for (k = j; k < src_size; k++)
                    src[k] = src[k + 1];
                src_size--;
                j--;
            }
    dst_size = &src_size;
    return mx_copy_int_arr(src, *dst_size);
    // for (int i = 0; i < src_size; i++)
    //     if (src[i] != 0)
    //     printf("%d, ", src[i]);
    // return src;
}

//int main() {
//    int dst_size = 0;
//    int src[] = {1, 2, 2, 8, 4, 6, 8, 9, -4, 3, 4};
//    int *value = mx_del_dup_arr(src, 11, &dst_size);
//    for (int i = 0; i < 11; i++)
//        if (value[i] != 0)
//            printf("%d", value[i]);
//}
