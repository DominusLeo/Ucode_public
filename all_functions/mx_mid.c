#include <stdio.h> 

int mx_mid(int a, int b, int c) {
	int mid;
	if ((a >= b && a <= c) || (a <= b && a >= c)) mid = a;
	else if ((b >= c && b <= a) || (b <= c && b >= a)) mid = b;
	else if ((c >= b && c <= a) || (c <= b && c >= a)) mid = c;
	else mid = 0;
	return mid;
}	

// int main (void) {
// 	printf ("-5 -2 3 : %d \n", mx_mid(-5, -2, 3));
// 	printf ("-2 -5 3 : %d \n", mx_mid(-2, -5, 3)); //fail
// 	printf ("-5 -2 -7 : %d \n", mx_mid(-5, -2, -7)); // fail
// 	printf ("-2 -5 -7 : %d \n", mx_mid(-2, -5, -7));
// 	printf ("5 2 3 : %d \n", mx_mid(5, 2, 3));
// 	printf ("5 5 3 : %d \n", mx_mid(5, 5, 3));
// 	printf ("2 2 3 : %d \n", mx_mid(2, 2, 3));
// 	printf ("-5 -2 -2 : %d \n", mx_mid(-5, -2, -2));
// }

