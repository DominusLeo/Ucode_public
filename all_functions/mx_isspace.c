#include <stdio.h>
#include <stdbool.h>

bool mx_isspace(char c) {
    if (( c > 8 && c < 14) || c == 32) 
        return 1;
    return 0;
}

// int main (void) {
//     printf ("\\r is %d \n ", mx_isspace('\r'));
//     printf ("1 is %d \n", mx_isspace('1'));
//     printf ("a is %d \n", mx_isspace('a'));
//     printf ("A is %d \n", mx_isspace('A'));
//     printf ("0 is %d \n", mx_isspace('0'));
//     printf ("\\t is %d \n", mx_isspace('\t'));
//     printf ("~ is %d \n", mx_isspace('~'));
//     printf ("9 is %d \n", mx_isspace('9'));
// }

