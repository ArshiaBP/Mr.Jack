#include <stdio.h>


void menu(char s[9][61]){
    int i, j;
    for(i = 0; i < 9; i++){
        s[i][60] = '\0';
    }
    for(i = 0; i < 9; i++){
        for(j = 0; j < 60; j++){
            s[i][j] = ' ';
        }
    }
    for(i = 0; i < 9; i++){
        s[i][31] = '/';
        s[i][50] = '\\';
    }
    for(j = 32; j < 40; j++){
        s[0][j] = s[8][j] = '/';
    }
    for(j = 41; j < 50; j++){
        s[0][j] = s[8][j] = '\\';
    }
    s[3][36] = '1';
    s[3][37] = '.';
    s[3][38] = 'n';
    s[3][39] = 'e';
    s[3][40] = 'w';
    s[3][41] = ' ';
    s[3][42] = 'g';
    s[3][43] = 'a';
    s[3][44] = 'm';
    s[3][45] = 'e';
    s[5][36] = '2';
    s[5][37] = '.';
    s[5][38] = 'c';
    s[5][39] = 'o';
    s[5][40] = 'n';
    s[5][41] = 't';
    s[5][42] = 'i';
    s[5][43] = 'n';
    s[5][44] = 'u';
    s[5][45] = 'e';
    for(i = 0; i < 9; i++){
        printf("%s\n", s[i]);
    }
}