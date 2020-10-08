#include <string.h>
#include <stdlib.h>
#include <malloc/malloc.h>
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>

//int mx_strlen(const char *s) {
//    int lengt = 0;
//    while(s[lengt]) {
//        lengt++;
//    }
//    return lengt;
//}
//
//void mx_printstr(const char *s) {
//    write(1, s, mx_strlen(s));
//}

void mx_strdel(char **str);

void mx_del_strarr(char ***arr) {
    char **arr2;

    if (arr == NULL)
        return;
    arr2 = *arr;
    for( ; *arr2; arr2++) {
        mx_strdel(arr2);
    }
    free(*arr);
    *arr = NULL;
}

//int main(void) {
//    char **arr = (char **)malloc(sizeof(char *) * 4);
//    arr[0] = (char *)malloc(sizeof(char) * 5);
//    arr[0] = "rfgh";
//    arr[1] = (char *)malloc(sizeof(char) * 6);
//    arr[1] = "3 4 5";
//    arr[2] = (char *)malloc(sizeof(char) * 1);
//    arr[2] = "";
//    arr[3] = (char *)malloc(sizeof(char) * 5);
//    arr[3] = NULL;
//
//
//    printf("|%s| |%s| |%s| |%s|\n", arr[0], arr[1], arr[2], arr[3]);
//    mx_del_strarr(&arr);
//    printf("%s %s %s %s", arr[0], arr[1], arr[2], arr[3]);
//}

//int main(void) {
//    char **strarr = (char **)malloc(sizeof(char *) * 3);
//    strarr[0] = strdup("abc"); strarr[1] = strdup("xyz"); strarr[2] = NULL;
//    mx_printstr("strarr before mx_del_strarr is abc  xyz  (null)? | "); printf("%s  %s  %s\n", strarr[0], strarr[1], strarr[2]);
//    mx_del_strarr(&strarr);
//    mx_printstr("strarr after mx_del_strarr is (null)? | "); printf("%s\n", (char *) strarr);
//}
