#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

bool mx_is_odd(int value) {
    if (value % 2 == 0)
        return false;
    else 
        return true;
}

// int main (void) {
//     printf ("24 is %d \n", mx_is_odd(24)); //перевірка 
//     printf ("23 is %d \n", mx_is_odd(23)); //перевірка 
//     printf ("-24 is %d \n", mx_is_odd(-24)); //перевірка 
//     printf ("-23 is %d \n", mx_is_odd(-23)); //перевірка 
// 	printf ("0 is %d \n", mx_is_odd(0)); //перевірка 
// }


