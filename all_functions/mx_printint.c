#include <stdio.h> 
#include <limits.h>
#include <unistd.h>

void mx_printchar(char c);

void mx_printint(int n) {
	if (n == INT_MIN) {
		write(1, "-2147483648", 11);
		return;
	}
	if (n < 0) {
		mx_printchar('-');
		n *= -1;
	}
	if (n > 9)
		mx_printint(n / 10);
		mx_printchar((n % 10) + 48);
}

// int main (void) {

// 	mx_printint(3748943);
// 	mx_printchar('\n');
// 	mx_printint(-37486943);
// 	mx_printchar('\n');
// 	mx_printint(0);
// 	mx_printchar('\n');
// 	mx_printint(2);
// 	mx_printchar('\n');
// 	mx_printint(-2147483648);
// 	mx_printchar('\n');
// 	mx_printint(-2);
// }


// 	int count_number =0, schet = n;

// 	while (schet != 0) {
// 		schet=schet/10;
// 		count_number ++;
// 	}
// 	int arr_counts[count_number];
// 		for (int i =0; i < count_number; i++) {
// 			arr_counts[i] = n%10 + 48;
// 			n=n/10;
// }
// for (int i = count_number; i >= 0; i--)
// 	{
// 		mx_printchar(arr_counts[i]);
// }
