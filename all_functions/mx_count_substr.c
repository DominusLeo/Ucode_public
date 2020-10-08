#include <stdio.h>

char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub) {
    char *temp = (char *) str;
    int count = 0;

    if(str[0] == 0 || sub[0] == 0)
        return 0;
    while((temp = mx_strstr(temp, sub)) != NULL) {
        temp++;
        count++;
    }
    return count;
}

//int main(void) {
//    char str[] = "yo yo yoneo";
//    char sub[] = "yo ";
//    printf("%d\n", mx_count_substr(str, sub));
//
//    char str1[] = "";
//    char sub1[] = "yo ";
//    printf("%d\n", mx_count_substr(str1, sub1));
//
//    char str2[] = "yo yo yoneo";
//    char sub2[] = "";
//    printf("%d\n", mx_count_substr(str2, sub2));
//
//    char str3[] = "yo";
//    char sub3[] = "yo";
//    printf("%d\n", mx_count_substr(str3, sub3));
//
//    char str4[] = "yo";
//    char sub4[] = "yoyo";
//    printf("%d\n", mx_count_substr(str4, sub4));
//}
