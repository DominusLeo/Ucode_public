void mx_printchar (char c);

void mx_only_printable (void) {
    for (int i =125; i>=32; i-- ) {
        mx_printchar (i);
    }
    mx_printchar ('\n');
}

/*int main () {
    mx_only_printable ();
    return 0;
    }*/

