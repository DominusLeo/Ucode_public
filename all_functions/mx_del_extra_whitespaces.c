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
char *mx_strtrim(const char *str);



char *mx_del_extra_whitespaces(const char *str) {
    char *clear_name;
    int count = 0;
    int j = 0;
    char *temp;

    if(str == NULL)
        return NULL;
    temp = mx_strtrim(str);
    for(int i = 0; temp[i]; i++) {
        if(mx_isspace(temp[i])) {
            while (mx_isspace(temp[i+1]))
                i++;
        }
        count++;
    }
    //printf("%d\n", count);
    clear_name = mx_strnew(count);
    for(int i = 0; temp[i]; i++) {
        if(mx_isspace(temp[i])) {
            while (mx_isspace(temp[i+1]))
                i++;
        }
        //printf("clear_name[%d] = %c  str[%d] = %c\n", i,  clear_name[i], i, temp[i]);
        clear_name[j] = temp[i];
        j++;
    }
    free(temp);
    return clear_name;
}
/*
 *    int main(void) {
 *        char *name = "\f My name... is \r Neo \t\n ";
 *        //char *name = "12   34  56";
 *        char *clear;
 *
 *        clear = mx_del_extra_whitespaces(name);
 *        printf("%s", clear);
 *        system("leaks -q er.out");
 *    }
*/
