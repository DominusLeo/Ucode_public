#include <stdlib.h>
#include <stdio.h>
#include <malloc/malloc.h>
#include <string.h>

char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);

char *mx_strdup(const char *str) {
//    if(str == NULL)
//        return NULL;
    char *dst = mx_strnew(mx_strlen(str));

    mx_strcpy(dst, str);
    return dst;
}

//int main(void) {
//    char *str = "dfghjkl";
//
//    printf("%s",mx_strdup(str));
//}
