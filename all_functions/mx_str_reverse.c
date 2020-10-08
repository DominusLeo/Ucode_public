#include <stdio.h>

int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s) {
	int lengt = mx_strlen(s);
	int j = lengt-1;
	for (int i = 0; i < j; i++) {
		mx_swap_char(&s[j], &s[i]);
		j--;
	}
}

// int main(void) {
// 	char s[] = "fucking game over 54321";
// 	mx_str_reverse(s);
// 	printf("%s", s);
// }
