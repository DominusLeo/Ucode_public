#include "header.h"

void mx_printerr(const char *s) {
   // for(int i = 0; i < mx_strlen(s); i++) {
   if(s == NULL)
       return;
   write(2, s, mx_strlen(s));
   // }
}

/*
int main(void) {
    char *s = "45678ijnh 4rtyh ty i";

    mx_printerr(s);
}
*/
