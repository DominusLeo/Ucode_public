#include <string.h>
#include <stdio.h>

int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);

char *mx_strstr(const char *s1, const char *s2) {
    int lengt_s2 = mx_strlen(s2)-1;

    if(s2[0] == '\0')
        return (char *) s1;
    for(; *s1; s1++) {
        if(mx_strncmp(s1, s2, lengt_s2) == 0) {
            return(char *) s1;
        }
    }
    return NULL;
}

// int main() {
//     char s1[] = "qwertyui45678 $%^& tyhjm";
//     char s2[] = "tyui";
//     printf("origin: %s\n", strstr(s1, s2));
//     printf("my: %s\n", mx_strstr(s1, s2));
// }
