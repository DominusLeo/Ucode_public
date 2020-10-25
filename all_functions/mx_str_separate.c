#include <unistd.h>
#include <stdio.h>

void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {
	int i = 0;
	while(str[i]) {
	    while (str[i] == delim) {
			i++;
		}
			mx_printchar('\n');
		
			mx_printchar(str[i]);
		i++;
	}
}

int main (void) {
	// char str[] = "game over";
	// char delim = ' ';
	// mx_str_separate(str, delim);
	// mx_printchar('\n');

	// char str[] = "game over";
	// char delim = 'm';
	// mx_str_separate(str, delim);
	// mx_printchar('\n');

	char str[] = "MMMMatrix";
	char delim = 'M';
	mx_str_separate(str, delim);
//	mx_printchar('\n');

	// char str[] = "gamme over";
	// char delim = 'm';
	// mx_str_separate(str, delim);
	// mx_printchar('\n');
}
