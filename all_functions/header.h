#ifndef HEADER_H
#define HEADER_H

#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>
#include <malloc/malloc.h>
#include <stdlib.h>
#include <stdio.h>

int mx_strlen(const char *s);
void mx_printerr(const char *s);

#endif
