#include <unistd.h>
#include <string.h>

void mx_write_knock_knock(void) {
    char *msg = "Follow the white rabbit.\nKnock, knock, Neo.\n";
    int length = strlen(msg);

    write(1, msg, length);
}

/*int main() {
    mx_write_knock_knock();
}*/
