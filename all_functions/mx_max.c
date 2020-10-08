#include <stdio.h>

int mx_max(int a, int b, int c) {
	int numbers[3] = {a, b, c};
	int max = -2147483648;
	for (int i = 0; i < 3; i++) {
		if (numbers[i] >= max) 
			max = numbers[i];
	}
	return max;
}

// int main (void) {
// 	printf ("-5 -2 3 : %d \n", mx_max(-5, -2, 3));
// 	printf ("-2 -5 3 : %d \n", mx_max(-2, -5, 3));
// 	printf ("-5 -2 -7 : %d \n", mx_max(-5, -2, -7));
// 	printf ("-2 -5 -7 : %d \n", mx_max(-2, -5, -7));
// 	printf ("5 2 3 : %d \n", mx_max(5, 2, 3));
// 	printf ("5 5 3 : %d \n", mx_max(5, 5, 3));
// 	printf ("2 2 3 : %d \n", mx_max(2, 2, 3));
// 	printf ("-5 -2 -2 : %d \n", mx_max(-5, -2, -2));
// }
