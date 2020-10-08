#include <stdio.h>
#include <stdbool.h>
 
int mx_toupper(int c) {
    if ( c > 96 && c < 123) {
        return c - 32;
    }
    return c;
}
 
// int main (void) {
//     //printf ("%c", mx_toupper('Z'));
//     printf ("1 is %c \n", mx_toupper('1'));
//     printf ("a is %c \n", mx_toupper('a'));
//     printf ("A is %c \n", mx_toupper('A'));
//     printf ("z is %c \n", mx_toupper('z'));
//     printf ("Z is %c \n", mx_toupper('Z'));
//     printf ("0 is %c \n", mx_toupper('0'));
//     printf ("\\t is %c \n", mx_toupper('\t'));
//     printf ("~ is %c \n", mx_toupper('~'));
//     printf ("9 is %c \n", mx_toupper('9'));
// }

