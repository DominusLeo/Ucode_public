#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <malloc/malloc.h>

bool mx_isspace(char c);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);

char *mx_strtrim(const char *str) {
    char *clear_name;
    int lengt;
    int i;
    int count_left = 0;
    int count_right = 0;

    if(str == NULL)
        return NULL;
    lengt = mx_strlen(str);
    for(i = lengt - 1; mx_isspace(str[i]); i--) {
        count_right++;
    }
    i = 0;
    while(mx_isspace(str[i])) {
        str++;
        count_left++;
    }
    clear_name = mx_strnew(lengt - count_right - count_left);
    clear_name = mx_strncpy(clear_name, str, lengt - count_right - count_left);
    return clear_name;
}

//int main(void) {
//    char *name = NULL;
//    char *clear;
//
//    clear = mx_strtrim(name);
//    printf("%s", clear);
//    system("leaks -q a.out");
//}
