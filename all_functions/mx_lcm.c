#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int mx_gcd(int a, int b);

int mx_lcm(int a, int b) {
    if(a == b)
        return a;
    if((a == 0 || b == 0))
        return 0;
    (a < 0) ? a *= -1 : a;
    (b < 0) ? b *= -1 : b;
    return a * b / mx_gcd(a, b);
}

//int main(void) {
//    int a = -3;
//    int b = -2;
//
//    printf("%d", mx_lcm(a, b));
//}
