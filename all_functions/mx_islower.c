#include <stdio.h>
#include <stdbool.h>

bool mx_islower(int c) {
    if ( c > 96 && c < 123) 
        return 1;
    return 0;
}

// int main (void) {
// //    printf ("%d", mx_islower('R'));
// 	//printf ("1 is %s \n", mx_islower("wertyuio"));
//     printf ("a is %d \n", mx_islower('a'));
//     printf ("A is %d \n", mx_islower('A'));
//     printf ("z is %d \n", mx_islower('z'));
//     printf ("Z is %d \n", mx_islower('Z'));
//     printf ("0 is %d \n", mx_islower('0'));
//     printf ("\\t is %d \n", mx_islower('\t'));
//     printf ("~ is %d \n", mx_islower('~'));
//     printf ("9 is %d \n", mx_islower('9'));
// }

