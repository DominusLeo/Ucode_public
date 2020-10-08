#include <stdio.h>
#include <unistd.h>

void mx_printstr(const char *s);
//int mx_strlen (const char *s);

void mx_is_positive(int i) {    //тут читаються данні що вводяться потім в майні
    //int number=0; // не потрібно, бо вже є і
    //write(1, number, mx_srtlen(number)); // -ІІ-
    if (i > 0)
        mx_printstr("positive");
    if (i < 0)
        mx_printstr("negative");
    if (i == 0)
        mx_printstr("zero");
    mx_printstr("\n");
}

// int main (void) {
// 	printf("-183 is "); mx_is_positive (-183);  //данні вводяться сюди
// 	printf("\n");
// 	printf("2 is "); mx_is_positive (2);
// 	printf("\n");
// 	printf("0 is "); mx_is_positive (0);
// 	printf("\n");
// 	//printf("1,5 is "); mx_is_positive (-1,5);
// 	return 0;
// }

