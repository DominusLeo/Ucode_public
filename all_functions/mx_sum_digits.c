#include <stdio.h> //NOT DONE

int mx_sum_digits(int num) {
	int sum_dig = 0;
	
	if (num < 0) 
		num = -num;
	for (; num > 0; num /= 10)
        sum_dig += num % 10;
	return sum_dig;
}

// int main (void) {
// 	printf ("-4579  is %d \n", mx_sum_digits(-4579));
// 	printf ("4579  is %d \n", mx_sum_digits(4579));
// 	printf ("666  is %d \n", mx_sum_digits(666));
// 	printf ("1  is %d \n", mx_sum_digits(1));
// 	printf ("0  is %d \n", mx_sum_digits(0));
// }
