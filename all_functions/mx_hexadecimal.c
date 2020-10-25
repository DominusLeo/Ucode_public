void mx_printchar (char c);

void mx_hexadecimal (void) {
    int i;
    
    for (i = 48; i < 58; i++)
        mx_printchar (i);
    for (i = 65; i < 71; i++)
        mx_printchar (i);
    mx_printchar ('\n');
}

/*int main () {
mx_hexadecimal();
    return 0;
}*/

