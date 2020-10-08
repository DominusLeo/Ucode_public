#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int mx_gcd(int a, int b) {
    int temp = 0;

    if(a == b)
        return a;
    if((a == 0 || b == 0))
        return 0;
    if(a < 0)
        a = -a;
    if(b < 0)
        b = -b;
    if(a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    return (mx_gcd(a, b - a));
}

//int main(void) {
//    int a = -20;
//    int b = -15;
//
//    printf("%d", mx_gcd(a, b));
//}
