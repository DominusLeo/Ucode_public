#include <stdio.h>

int mx_strcmp(const char * s1, const char * s2);
int mx_strlen(const char *s);

int mx_selection_sort(char **arr, int size) {//How it works?
    int swap = 0;
    int min;
    char *bulb;

    for(int i = 0; i < size - 1; i++) {
        min = i;
        for (int j = i + 1; j < size; j++) {
            mx_strlen(arr[j]) < mx_strlen(arr[min]) ? min = j : min;
            if (mx_strlen(arr[j]) == mx_strlen(arr[min]))
                if (mx_strcmp(arr[j], arr[min]) < 0)
                    min = j;
        }
        if (min != i) {
            bulb = arr[i];
            arr[i] = arr[min];
            arr[min] = bulb;
            swap++;
        }
    }
    return swap;
}

// int main(void) {
//     char *arr[] = {"Z", "Abcd", "a", "aBc", "z", "abc", "AbCd"};
//     int size = 7;
//
//     printf("%d", mx_selection_sort(arr, size));
//
// }
