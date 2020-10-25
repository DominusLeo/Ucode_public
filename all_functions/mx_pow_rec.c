#include <stdio.h>
#include <limits.h>

double mx_pow_rec(double n, unsigned int pow) {
    return pow < 0 ? 0 : (pow == 0 ? 1 : (n *= mx_pow_rec(n, pow - 1)));
}

int main(void) {
    int n = -5;
    int pow = 3;

    printf("%.0f\n", mx_pow_rec(n, pow));
    printf("%.0f\n", mx_pow_rec(1, 0));
    printf("%.0f\n", mx_pow_rec(1, 1));
    printf("%.0f\n", mx_pow_rec(0, 1));
    printf("%.0f\n", mx_pow_rec(0, 0));
    printf("%.0f\n", mx_pow_rec(-2, 2));
    printf("%.0f\n", mx_pow_rec(-2, 3));
    printf("%.0f\n", mx_pow_rec(6.5, 5));
    printf("%.0f\n", mx_pow_rec(6.5, 0));
    printf("%.0f\n", mx_pow_rec(1, 5));
}
