#include <stdio.h>
#include <string.h>

int mx_strcmp(const char * s1, const char * s2);

int mx_linear_search(char **arr, const char *s) {
    int index = -1;
    int i = 0;

    if(s == NULL)
        return index;
    for(i = 0; arr[i]; i++) {
        if(mx_strcmp(arr[i], s) == 0) {
            index = i;
        }
    }
//    if(s == NULL) {
//        index = i + 1;
//    }
    return index;
}

//int main(void) {
//    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z", NULL};
//    char *s = NULL;
//    //char *s = "Abcd";
//
//    printf("%d", mx_linear_search(arr, s));
//}
