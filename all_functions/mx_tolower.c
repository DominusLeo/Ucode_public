#include <stdio.h>
#include <stdbool.h>
 
int mx_tolower(int c) {
    return ( c > 64 && c < 91) ? (c + 32) : c;
}
 
// int main (void) {
//     //printf ("%c", mx_tolower ('A'));
//     printf ("1 is %c \n", mx_tolower('1'));
//     printf ("a is %c \n", mx_tolower('a'));
//     printf ("A is %c \n", mx_tolower('A'));
//     printf ("z is %c \n", mx_tolower('z'));
//     printf ("Z is %c \n", mx_tolower('Z'));
//     printf ("0 is %c \n", mx_tolower('0'));
//     printf ("\\t is %c \n", mx_tolower('\t'));
//     printf ("~ is %c \n", mx_tolower('~'));
//     printf ("9 is %c \n", mx_tolower('9'));
// }

