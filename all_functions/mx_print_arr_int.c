#include <stdio.h> 
#include <limits.h>
#include <unistd.h>

void mx_printchar(char c);
void mx_printint(int n);

void mx_print_arr_int(const int *arr, int size) {
	for(int i = 0; i < size; i++) {
		mx_printint(arr[i]);
		mx_printchar('\n');
	}
}

// int main(void) {
// 	int arr[5] = {5,4,3,2,1};
// 	mx_print_arr_int(arr, 5); 
	
// 	int arr1[5] = {1,2,3,4,5};
// 	mx_print_arr_int(arr1, 3); 
// }
