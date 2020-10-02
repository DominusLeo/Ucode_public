#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);

int mx_atoi(const char *str) {	//NOT PERFECT
	int num = 0;
	int negat = 1;
	int i = 0;
	
	while(*str && mx_isspace(str[i]))
		i++;
    while((str[i] && mx_isdigit(str[i]))
    || (str[i] == '-' && str[i+1] != '-')
    || (str[i] == '+' && str[i+1] != '+')) {
    		if(str[i] == '-') {
    			negat *= -1;
    			i++;
    		}
    		if(str[i] == '+') {
    			i++;
    		}
    		num *= 10;
    		num += str[i] - 48;
    		i++;
    	}
	return num * negat;
}

// int main(void) {
// 	char str[] = "  214748";
// 	printf("%d\n", mx_atoi(str));
// 	printf("%d\n", atoi(str));

//     char str1[] = "+214748";
//     printf("%d\n", mx_atoi(str));
//     printf("%d\n", atoi(str));

//     char str2[] = "-214748";
//     printf("%d\n", mx_atoi(str));
//     printf("%d\n", atoi(str));

//     char str3[] = "214748";
//     printf("%d\n", mx_atoi(str));
//     printf("%d\n", atoi(str));

//     char str4[] = "  214q748";
//     printf("%d\n", mx_atoi(str));
//     printf("%d\n", atoi(str));
// }
