#include "header.h"

int main(int argc, char *argv[]) {
    char buf;
    int content = open(argv[1], O_RDONLY);

    if(content < 0){
        mx_printerr("mx_cat: ");
        mx_printerr(argv[1]);
        mx_printerr(": No such file o directory");
    }
    if(argc == 1)
        while(read(0, &buf, 1))
            write(1, &buf, 1);
    else {
        while(read(content, &buf, 1))
            write(1, &buf, 1);
        write(1,"\n",1);
        close(content);
    }
    exit(0);
}
