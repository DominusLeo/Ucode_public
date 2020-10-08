#include <string.h>
#include <stdio.h>

int mx_strncmp(const char *s1, const char *s2, int n) {
	for(int i = 0; i < n; i++) {
		if(*s1 && (*s1 == *s2)) {
			s1++;
			s2++;
		}
	}
	return (unsigned char) *s1 - (unsigned char) *s2;
}

//int main (void) {
//	char s1[] = "1234567";
//	char s2[] = "1634567";
//	int n = 4;
//
//	printf("mx: %d\n", mx_strncmp(s1, s2, n));
//	printf("clas: %d\n", strncmp(s1, s2, n));
//	printf("strcmp: %d\n", strcmp(s1, s2));
//}
