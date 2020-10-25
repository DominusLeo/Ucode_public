#include <stdio.h>
#include <string.h>

int mx_strcmp(const char * s1, const char * s2) {
    for (; *s1 && *s2 && (*s1 == *s2); s1++, s2++);
	return (unsigned char) *s1 - (unsigned char) *s2;
}

int main (void) {
    char s1[] = "C";
    char s2[] = "A";


    printf("mx: %d\n", mx_strcmp(s1, s2));
    printf("clas: %d\n", strcmp(s1, s2));
    //printf("strcmp: %d\n", strcmp(s1, s2));

//    char s1[] = "Ururu turu";
//    char s2[] = "turu";
//    int n = 1;
//
//
//    printf("mx: %d\n", mx_strncmp(s1, s2, n));
//    printf("clas: %d\n", strncmp(s1, s2, n));
}
