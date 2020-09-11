#include <unistd.h>
#include <string.h>

//static void pluses(char **cube, int n) {
//
//}

void mx_printchar(char c);

void mx_cube(int n) {
    int columns = n*2+1;
    int strings = n*3+1;
//    if(n == 2) {
//        columns++;
//        strings++;
//    }
    char cube[columns][strings];
    int cut = 0;

    for(int y = 0; y < n*2+1; y++) {
        for (int x = 0; x < n*3+1; x++) {
            cube[y][x] = ' ';
        }
    }
    //if small cube
    if(n < 2)
        return;
//    if(n == 2)
//        *cube[][] = {"  +----+", " /    / ", "+----+ |", "|    | +", "|    |/", "+----+"};
//    else
    //print corners
    for(int y = 0; y < n*2+1; y++) {
        for (int x = 0; x < n*3+1; x++) {
            if( ((x==0||x==(2*n+1)) && (y==(n-1)||y==2*n)) || ((x==(n-1)||x==(3*n)) && (y==0||y==(n+1)) && !(x==(n-1) && y==(n+1))) )
                cube[y][x] = '+';
        }
    }
    //print horizontals
    for(int y = 0; y < n*2+1; y++) {
        for (int x = 0; x < n*3+1; x++) {
            if((cube[y][x-1] == '+' || cube[y][x-1] == '-') && (y==0 || y==(n-1) || y==(2*n))) {
                cube[y][x] = '-';
                if(cube[y][x+1] == '+' ) y++;
            }
        }
    }
    //print vertical
    for(int y = 0; y < n*2+1; y++) {
        for (int x = 0; x < n*3+1; x++) {
            if((cube[y-1][x] == '+' || cube[y-1][x] == '|') && (cube[y][x] == ' ') && (!(y < (n-1) && x < (2*n -1)) && !((y >= (n+1)) && (x >= (3*n))))) {
                cube[y][x] = '|';
                if(cube[y+1][x+1] == '+' ) x++;
            }
        }
    }
    //print diagonals
    for(int y = 0; y < n*2+1; y++) {
        for (int x = 0; x < n * 3 + 1; x++) {
            if ((x + y == (n - 1) && cube[y][x] != '+') || (x + y == (4 * n + 1) && cube[y][x] != '+') || (x+y == 3*n && y < (n - 1) && x < (3*n)) )
                cube[y][x] = '/';
        }
    }
    //print all
    for(int y = 0; y < n*2+1; y++) {

        for (int x = 0; x < n*3+1-cut; x++) {
            mx_printchar(cube[y][x]);
        }
        if(y >= (n+1)) cut++;
        mx_printchar('\n');
    }
}

int main(void) {
    int n = 5;

//    char *arr[] = {"dasdasd", "sdasdasd", "dasdasd", "dasdasdas"};
    mx_cube(n);
}

