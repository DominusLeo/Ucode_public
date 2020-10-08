#include <stdio.h>
#include <stdbool.h>
 
bool mx_isupper(int c) {
    if ( c > 64 && c < 91)
        return 1;
    return 0;
}
 
// int main (void) {
//     printf ("%d", mx_isupper('a'));
//     printf ("1 is %d \n", mx_isupper('1'));
//     printf ("a is %d \n", mx_isupper('a'));
//     printf ("A is %d \n", mx_isupper('A'));
//     printf ("z is %d \n", mx_isupper('z'));
//     printf ("Z is %d \n", mx_isupper('Z'));
//     printf ("0 is %d \n", mx_isupper('0'));
//     printf ("\\t is %d \n", mx_isupper('\t'));
//     printf ("~ is %d \n", mx_isupper('~'));
//     printf ("9 is %d \n", mx_isupper('9'));
// }

