#include <stdio.h>
#include <limits.h>

int mx_factorial_rec(int n) {
    int fact = 1;

    if(n < 0 || n >= 13)
        return 0;
    if(n == 0)
       return fact;
    else
        fact = n * mx_factorial_rec(n - 1);
    return fact;
}

//int main(void) {
//    int rec = 12;
//
//    printf("%d", mx_factorial_rec(rec));
//}
