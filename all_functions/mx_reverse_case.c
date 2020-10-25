#include <stdio.h>
#include <stdbool.h>

bool mx_islower(int c);
bool mx_isupper(int c);
int mx_tolower(int c);
int mx_toupper(int c);

void mx_reverse_case(char *s) {
	for (int i = 0 ;s[i]; i++) {
		if (mx_islower(s[i])) 
			s[i] = mx_toupper(s[i]); // s[i] = 'A'
		else if (mx_isupper(s[i]))
			s[i] = mx_tolower(s[i]);
	}
}

// int main () {
// 	char s[] = "kjgvkjgc KGFKj7c(hvC d";
// 	mx_reverse_case(s);
// 	printf ("%s", s);
// }
