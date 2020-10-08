#include <stdio.h>

void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c) {
	unsigned int i = 0, j = 0;
	for (i = 0; i < length; i++) {
		for (j = 0; j <= i; j++) {
			mx_printchar (c);
		}
		mx_printchar ('\n');
	}
}

// int main (void) {
// 	mx_isos_triangle(7, '$');
// 	mx_isos_triangle(1, 'I');
// 	mx_isos_triangle(4, '\r');
// 	mx_isos_triangle(9, '4');
// 	mx_isos_triangle(7, '*');
// }
