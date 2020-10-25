#include <stdio.h>
#include <limits.h>

int mx_factorial_iter(int n) {
    int fact = 1;

    if (n < 0 || n >= 13)
        return 0;
    if (n == 0)
        return fact;
    else
        for (int i = 0; i <= n - 1; i++)
            fact = fact * (i + 1);
        return fact;
}

//int main() {
//    int iter = 5;
//
//    printf("%d", mx_factorial_iter(iter));
//}
