#include <stdio.h>
#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num) {
	int num_pow;
	int _num = num;
	int num_start = num;
	int sum = 0;

	for (num_pow = 0; _num != 0; _num /= 10, num_pow++);
	for (; num != 0; num /= 10)
        sum += mx_pow(num % 10, num_pow);
    return (sum == num_start) ? (1) : (0);
}

 int main(void) {
 	printf("Is is_narcissistic? \n");
 	printf("153 is true? %d \n", mx_is_narcissistic(153));
 	printf("3 is true? %d \n", mx_is_narcissistic(3));
 	printf("-3 is %d \n", mx_is_narcissistic(-3));
 	printf("0 is %d \n", mx_is_narcissistic(0));
 	printf("12 is %d \n", mx_is_narcissistic(12));
 	printf("1634 is %d \n", mx_is_narcissistic(1634));
     printf("1635 is %d \n", mx_is_narcissistic(1635));
 }
