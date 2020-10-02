#include <stdio.h>
#include <unistd.h>

void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c) {
	unsigned int i = 0, j = 0;
	for (i = 0; i < length; i++) {
		for (j = 0; j < length; j++) {
			if((i == 0) || (j == 0) || (i == length -1) || (j == length -1)) {
				mx_printchar (c);
			}
			else mx_printchar (' ');
		}
		mx_printchar ('\n');
	}
}
int main (void) {
	mx_isos_triangle(20, '*');
}
