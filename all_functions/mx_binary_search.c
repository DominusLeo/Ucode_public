#include <stdio.h>

int mx_strcmp(const char * s1, const char * s2);
static void mx_bubble_sort(char **arr, int size) {
    int iter = 0;
    char *temp;

    for(int i = 0; i < size - 1; i++)
        for(int j = 0; j < size - i - 1; j++)
            if(mx_strcmp(arr[j], arr[j+1]) > 0) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                iter++;
            }
}

int mx_binary_search(char **arr, int size, const char *s, int *count) {//lern it
    int start = 0;
    int finish = size - 1;
    int midl;

    mx_bubble_sort(arr, size);
    while(finish >= start) {
        midl = start + (finish - start) / 2;
        (*count)++;
        if(mx_strcmp(arr[midl], s) == 0)
            return midl;
        if(mx_strcmp(arr[midl], s) < 0)
            start = midl + 1;
        if(mx_strcmp(arr[midl], s) > 0)
            finish = midl - 1;
    }
    (*count) = 0;
    return -1;
}

//int main(void) {
//    char *arr[] = {"Abcd", "222", "aBc", "ab", "az", "z"};
//    int size = 6;
//    char *s = "ab";
//    int count = 0;
//
//    printf("%d %d", mx_binary_search(arr, size, s, &count), count);
//}
