#include <stdio.h>
#include <stdbool.h>

bool mx_isdigit(int c) {
    if (c > 47 && c < 58)
        return 1;
    return 0;
}


// int main (void) { 
//     //printf ("%d", mx_isdigit('0'));
//     printf ("1 is %d \n", mx_isdigit('1'));
//     printf ("a is %d \n", mx_isdigit('a'));
//     printf ("A is %d \n", mx_isdigit('A'));
//     printf ("0 is %d \n", mx_isdigit('0'));
//     printf ("\\t is %d \n", mx_isdigit('\t'));
//     printf ("~ is %d \n", mx_isdigit('~'));
//     printf ("9 is %d \n", mx_isdigit('9'));
// }

