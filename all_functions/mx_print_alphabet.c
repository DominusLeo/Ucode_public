 void mx_printchar(char c);
 
  void mx_print_alphabet (void) {
        for(int i = 97; i <= 122; i += 2) {
            mx_printchar(i - 32);
            mx_printchar(i + 1);
        }
        mx_printchar('\n');
    }

int main () {
    mx_print_alphabet();
    return 0;
}

