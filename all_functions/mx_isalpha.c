#include <stdio.h>
#include <stdbool.h>

bool mx_isalpha(int c) {
    if ((c > 64 && c < 91) || (c > 96 && c < 123))
        return 1;
    return 0;
}

// int main (void) {
//     printf ("1 is %d \n", mx_isalpha(1));
//     printf ("a is %d \n", mx_isalpha('a'));
//     printf ("A is %d \n", mx_isalpha('A'));
//     printf ("0 is %d \n", mx_isalpha(1));
//     printf ("\\t is %d \n", mx_isalpha('\t'));
//     printf ("~ is %d \n", mx_isalpha('~'));

// }

