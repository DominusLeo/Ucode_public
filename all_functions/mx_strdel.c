#include <string.h>
#include <stdlib.h>
#include <malloc/malloc.h>
#include <stdio.h>

void mx_strdel(char **str) {
    if(*str == NULL)
        return;
    free(*str);
    *str = NULL;
}

//int main(void) {
//    char *str = "string";
//    printf("test\n");
//
//    printf("%s\n", str);
//    mx_strdel(&str);
//    printf("%s", str);
//}
