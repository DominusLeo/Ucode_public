#include <stdio.h>
#include <limits.h>

double mx_pow_rec(double n, unsigned int pow) {
    if(pow < 0)
        return 0;
    if(pow == 0) {
        n = 1;
    }
    else
        n *= mx_pow_rec(n, pow - 1);
    return n;
}

//int main(void) {
//    int n = -5;
//    int pow = 3;
//
//    printf("%.0f", mx_pow_rec(n, pow));
//}
