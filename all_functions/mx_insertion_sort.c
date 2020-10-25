#include <stdio.h>

int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size) {
    int count = 0;
    char *bilb;
    int j = 0;

//    for(i = 0; i < size - 1; i++) {
//        for(int j = 0; j < size - i - 1; j++) {
//            if(mx_strlen(arr[j]) > mx_strlen(arr[j + 1])) {
//                bilb = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = bilb;
//                count++;
//            }
//        }
//    }
    for(int i = 1; i < size; i++) {//how it works?
        bilb = arr[i];
        j = i - 1;
        for (; j >= 0 && mx_strlen(arr[j]) > mx_strlen(bilb); ) {
            arr[j + 1] = arr[j];
            j--;
            count++;
        }
        arr[j + 1] = bilb;
    }
//    for (i = 0; i < size; i++) {
//        printf("%s", arr[i]);
//        printf("\n");
//    }
    return count;
}

//int main(void) {
//    int size = 5;
//    char *arr[] = {"abc", "ab", "aaaaa", "aaaa", "aaa"};
//
//    printf("%d", mx_insertion_sort(arr, size));
//}
