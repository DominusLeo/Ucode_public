cmake_minimum_required(VERSION 3.17)
project(sprint06 C)

set(CMAKE_C_STANDARD 11)

add_executable(sprint06
        lyefimov/t00/mx_atoi.c
        lyefimov/t00/mx_isdigit.c
        lyefimov/t00/mx_isspace.c
        lyefimov/t00/mx_printchar.c
        lyefimov/t00/mx_printint.c
        lyefimov/t00/mx_printstr.c
        lyefimov/t00/mx_strcmp.c
        lyefimov/t00/mx_strlen.c
        lyefimov/t01/mx_linear_search.c
        lyefimov/t01/mx_strcmp.c
        lyefimov/t02/mx_bubble_sort.c
        lyefimov/t02/mx_strcmp.c
        lyefimov/t03/mx_binary_search.c
        lyefimov/t03/mx_strcmp.c
        lyefimov/t04/mx_insertion_sort.c
        lyefimov/t04/mx_strlen.c
        lyefimov/t05/mx_selection_sort.c
        lyefimov/t05/mx_strcmp.c
        lyefimov/t05/mx_strlen.c
        lyefimov/t06/mx_arr_rotate.c)
