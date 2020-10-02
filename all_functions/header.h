#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>

int mx_atoi(const char *str);
bool mx_isdigit(int c);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
int mx_strcmp(const char * s1, const char * s2);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);

#endif