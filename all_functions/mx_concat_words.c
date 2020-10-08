#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc/malloc.h>

//int mx_strlen(const char *s);
//char *mx_strcat(char *s1, const char *s2);
//char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
//char *mx_strnew(const int size);

char *mx_concat_words(char **words) {
    char *sum;
    char *temp;

    if(words == NULL)
        return NULL;
    for(int i = 0; words[i]; i++) {
        temp = mx_strdup(sum);
        mx_strdel(&sum);
        sum = mx_strjoin(temp, words[i]);
        mx_strdel(&temp);
        if (words[i + 1] != NULL) {
            temp = mx_strdup(sum);
            mx_strdel(&sum);
            sum = mx_strjoin(temp, " ");
            mx_strdel(&temp);
        }
    }
    return sum;
}

//int main(void) {
//    char *arr[] = {"Free", "your", "mind.", NULL};
//    char *sum;
//
//    sum = mx_concat_words(arr);
//    printf("%s", sum);
//    system("leaks -q a.out");
//}
