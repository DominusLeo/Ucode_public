int mx_popular_int(const int *arr, int size) {

	int max_number = 0;
	int index_of_max = 0;
	int temp = 0;
	
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++)
			if(arr[i] == arr[j])
				temp++;
		if (temp > max_number) {
			max_number = temp;
			index_of_max = i;
		}
		temp = 0;
	}
	return arr[index_of_max];
}

//#include <stdio.h>

// int main(void) {
	
// 	int array1[] = {1,2,3,4};
// 	int siz1 = 4;
// 	printf("1 ? %d\n", mx_popular_int(array1, siz1));
	
// 	int array3[] = {3,1,2,2};
// 	int siz3 = 4;
// 	printf("2 ? %d\n", mx_popular_int(array3, siz3));

// 	int array7[] = {1,1,2,2};
// 	int siz7 = 4;
// 	printf("1 ? %d\n", mx_popular_int(array7, siz7));

// 	int array[] = {4, 4, 2, 2, 5};
// 	int siz = 5;
// 	printf("4 ? %d\n", mx_popular_int(array, siz));
	
// 	int array2[] = {1,2,2,4,5};
// 	int siz2 = 5;
// 	printf("2 ? %d\n", mx_popular_int(array2, siz2));

// 	int array4[] = {1,2,2,4,5};
// 	int siz4 = 5;
// 	printf("2 ? %d\n", mx_popular_int(array4, siz4));

// 	int array5[] = {1,2,2,4,5};
// 	int siz5 = 5;
// 	printf("2 ? %d\n", mx_popular_int(array5, siz5));

// 	int array6[] = {1,2,2,4,5};
// 	int siz6 = 5;
// 	printf("2 ? %d\n", mx_popular_int(array6, siz6));
//}
