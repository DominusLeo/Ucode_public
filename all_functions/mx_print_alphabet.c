 void mx_printchar(char c);
 
  void mx_print_alphabet (void) {
        for(int i = 97; i <= 122;) {
            mx_printchar(i - 32);
            i++;
            mx_printchar(i);
            i++;
        }
        mx_printchar('\n');
    }

/*int main () {
    mx_print_alphabet();
    return 0;
}*/

