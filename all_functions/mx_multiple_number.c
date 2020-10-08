#include <stdio.h>
#include <stdbool.h>

bool mx_multiple_number(int n, int mult) {
	if (mult % n == 0) {
		return true;
	}
	else
		return false;
	
}

// int main (void) {
// 	printf ("12 / 3 is %d \n", mx_multiple_number(3, 12));
// 	printf ("9 / 3 is %d \n", mx_multiple_number(3, 9));
// 	printf ("8 / 3 is %d \n", mx_multiple_number(3, 8));
// 	printf ("2 / 2 is %d \n", mx_multiple_number(2, 2));
// 	printf ("8 / 3 is %d \n", mx_multiple_number(3, 8));
// 	printf ("1 / 1 is %d \n", mx_multiple_number(1, 1));
// 	printf ("-2 / -2 is %d \n", mx_multiple_number(-2, -2)); 
// 	printf ("-12 / -3 is %d \n", mx_multiple_number(-3, -12));
// }
