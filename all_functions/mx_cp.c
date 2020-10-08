#include "header.h"

int main(int argc, char *argv[]) {
    char buf[1];
    int write_content = open(argv[2], O_RDWR, S_IRUSR | S_IRGRP | S_IROTH);
    int content = open(argv[1], O_RDONLY);

    if(argc != 3) {
        mx_printerr("usage: ");
        mx_printerr(argv[0]);
        mx_printerr(" [source_file] [destination_file]\n");
        return -1;
    }
    else if(content < 0) {
        mx_printerr("[src_file: ]");
        mx_printerr(argv[1]);
        mx_printerr("No such file or directory\n");
        return -1;
    }
    else if(write_content > 0) {
        close(write_content);
        return -1;
    }
    else {
        write_content = open(argv[2], O_RDWR | O_CREAT, S_IRUSR | S_IRGRP | S_IROTH);
        while(read(content, &buf, 1))
            write(write_content, &buf, 1);
    }
    close(content);
    close(write_content);
    exit(0);
    return 0;
}
