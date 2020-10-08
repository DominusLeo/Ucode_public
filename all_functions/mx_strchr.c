#include <stdio.h>
#include <string.h>

char *mx_strchr(const char *s, int c) {
int i = 0;
    while (s[i] && s[i] != c)  
    	i++;
    if (c == s[i]) 
    	return ((char *)s + i);
    // else 
   	return NULL;
    // return (c == s[i]) ? ((char*)s + i) : (NULL);
}

// int main(void) {
//    char *s = "qwertyu 1234567 zxcvbn @#$%^ DFGHJK";
//    int c = '5';
//    printf("%s\n", mx_strchr(s, c));
//    printf("%s\n", strchr(s, c));
//
//     char *s1 = "";
//     int c1 = '5';
//     printf("%s\n", mx_strchr(s1, c1));
//     printf("%s\n", strchr(s1, c1));
//
//     char *s2 = "qwertyu 1234567 zxcvbn @#$%^ DFGHJK";
//     int c2 = '\0';
//     printf("%s\n", mx_strchr(s2, c2));
//     printf("%s\n", strchr(s2, c2));
// }
