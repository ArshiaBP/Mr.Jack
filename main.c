#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

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

void map(char str[39][88]){
    int i, j;
    for(i = 0; i < 39; i++){
        str[i][87] = '\0';
    }
    for(i = 0; i < 39; i++){
        for(j = 0; j < 87; j++){
            str[i][j] = ' ';
        }
    }
    for(i = 2; i < 37; i += 4){
        for(j = 0; j < 87; j += 12){
            str[i][j] = '.';
        }
    }
    for(i = 1; i < 37; i += 2){
        for(j = 1; j < 87; j += 6){
            str[i][j] = '.';
        }
    }
    for(i = 0; i < 37; i += 4){
        for(j = 2; j < 87; j += 12){
            str[i][j] = '.';
        }
    }
    for(i = 0; i < 37; i += 4){
        for(j = 4; j < 87; j += 12){
            str[i][j] = '.';
        }
    }
    for(i = 0; i < 37; i += 4){
        for(j = 6; j < 87; j += 12){
            str[i][j] = '.';
        }
    }
    for(i = 2; i < 37; i += 4){
        for(j = 8; j < 87; j += 12){
            str[i][j] = '.';
        }
    }
    for(i = 2; i < 37; i += 4){
        for(j = 10; j < 87; j += 12){
            str[i][j] = '.';
        }
    }
    for(j = 7; j < 87; j += 6){
        str[37][j] = '.';
    }
    for(j = 8; j < 87; j += 12){
        str[38][j] = '.';
    }
    for(j = 10; j < 87; j += 12){
        str[38][j] = '.';
    }
    for(j = 12; j < 87; j += 12){
        str[38][j] = '.';
    }
    str[0][6] = ' ';
    str[1][7] = ' ';
    str[0][86] = ' ';
    str[1][85] = ' ';
}

struct map_in{
    char name[4];
    char type;
    char situation[10];
};

void create_map_type(struct map_in cre[9][13], char str[39][88]){
    int i, j;
    for(i = 0; i < 9; i++){
        for(j = 0; j < 13; j++){
            cre[i][j].type = '0';
        }
    }
    cre[0][0].type = '7';
    cre[1][0].type = '1';
    cre[2][0].type = '4';
    cre[7][0].type = '1';
    cre[8][0].type = '8';
    cre[0][1].type = '8';
    cre[3][1].type = '1';
    cre[4][1].type = '1';
    cre[6][1].type = '2';
    cre[8][1].type = '6';
    cre[0][2].type = '8';
    cre[1][2].type = '2';
    cre[3][2].type = '1';
    cre[6][2].type = '5';
    cre[7][2].type = '8';
    cre[8][2].type = '8';
    cre[0][3].type = '8';
    cre[1][3].type = '1';
    cre[3][3].type = '1';
    cre[5][3].type = '1';
    cre[7][3].type = '8';
    cre[8][3].type = '8';
    cre[7][4].type = '8';
    cre[8][4].type = '8';
    cre[0][5].type = '4';
    cre[1][5].type = '3';
    cre[2][5].type = '1';
    cre[3][5].type = '4';
    cre[4][5].type = '1';
    cre[0][5].type = '2';
    cre[0][5].type = '1';
    cre[8][5].type = '8';
    cre[8][6].type = '8';
    cre[0][7].type = '8';
    cre[2][7].type = '1';
    cre[3][7].type = '2';
    cre[4][7].type = '1';
    cre[5][7].type = '4';
    cre[6][7].type = '1';
    cre[7][7].type = '3';
    cre[8][7].type = '4';
    cre[0][8].type = '8';
    cre[8][8].type = '8';
    cre[0][9].type = '8';
    cre[1][9].type = '8';
    cre[3][9].type = '1';
    cre[5][9].type = '1';
    cre[7][9].type = '1';
    cre[8][9].type = '8';
    cre[0][10].type = '8';
    cre[4][10].type = '1';
    cre[6][10].type = '2';
    cre[7][10].type = '8';
    cre[8][10].type = '8';
    cre[0][11].type = '6';
    cre[1][11].type = '5';
    cre[2][11].type = '2';
    cre[4][11].type = '1';
    cre[5][11].type = '1';
    cre[8][11].type = '8';
    cre[0][12].type = '8';
    cre[4][12].type = '4';
    cre[6][12].type = '8';
    cre[7][12].type = '7';
    cre[8][12].type = '8';
    map(str);
    for(i = 4, j = 0; i < 39; i += 4, j++){
        str[i][10] = cre[j][0].type;
    }
    for(i = 4, j = 0; i < 39; i += 4, j++){
        str[i][22] = cre[j][2].type;
    }
    for(i = 4, j = 0; i < 39; i += 4, j++){
        str[i][34] = cre[j][4].type;
    }
    for(i = 4, j = 0; i < 39; i += 4, j++){
        str[i][46] = cre[j][6].type;
    }
    for(i = 4, j = 0; i < 39; i += 4, j++){
        str[i][58] = cre[j][8].type;
    }
    for(i = 4, j = 0; i < 39; i += 4, j++){
        str[i][70] = cre[j][10].type;
    }
    for(i = 4, j = 0; i < 39; i += 4, j++){
        str[i][82] = cre[j][12].type;
    }
    for(i = 2, j = 0; i < 39; i += 4, j++){
        str[i][16] = cre[j][1].type;
    }
    for(i = 2, j = 0; i < 39; i += 4, j++){
        str[i][28] = cre[j][3].type;
    }
    for(i = 2, j = 0; i < 39; i += 4, j++){
        str[i][40] = cre[j][5].type;
    }
    for(i = 2, j = 0; i < 39; i += 4, j++){
        str[i][52] = cre[j][7].type;
    }
    for(i = 2, j = 0; i < 39; i += 4, j++){
        str[i][64] = cre[j][9].type;
    }
    for(i = 2, j = 0; i < 39; i += 4, j++){
        str[i][76] = cre[j][11].type;
    }
}

char character[8][4];

void create_map_character(struct map_in cre[9][13], char c[8][4], char str[39][88]){
    int i, j;
    for(i = 0; i < 8; i++){
        c[i][2] = '\0';
        c[i][3] = '\0';
    }
    c[0][0] = 'J';
    c[0][1] = 'W';
    c[1][0] = 'W';
    c[1][1] = 'G';
    c[2][0] = 'I';
    c[2][1] = 'L';
    c[3][0] = 'J';
    c[3][1] = 'S';
    c[4][0] = 'S';
    c[4][1] = 'H';
    c[5][0] = 'J';
    c[5][1] = 'B';
    c[6][0] = 'M';
    c[6][1] = 'S';
    c[7][0] = 'S';
    c[7][1] = 'G';
    for(i = 0; i < 9; i++){
        for(j = 0; j < 13; j++){
            cre[i][j].name[0] = '\0';
        }
    }
    cre[4][0].name[0] = c[0][0];
    cre[4][0].name[1] = c[0][1];
    cre[0][4].name[0] = c[1][0];
    cre[0][4].name[1] = c[1][1];
    cre[4][4].name[0] = c[2][0];
    cre[4][4].name[1] = c[2][1];
    cre[2][6].name[0] = c[3][0];
    cre[2][6].name[1] = c[3][1];
    cre[5][6].name[0] = c[4][0];
    cre[5][6].name[1] = c[4][1];
    cre[3][8].name[0] = c[5][0];
    cre[3][8].name[1] = c[5][1];
    cre[7][8].name[0] = c[6][0];
    cre[7][8].name[1] = c[6][1];
    cre[3][12].name[0] = c[7][0];
    cre[3][12].name[1] = c[7][1];
    create_map_type(cre, str);
    str[19][9] = cre[4][0].name[0];
    str[19][11] = cre[4][0].name[1];
    str[3][33] = cre[0][4].name[0];
    str[3][35] = cre[0][4].name[1];
    str[19][33] = cre[4][4].name[0];
    str[19][35] = cre[4][4].name[1];
    str[11][45] = cre[2][6].name[0];
    str[11][47] = cre[2][6].name[1];
    str[23][45] = cre[5][6].name[0];
    str[23][47] = cre[5][6].name[1];
    str[15][57] = cre[3][8].name[0];
    str[15][59] = cre[3][8].name[1];
    str[31][57] = cre[7][8].name[0];
    str[31][59] = cre[7][8].name[1];
    str[15][81] = cre[3][12].name[0];
    str[15][83] = cre[3][12].name[1];
}

void print_map(char str[39][88]){
    int i, j;
    for(i = 0; i < 39; i++){
        for(j = 6; j < 87; j++){
            printf("%c", str[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void search_character(char str[39][88], int * x, int * y, char c[4]){
    int i, j;
    *x = -1;
    for(i = 0; i < 39; i++){
        for(j = 0; j < 88; j++){
            if((str[i][j] == c[0] && str[i][j + 2] == c[1]) || (str[i][j] == c[0] && str[i][j + 1] == c[1])){
                *y = i;
                *x = j + 1;
                break;
            }
        }
        if(*x != -1){
            break;
        }
    }
}

int search_type(char str[39][88], int x[], int y[], char type){
    int i, j, k;
    for(i = 0; i < 6; i++){
        x[i] = y[i] = -1;
    }
    for(i = 0, k = 0; i < 39; i++){
        for(j = 0; j < 88; j++){
            if(str[i][j] == type){
                x[k] = j;
                y[k] = i;
                k++;
                break;
            }
        }
    }
    return k;
}

void move_rule(struct map_in[][13], char[][88], char[], char[]);

int well_move(struct map_in cre[9][13], char str[39][88], char c[4]){
    int x, y, i, j, k, p[6], q[6], n, r, t, cnt;
    char temp;
    search_character(str, &x, &y, c);
    for(j = 0, k = x; k != 10; k -= 6, j++);
    if(j % 2 == 0){
        for(i = 0, k = y + 1; k != 4; k -= 4, i++);
    }
    else{
        for(i = 0, k = y + 1; k != 2; k -= 4, i++);
    }
    if(cre[i][j].type == '4'){
        printf("If you want to use the well press 1 and if not press 2\n");
        scanf("%d", &k);
        if(k == 1){
            n = search_type(str, q, p, '4');
            printf("Open wells are numbered from 1 to %d by sequence from up left to down right part of the map.\n", n);
            printf("Choose a number from 1 to %d\n", n);
            scanf("%d", &cnt);
            str[p[cnt - 1] - 1][q[cnt - 1] - 1] = str[y][x - 1];
            str[p[cnt - 1] - 1][q[cnt - 1]] = str[y][x];
            str[p[cnt - 1] - 1][q[cnt - 1] + 1] = str[y][x + 1];
            str[y][x - 1] = str[y][x] = str[y][x + 1] = ' ';
            for(r = 0, k = q[cnt - 1]; k != 10; k -= 6, r++);
            if(r % 2 == 0){
                for(t = 0, k = p[cnt - 1]; k != 4; k -= 4, t++);
            }
            else{
                for(t = 0, k = p[cnt - 1]; k != 2; k -= 4, t++);
            }
            for(k = 0; k < 4; k++) {
                temp = cre[i][j].name[k];
                cre[i][j].name[k] = cre[t][r].name[k];
                cre[t][r].name[k] = temp;
            }
        }
        return 1;
    }
    return 0;
}

void move(struct map_in cre[9][13], char str[39][88], char next_move[11], char c[4]){
    int x, y, i, j, k;
    char s[1];
    search_character(str, &x, &y, c);
    for(j = 0, k = x; k != 10; k -= 6, j++);
    if(j % 2 == 0){
        for(i = 0, k = y + 1; k != 4; k -= 4, i++);
    }
    else{
        for(i = 0, k = y + 1; k != 2; k -= 4, i++);
    }
    if(strcmp(next_move, "UP") == 0){
        if(str[y - 4][x - 1] == ' ') {
            str[y - 4][x + 1] = str[y][x + 1];
            str[y - 4][x] = str[y][x];
            str[y - 4][x - 1] = str[y][x - 1];
            str[y][x] = str[y][x + 1] = str[y][x - 1] = ' ';
            cre[i - 1][j].name[0] = c[0];
            cre[i - 1][j].name[1] = c[1];
            cre[i - 1][j].name[2] = c[2];
            cre[i - 1][j].name[3] = c[3];
            cre[i][j].name[0] = '\0';
        }
        else{
            printf("Cant move to this house, another character is on it.\n");
            printf("Choose another move.\n");
            gets(s);
            gets(next_move);
            move_rule(cre, str, c, next_move);
        }
    }
    else if(strcmp(next_move, "DOWN") == 0){
        if(str[y + 4][x - 1] == ' ') {
            str[y + 4][x + 1] = str[y][x + 1];
            str[y + 4][x] = str[y][x];
            str[y + 4][x - 1] = str[y][x - 1];
            str[y][x] = str[y][x + 1] = str[y][x - 1] = ' ';
            cre[i + 1][j].name[0] = c[0];
            cre[i + 1][j].name[1] = c[1];
            cre[i + 1][j].name[2] = c[2];
            cre[i + 1][j].name[3] = c[3];
            cre[i][j].name[0] = '\0';
        }
        else{
            printf("Cant move to this house, another character is on it.\n");
            printf("Choose another move.\n");
            gets(s);
            gets(next_move);
            move_rule(cre, str, c, next_move);
        }
    }
    else if(strcmp(next_move, "UP RIGHT") == 0){
        if(str[y - 2][x + 5] == ' ') {
            str[y - 2][x + 7] = str[y][x + 1];
            str[y - 2][x + 6] = str[y][x];
            str[y - 2][x + 5] = str[y][x - 1];
            str[y][x] = str[y][x + 1] = str[y][x - 1] = ' ';
            if (j % 2 == 0) {
                cre[i][j + 1].name[0] = c[0];
                cre[i][j + 1].name[1] = c[1];
                cre[i][j + 1].name[2] = c[2];
                cre[i][j + 1].name[3] = c[3];
                cre[i][j].name[0] = '\0';
            } else {
                cre[i - 1][j + 1].name[0] = c[0];
                cre[i - 1][j + 1].name[1] = c[1];
                cre[i - 1][j + 1].name[2] = c[2];
                cre[i - 1][j + 1].name[3] = c[3];
                cre[i][j].name[0] = '\0';
            }
        }
        else{
            printf("Cant move to this house, another character is on it.\n");
            printf("Choose another move.\n");
            gets(s);
            gets(next_move);
            move_rule(cre, str, c, next_move);
        }
    }
    else if(strcmp(next_move, "UP LEFT") == 0){
        if(str[y - 2][x - 7] == ' ') {
            str[y - 2][x - 5] = str[y][x + 1];
            str[y - 2][x - 6] = str[y][x];
            str[y - 2][x - 7] = str[y][x - 1];
            str[y][x] = str[y][x + 1] = str[y][x - 1] = ' ';
            if (j % 2 == 0) {
                cre[i][j - 1].name[0] = c[0];
                cre[i][j - 1].name[1] = c[1];
                cre[i][j - 1].name[2] = c[2];
                cre[i][j - 1].name[3] = c[3];
                cre[i][j].name[0] = '\0';
            } else {
                cre[i - 1][j - 1].name[0] = c[0];
                cre[i - 1][j - 1].name[1] = c[1];
                cre[i - 1][j - 1].name[2] = c[2];
                cre[i - 1][j - 1].name[3] = c[3];
                cre[i][j].name[0] = '\0';
            }
        }
        else{
            printf("Cant move to this house, another character is on it.\n");
            printf("Choose another move.\n");
            gets(s);
            gets(next_move);
            move_rule(cre, str, c, next_move);
        }
    }
    else if(strcmp(next_move, "DOWN RIGHT") == 0){
        if(str[y + 2][x + 5] == ' ') {
            str[y + 2][x + 7] = str[y][x + 1];
            str[y + 2][x + 6] = str[y][x];
            str[y + 2][x + 5] = str[y][x - 1];
            str[y][x] = str[y][x + 1] = str[y][x - 1] = ' ';
            if (j % 2 == 1) {
                cre[i][j + 1].name[0] = c[0];
                cre[i][j + 1].name[1] = c[1];
                cre[i][j + 1].name[2] = c[2];
                cre[i][j + 1].name[3] = c[3];
                cre[i][j].name[0] = '\0';
            } else {
                cre[i + 1][j + 1].name[0] = c[0];
                cre[i + 1][j + 1].name[1] = c[1];
                cre[i + 1][j + 1].name[2] = c[2];
                cre[i + 1][j + 1].name[3] = c[3];
                cre[i][j].name[0] = '\0';
            }
        }
        else{
            printf("Cant move to this house, another character is on it.\n");
            printf("Choose another move.\n");
            gets(s);
            gets(next_move);
            move_rule(cre, str, c, next_move);
        }
    }
    else if(strcmp(next_move, "DOWN LEFT") == 0){
        if(str[y + 2][x - 7] == ' ') {
            str[y + 2][x - 5] = str[y][x + 1];
            str[y + 2][x - 6] = str[y][x];
            str[y + 2][x - 7] = str[y][x - 1];
            str[y][x] = str[y][x + 1] = str[y][x - 1] = ' ';
            if (j % 2 == 1) {
                cre[i][j - 1].name[0] = c[0];
                cre[i][j - 1].name[1] = c[1];
                cre[i][j - 1].name[2] = c[2];
                cre[i][j - 1].name[3] = c[3];
                cre[i][j].name[0] = '\0';
            } else {
                cre[i + 1][j - 1].name[0] = c[0];
                cre[i + 1][j - 1].name[1] = c[1];
                cre[i + 1][j - 1].name[2] = c[2];
                cre[i + 1][j - 1].name[3] = c[3];
                cre[i][j].name[0] = '\0';
            }
        }
        else{
            printf("Cant move to this house, another character is on it.\n");
            printf("Choose another move.\n");
            gets(s);
            gets(next_move);
            move_rule(cre, str, c, next_move);
        }
    }
}

struct node{
    char name[200];
    int num;
    struct node *next;
};

struct node * create_node(char name[200]){
    int i;
    struct node * nn;
    nn = (struct node *) malloc(sizeof(struct node));
    if (nn == NULL)
        return NULL;
    for(i = 0; i < 200; i++){
        nn->name[i] = name[i];
    }
    nn->next = NULL;
    return nn;
}

void add_end(struct node *list, struct node * new_node){
    struct node *current;
    for(current = list; current-> next != NULL; current = current->next);
    current->next = new_node;
    new_node->next = NULL;
}

void card_creation(struct node * list){
    struct node * new_node;
    new_node = create_node("IL: 1) Move 1 to 3 houses. 2) Change the location of one of the city gates shutter after his move.");
    new_node->num = 2;
    add_end(list, new_node);
    new_node = create_node("MS: 1) Move 1 to 4 houses. 2) Can pass every houses while moving but at the end she should stop on a empty house.");
    new_node->num = 3;
    add_end(list, new_node);
    new_node = create_node("JB: 1) Move 1 to 3 houses. 2) Change the location of one of the wells plug after or before his move.");
    new_node->num = 4;
    add_end(list, new_node);
    new_node = create_node("JW: 1) Move 1 to 3 houses. 2) After his move he determines his direction, so the light will light up every house in that direction until it encounters a full house.");
    new_node->num = 5;
    add_end(list, new_node);
    new_node = create_node("WG: 1) Move 1 to 3 houses. 2) Change his location with another character.");
    new_node->num = 6;
    add_end(list, new_node);
    new_node = create_node("SG: 1) Move 1 to 3 houses. 2) After his move he will whistle and by choose of the player he can move other characters 3 times and take them close to himself.");
    new_node->num = 7;
    add_end(list, new_node);
    new_node = create_node("JS: 1) Move 1 to 3 houses. 2) After or before his move he should turn off one of the lights and turn on the other.");
    new_node->num = 8;
    add_end(list, new_node);
}

int randomize(){
    int ran;
    time_t T = time(NULL);
    srand(T);
    ran = rand();
    ran %= 10;
    if(ran == 0){
        ran += 1;
    }
    else if(ran == 9){
        ran -= 1;
    }
    return ran;
}

void first_4_card(struct node *list, struct node **list1){
    struct node *new_node;
    struct node *current;
    int ran[4];
    ran[0] = randomize();
    for(current = list; current != NULL && current->num != ran[0]; current = current->next);
    *list1 = create_node(current->name);
    (*list1)->num = ran[0];
    ran[1] = ran[0];
    while(ran[1] == ran[0]) {
        ran[1] = randomize();
    }
    for(current = list; current != NULL && current->num != ran[1]; current = current->next);
    new_node = create_node(current->name);
    new_node->num = ran[1];
    add_end(*list1, new_node);
    ran[2] = ran[0];
    while(ran[2] == ran[1] || ran[2] == ran[0]){
        ran[2] = randomize();
    }
    for(current = list; current != NULL && current->num != ran[2]; current = current->next);
    new_node = create_node(current->name);
    new_node->num = ran[2];
    add_end(*list1, new_node);
    ran[3] = ran[0];
    while(ran[3] == ran[2] || ran[3] == ran[1] || ran[3] == ran[0]){
        ran[3] = randomize();
    }
    for(current = list; current != NULL && current->num != ran[3]; current = current->next);
    new_node = create_node(current->name);
    new_node->num = ran[3];
    add_end(*list1, new_node);
}

void second_4_card(struct node *list, struct node *list1, struct node **list2){
    struct node *new_node;
    struct node *current;
    for (current = list; current != NULL; current = current->next){
        if(current->num == list1->num){
            continue;
        }
        else if(current->num == list1->next->num){
            continue;
        }
        else if(current->num == list1->next->next->num){
            continue;
        }
        else if(current->num == list1->next->next->next->num){
            continue;
        }
        else{
            *list2 = create_node(current->name);
            (*list2)->num = current->num;
        }
    }
    for (current = list; current != NULL; current = current->next){
        if(current->num == list1->num){
            continue;
        }
        else if(current->num == list1->next->num){
            continue;
        }
        else if(current->num == list1->next->next->num){
            continue;
        }
        else if(current->num == list1->next->next->next->num){
            continue;
        }
        else if(current->num == (*list2)->num){
            continue;
        }
        else{
            new_node = create_node(current->name);
            new_node->num = current->num;
            add_end(*list2, new_node);
        }
    }
}

void print_list(struct node *list){
    struct node * current = list;
    while(current != NULL){
        printf("%s\n", current->name);
        current = current->next;
    }
}

void determine_situation(struct map_in cre[9][13]) {
    int i, j;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 13; j++) {
            if (cre[i][j].type == '2') {
                if (j % 2 == 0) {
                    cre[i][j - 1].situation[0] = 'V';
                    cre[i][j - 1].situation[1] = 'I';
                    cre[i][j - 1].situation[2] = 'S';
                    cre[i][j - 1].situation[3] = 'I';
                    cre[i][j - 1].situation[4] = 'B';
                    cre[i][j - 1].situation[5] = 'L';
                    cre[i][j - 1].situation[6] = 'E';
                    cre[i][j - 1].situation[7] = '\0';
                    cre[i + 1][j - 1].situation[0] = 'V';
                    cre[i + 1][j - 1].situation[1] = 'I';
                    cre[i + 1][j - 1].situation[2] = 'S';
                    cre[i + 1][j - 1].situation[3] = 'I';
                    cre[i + 1][j - 1].situation[4] = 'B';
                    cre[i + 1][j - 1].situation[5] = 'L';
                    cre[i + 1][j - 1].situation[6] = 'E';
                    cre[i + 1][j - 1].situation[7] = '\0';
                    cre[i - 1][j].situation[0] = 'V';
                    cre[i - 1][j].situation[1] = 'I';
                    cre[i - 1][j].situation[2] = 'S';
                    cre[i - 1][j].situation[3] = 'I';
                    cre[i - 1][j].situation[4] = 'B';
                    cre[i - 1][j].situation[5] = 'L';
                    cre[i - 1][j].situation[6] = 'E';
                    cre[i - 1][j].situation[7] = '\0';
                    cre[i + 1][j].situation[0] = 'V';
                    cre[i + 1][j].situation[1] = 'I';
                    cre[i + 1][j].situation[2] = 'S';
                    cre[i + 1][j].situation[3] = 'I';
                    cre[i + 1][j].situation[4] = 'B';
                    cre[i + 1][j].situation[5] = 'L';
                    cre[i + 1][j].situation[6] = 'E';
                    cre[i + 1][j].situation[7] = '\0';
                    cre[i][j + 1].situation[0] = 'V';
                    cre[i][j + 1].situation[1] = 'I';
                    cre[i][j + 1].situation[2] = 'S';
                    cre[i][j + 1].situation[3] = 'I';
                    cre[i][j + 1].situation[4] = 'B';
                    cre[i][j + 1].situation[5] = 'L';
                    cre[i][j + 1].situation[6] = 'E';
                    cre[i][j + 1].situation[7] = '\0';
                    cre[i + 1][j + 1].situation[0] = 'V';
                    cre[i + 1][j + 1].situation[1] = 'I';
                    cre[i + 1][j + 1].situation[2] = 'S';
                    cre[i + 1][j + 1].situation[3] = 'I';
                    cre[i + 1][j + 1].situation[4] = 'B';
                    cre[i + 1][j + 1].situation[5] = 'L';
                    cre[i + 1][j + 1].situation[6] = 'E';
                    cre[i + 1][j + 1].situation[7] = '\0';
                } else {
                    cre[i][j - 1].situation[0] = 'V';
                    cre[i][j - 1].situation[1] = 'I';
                    cre[i][j - 1].situation[2] = 'S';
                    cre[i][j - 1].situation[3] = 'I';
                    cre[i][j - 1].situation[4] = 'B';
                    cre[i][j - 1].situation[5] = 'L';
                    cre[i][j - 1].situation[6] = 'E';
                    cre[i][j - 1].situation[7] = '\0';
                    cre[i - 1][j - 1].situation[0] = 'V';
                    cre[i - 1][j - 1].situation[1] = 'I';
                    cre[i - 1][j - 1].situation[2] = 'S';
                    cre[i - 1][j - 1].situation[3] = 'I';
                    cre[i - 1][j - 1].situation[4] = 'B';
                    cre[i - 1][j - 1].situation[5] = 'L';
                    cre[i - 1][j - 1].situation[6] = 'E';
                    cre[i - 1][j - 1].situation[7] = '\0';
                    cre[i - 1][j].situation[0] = 'V';
                    cre[i - 1][j].situation[1] = 'I';
                    cre[i - 1][j].situation[2] = 'S';
                    cre[i - 1][j].situation[3] = 'I';
                    cre[i - 1][j].situation[4] = 'B';
                    cre[i - 1][j].situation[5] = 'L';
                    cre[i - 1][j].situation[6] = 'E';
                    cre[i - 1][j].situation[7] = '\0';
                    cre[i + 1][j].situation[0] = 'V';
                    cre[i + 1][j].situation[1] = 'I';
                    cre[i + 1][j].situation[2] = 'S';
                    cre[i + 1][j].situation[3] = 'I';
                    cre[i + 1][j].situation[4] = 'B';
                    cre[i + 1][j].situation[5] = 'L';
                    cre[i + 1][j].situation[6] = 'E';
                    cre[i + 1][j].situation[7] = '\0';
                    cre[i][j + 1].situation[0] = 'V';
                    cre[i][j + 1].situation[1] = 'I';
                    cre[i][j + 1].situation[2] = 'S';
                    cre[i][j + 1].situation[3] = 'I';
                    cre[i][j + 1].situation[4] = 'B';
                    cre[i][j + 1].situation[5] = 'L';
                    cre[i][j + 1].situation[6] = 'E';
                    cre[i][j + 1].situation[7] = '\0';
                    cre[i - 1][j + 1].situation[0] = 'V';
                    cre[i - 1][j + 1].situation[1] = 'I';
                    cre[i - 1][j + 1].situation[2] = 'S';
                    cre[i - 1][j + 1].situation[3] = 'I';
                    cre[i - 1][j + 1].situation[4] = 'B';
                    cre[i - 1][j + 1].situation[5] = 'L';
                    cre[i - 1][j + 1].situation[6] = 'E';
                    cre[i - 1][j + 1].situation[7] = '\0';
                }
            }
        }
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 13; j++) {
            if (cre[i][j].name[0] != '\0') {
                if (cre[i - 1][j].name[0] != '\0') {
                    cre[i][j].situation[0] = 'V';
                    cre[i][j].situation[1] = 'I';
                    cre[i][j].situation[2] = 'S';
                    cre[i][j].situation[3] = 'I';
                    cre[i][j].situation[4] = 'B';
                    cre[i][j].situation[5] = 'L';
                    cre[i][j].situation[6] = 'E';
                    cre[i][j].situation[7] = '\0';
                    cre[i - 1][j].situation[0] = 'V';
                    cre[i - 1][j].situation[1] = 'I';
                    cre[i - 1][j].situation[2] = 'S';
                    cre[i - 1][j].situation[3] = 'I';
                    cre[i - 1][j].situation[4] = 'B';
                    cre[i - 1][j].situation[5] = 'L';
                    cre[i - 1][j].situation[6] = 'E';
                    cre[i - 1][j].situation[7] = '\0';
                } else if (cre[i + 1][j].name[0] != '\0') {
                    cre[i][j].situation[0] = 'V';
                    cre[i][j].situation[1] = 'I';
                    cre[i][j].situation[2] = 'S';
                    cre[i][j].situation[3] = 'I';
                    cre[i][j].situation[4] = 'B';
                    cre[i][j].situation[5] = 'L';
                    cre[i][j].situation[6] = 'E';
                    cre[i][j].situation[7] = '\0';
                    cre[i + 1][j].situation[0] = 'V';
                    cre[i + 1][j].situation[1] = 'I';
                    cre[i + 1][j].situation[2] = 'S';
                    cre[i + 1][j].situation[3] = 'I';
                    cre[i + 1][j].situation[4] = 'B';
                    cre[i + 1][j].situation[5] = 'L';
                    cre[i + 1][j].situation[6] = 'E';
                    cre[i + 1][j].situation[7] = '\0';
                }
                if (j % 2 == 0) {
                    if (cre[i][j + 1].name[0] != '\0') {
                        cre[i][j].situation[0] = 'V';
                        cre[i][j].situation[1] = 'I';
                        cre[i][j].situation[2] = 'S';
                        cre[i][j].situation[3] = 'I';
                        cre[i][j].situation[4] = 'B';
                        cre[i][j].situation[5] = 'L';
                        cre[i][j].situation[6] = 'E';
                        cre[i][j].situation[7] = '\0';
                        cre[i][j + 1].situation[0] = 'V';
                        cre[i][j + 1].situation[1] = 'I';
                        cre[i][j + 1].situation[2] = 'S';
                        cre[i][j + 1].situation[3] = 'I';
                        cre[i][j + 1].situation[4] = 'B';
                        cre[i][j + 1].situation[5] = 'L';
                        cre[i][j + 1].situation[6] = 'E';
                        cre[i][j + 1].situation[7] = '\0';
                    } else if (cre[i + 1][j + 1].name[0] != '\0') {
                        cre[i][j].situation[0] = 'V';
                        cre[i][j].situation[1] = 'I';
                        cre[i][j].situation[2] = 'S';
                        cre[i][j].situation[3] = 'I';
                        cre[i][j].situation[4] = 'B';
                        cre[i][j].situation[5] = 'L';
                        cre[i][j].situation[6] = 'E';
                        cre[i][j].situation[7] = '\0';
                        cre[i + 1][j + 1].situation[0] = 'V';
                        cre[i + 1][j + 1].situation[1] = 'I';
                        cre[i + 1][j + 1].situation[2] = 'S';
                        cre[i + 1][j + 1].situation[3] = 'I';
                        cre[i + 1][j + 1].situation[4] = 'B';
                        cre[i + 1][j + 1].situation[5] = 'L';
                        cre[i + 1][j + 1].situation[6] = 'E';
                        cre[i + 1][j + 1].situation[7] = '\0';
                    } else if (cre[i][j - 1].name[0] != '\0') {
                        cre[i][j].situation[0] = 'V';
                        cre[i][j].situation[1] = 'I';
                        cre[i][j].situation[2] = 'S';
                        cre[i][j].situation[3] = 'I';
                        cre[i][j].situation[4] = 'B';
                        cre[i][j].situation[5] = 'L';
                        cre[i][j].situation[6] = 'E';
                        cre[i][j].situation[7] = '\0';
                        cre[i][j - 1].situation[0] = 'V';
                        cre[i][j - 1].situation[1] = 'I';
                        cre[i][j - 1].situation[2] = 'S';
                        cre[i][j - 1].situation[3] = 'I';
                        cre[i][j - 1].situation[4] = 'B';
                        cre[i][j - 1].situation[5] = 'L';
                        cre[i][j - 1].situation[6] = 'E';
                        cre[i][j - 1].situation[7] = '\0';
                    } else if (cre[i + 1][j - 1].name[0] != '\0') {
                        cre[i][j].situation[0] = 'V';
                        cre[i][j].situation[1] = 'I';
                        cre[i][j].situation[2] = 'S';
                        cre[i][j].situation[3] = 'I';
                        cre[i][j].situation[4] = 'B';
                        cre[i][j].situation[5] = 'L';
                        cre[i][j].situation[6] = 'E';
                        cre[i][j].situation[7] = '\0';
                        cre[i + 1][j - 1].situation[0] = 'V';
                        cre[i + 1][j - 1].situation[1] = 'I';
                        cre[i + 1][j - 1].situation[2] = 'S';
                        cre[i + 1][j - 1].situation[3] = 'I';
                        cre[i + 1][j - 1].situation[4] = 'B';
                        cre[i + 1][j - 1].situation[5] = 'L';
                        cre[i + 1][j - 1].situation[6] = 'E';
                        cre[i + 1][j - 1].situation[7] = '\0';
                    }
                } else {
                    if (cre[i - 1][j + 1].name[0] != '\0') {
                        cre[i][j].situation[0] = 'V';
                        cre[i][j].situation[1] = 'I';
                        cre[i][j].situation[2] = 'S';
                        cre[i][j].situation[3] = 'I';
                        cre[i][j].situation[4] = 'B';
                        cre[i][j].situation[5] = 'L';
                        cre[i][j].situation[6] = 'E';
                        cre[i][j].situation[7] = '\0';
                        cre[i - 1][j + 1].situation[0] = 'V';
                        cre[i - 1][j + 1].situation[1] = 'I';
                        cre[i - 1][j + 1].situation[2] = 'S';
                        cre[i - 1][j + 1].situation[3] = 'I';
                        cre[i - 1][j + 1].situation[4] = 'B';
                        cre[i - 1][j + 1].situation[5] = 'L';
                        cre[i - 1][j + 1].situation[6] = 'E';
                        cre[i - 1][j + 1].situation[7] = '\0';
                    } else if (cre[i][j + 1].name[0] != '\0') {
                        cre[i][j].situation[0] = 'V';
                        cre[i][j].situation[1] = 'I';
                        cre[i][j].situation[2] = 'S';
                        cre[i][j].situation[3] = 'I';
                        cre[i][j].situation[4] = 'B';
                        cre[i][j].situation[5] = 'L';
                        cre[i][j].situation[6] = 'E';
                        cre[i][j].situation[7] = '\0';
                        cre[i][j + 1].situation[0] = 'V';
                        cre[i][j + 1].situation[1] = 'I';
                        cre[i][j + 1].situation[2] = 'S';
                        cre[i][j + 1].situation[3] = 'I';
                        cre[i][j + 1].situation[4] = 'B';
                        cre[i][j + 1].situation[5] = 'L';
                        cre[i][j + 1].situation[6] = 'E';
                        cre[i][j + 1].situation[7] = '\0';
                    } else if (cre[i - 1][j - 1].name[0] != '\0') {
                        cre[i][j].situation[0] = 'V';
                        cre[i][j].situation[1] = 'I';
                        cre[i][j].situation[2] = 'S';
                        cre[i][j].situation[3] = 'I';
                        cre[i][j].situation[4] = 'B';
                        cre[i][j].situation[5] = 'L';
                        cre[i][j].situation[6] = 'E';
                        cre[i][j].situation[7] = '\0';
                        cre[i - 1][j - 1].situation[0] = 'V';
                        cre[i - 1][j - 1].situation[1] = 'I';
                        cre[i - 1][j - 1].situation[2] = 'S';
                        cre[i - 1][j - 1].situation[3] = 'I';
                        cre[i - 1][j - 1].situation[4] = 'B';
                        cre[i - 1][j - 1].situation[5] = 'L';
                        cre[i - 1][j - 1].situation[6] = 'E';
                        cre[i - 1][j - 1].situation[7] = '\0';
                    } else if (cre[i][j - 1].name[0] != '\0') {
                        cre[i][j].situation[0] = 'V';
                        cre[i][j].situation[1] = 'I';
                        cre[i][j].situation[2] = 'S';
                        cre[i][j].situation[3] = 'I';
                        cre[i][j].situation[4] = 'B';
                        cre[i][j].situation[5] = 'L';
                        cre[i][j].situation[6] = 'E';
                        cre[i][j].situation[7] = '\0';
                        cre[i][j - 1].situation[0] = 'V';
                        cre[i][j - 1].situation[1] = 'I';
                        cre[i][j - 1].situation[2] = 'S';
                        cre[i][j - 1].situation[3] = 'I';
                        cre[i][j - 1].situation[4] = 'B';
                        cre[i][j - 1].situation[5] = 'L';
                        cre[i][j - 1].situation[6] = 'E';
                        cre[i][j - 1].situation[7] = '\0';
                    }
                }
            }
        }
    }
    cre[0][4].situation[0] = 'I';
    cre[0][4].situation[1] = 'N';
    cre[0][4].situation[2] = 'V';
    cre[0][4].situation[3] = 'I';
    cre[0][4].situation[4] = 'S';
    cre[0][4].situation[5] = 'I';
    cre[0][4].situation[6] = 'B';
    cre[0][4].situation[7] = 'L';
    cre[0][4].situation[8] = 'E';
    cre[0][4].situation[9] = '\0';
    cre[4][0].situation[0] = 'I';
    cre[4][0].situation[1] = 'N';
    cre[4][0].situation[2] = 'V';
    cre[4][0].situation[3] = 'I';
    cre[4][0].situation[4] = 'S';
    cre[4][0].situation[5] = 'I';
    cre[4][0].situation[6] = 'B';
    cre[4][0].situation[7] = 'L';
    cre[4][0].situation[8] = 'E';
    cre[4][0].situation[9] = '\0';
    cre[3][12].situation[0] = 'I';
    cre[3][12].situation[1] = 'N';
    cre[3][12].situation[2] = 'V';
    cre[3][12].situation[3] = 'I';
    cre[3][12].situation[4] = 'S';
    cre[3][12].situation[5] = 'I';
    cre[3][12].situation[6] = 'B';
    cre[3][12].situation[7] = 'L';
    cre[3][12].situation[8] = 'E';
    cre[3][12].situation[9] = '\0';
}

void move_rule(struct map_in cre[9][13], char str[39][88], char c[4], char next_move[11]){
    int x, y;
    if(strcmp(c, "MS") != 0) {
        if (strcmp(next_move, "UP") == 0) {
            search_character(str, &x, &y, c);
            y -= 3;
            if (str[y][x] == '1' || str[y][x] == '2' || str[y][x] == '3' || str[y][x] == '7' || str[y][x] == '8') {
                printf("House is full, cant stop!\n");
                gets(next_move);
                return move_rule(cre, str, c, next_move);
            }
            else if (str[y][x] == '0' || str[y][x] == '4' || str[y][x] == '5' || str[y][x] == '6') {
                move(cre, str, next_move, c);
            }
        }
        else if (strcmp(next_move, "UP RIGHT") == 0) {
            search_character(str, &x, &y, c);
            x += 6;
            y -= 1;
            if (str[y][x] == '1' || str[y][x] == '2' || str[y][x] == '3' || str[y][x] == '7' || str[y][x] == '8') {
                printf("House is full, cant stop!\n");
                gets(next_move);
                return move_rule(cre, str, c, next_move);
            }
            else if (str[y][x] == '0' || str[y][x] == '4' || str[y][x] == '5' || str[y][x] == '6') {
                move(cre, str, next_move, c);
            }
        }
        else if (strcmp(next_move, "UP LEFT") == 0) {
            search_character(str, &x, &y, c);
            x -= 6;
            y -= 1;
            if (str[y][x] == '1' || str[y][x] == '2' || str[y][x] == '3' || str[y][x] == '7' || str[y][x] == '8') {
                printf("House is full, cant stop!\n");
                gets(next_move);
                return move_rule(cre, str, c, next_move);
            }
            else if (str[y][x] == '0' || str[y][x] == '4' || str[y][x] == '5' || str[y][x] == '6') {
                move(cre, str, next_move, c);
            }
        }
        else if (strcmp(next_move, "DOWN") == 0) {
            search_character(str, &x, &y, c);
            y += 5;
            if (str[y][x] == '1' || str[y][x] == '2' || str[y][x] == '3' || str[y][x] == '7' || str[y][x] == '8') {
                printf("House is full, cant stop!\n");
                gets(next_move);
                return move_rule(cre, str, c, next_move);
            }
            else if (str[y][x] == '0' || str[y][x] == '4' || str[y][x] == '5' || str[y][x] == '6') {
                move(cre, str, next_move, c);
            }
        }
        else if (strcmp(next_move, "DOWN RIGHT") == 0) {
            search_character(str, &x, &y, c);
            x += 6;
            y += 3;
            if (str[y][x] == '1' || str[y][x] == '2' || str[y][x] == '3' || str[y][x] == '7' || str[y][x] == '8') {
                printf("House is full, cant stop!\n");
                gets(next_move);
                return move_rule(cre, str, c, next_move);
            }
            else if (str[y][x] == '0' || str[y][x] == '4' || str[y][x] == '5' || str[y][x] == '6') {
                move(cre, str, next_move, c);
            }
        }
        else if (strcmp(next_move, "DOWN LEFT") == 0) {
            search_character(str, &x, &y, c);
            x -= 6;
            y += 3;
            if (str[y][x] == '1' || str[y][x] == '2' || str[y][x] == '3' || str[y][x] == '7' || str[y][x] == '8') {
                printf("House is full, cant stop!\n");
                gets(next_move);
                return move_rule(cre, str, c, next_move);
            } else if (str[y][x] == '0' || str[y][x] == '4' || str[y][x] == '5' || str[y][x] == '6') {
                move(cre, str, next_move, c);
            }
        }
    }
}

void innocent_card(char card[8][20]){
    int i, j;
    for(i = 0; i < 8; i++){
        for(j = 0; j < 20; j++){
            card[i][j] = '\0';
        }
    }
    card[0][0] = 'S';
    card[0][1] = 'H';
    card[0][2] = 'E';
    card[0][3] = 'R';
    card[0][4] = 'L';
    card[0][5] = 'O';
    card[0][6] = 'C';
    card[0][7] = 'K';
    card[0][8] = ' ';
    card[0][9] = 'H';
    card[0][10] = 'O';
    card[0][11] = 'L';
    card[0][12] = 'M';
    card[0][13] = 'E';
    card[0][14] = 'S';
    card[0][15] = '\0';
    card[1][0] = 'I';
    card[1][1] = 'N';
    card[1][2] = 'S';
    card[1][3] = 'P';
    card[1][4] = 'E';
    card[1][5] = 'C';
    card[1][6] = 'T';
    card[1][7] = 'E';
    card[1][8] = 'U';
    card[1][9] = 'R';
    card[1][10] = ' ';
    card[1][11] = 'L';
    card[1][12] = 'E';
    card[1][13] = 'S';
    card[1][14] = 'T';
    card[1][15] = 'R';
    card[1][16] = 'A';
    card[1][17] = 'D';
    card[1][18] = 'E';
    card[1][19] = '\0';
    card[2][0] = 'M';
    card[2][1] = 'I';
    card[2][2] = 'S';
    card[2][3] = 'S';
    card[2][4] = ' ';
    card[2][5] = 'S';
    card[2][6] = 'T';
    card[2][7] = 'E';
    card[2][8] = 'A';
    card[2][9] = 'L';
    card[2][10] = 'T';
    card[2][11] = 'H';
    card[2][12] = 'Y';
    card[2][13] = '\0';
    card[3][0] = 'J';
    card[3][1] = 'E';
    card[3][2] = 'R';
    card[3][3] = 'E';
    card[3][4] = 'M';
    card[3][5] = 'Y';
    card[3][6] = ' ';
    card[3][7] = 'B';
    card[3][8] = 'E';
    card[3][9] = 'R';
    card[3][10] = 'T';
    card[3][11] = '\0';
    card[4][0] = 'J';
    card[4][1] = 'O';
    card[4][2] = 'H';
    card[4][3] = 'N';
    card[4][4] = ' ';
    card[4][5] = 'H';
    card[4][6] = '.';
    card[4][7] = ' ';
    card[4][8] = 'W';
    card[4][9] = 'A';
    card[4][10] = 'T';
    card[4][11] = 'S';
    card[4][12] = 'O';
    card[4][13] = 'N';
    card[4][14] = '\0';
    card[5][0] = 'S';
    card[5][1] = 'I';
    card[5][2] = 'R';
    card[5][3] = ' ';
    card[5][4] = 'W';
    card[5][5] = 'I';
    card[5][6] = 'L';
    card[5][7] = 'L';
    card[5][8] = 'I';
    card[5][9] = 'A';
    card[5][10] = 'M';
    card[5][11] = ' ';
    card[5][12] = 'G';
    card[5][13] = 'U';
    card[5][14] = 'L';
    card[5][15] = 'L';
    card[5][16] = '\0';
    card[6][0] = 'S';
    card[6][1] = 'E';
    card[6][2] = 'R';
    card[6][3] = 'G';
    card[6][4] = 'E';
    card[6][5] = 'N';
    card[6][6] = 'T';
    card[6][7] = ' ';
    card[6][8] = 'G';
    card[6][9] = 'O';
    card[6][10] = 'O';
    card[6][11] = 'D';
    card[6][12] = 'L';
    card[6][13] = 'Y';
    card[6][14] = '\0';
    card[7][0] = 'J';
    card[7][1] = 'O';
    card[7][2] = 'H';
    card[7][3] = 'N';
    card[7][4] = ' ';
    card[7][5] = 'S';
    card[7][6] = 'M';
    card[7][7] = 'I';
    card[7][8] = 'T';
    card[7][9] = 'H';
    card[7][10] = '\0';
}

char * determine_MRJack(char card[8][20]){
    char * c = (char *) calloc(20, sizeof(char *));
    if(c == NULL){
        printf("cannot allocate memory\n");
        exit(-1);
    }
    int i;
    do{
        i = randomize() - 1;
    }
    while(card[i][0] == '\0');
    for(int j = 0; j < 20; j++){
        c[j] = card[i][j];
    }
    card[i][0] = '\0';
    return c;
}

void character_ability(struct map_in cre[9][13], char str[39][88], char c[4]){
    int x1[6], y1[6], x2[6], y2[6], n, m, i, j, k;
    int x3, x4, y3, y4, p, q, r, t;
    char temp, s[4], card[8][20], next_move[11], ss[1];
    if(strcmp(c, "IL") == 0){
        n = search_type(str, x1, y1, '6');
        printf("Open city gates are numbered from 1 to %d by sequence from up left to down right part of the map.\n", n);
        printf("Choose a number from 1 to %d\n", n);
        scanf("%d", &i);
        m = search_type(str, x2, y2, '7');
        printf("Close city gates are numbered from 1 to %d by sequence from up left to down right part of the map.\n", m);
        printf("Choose a number from 1 to %d\n", m);
        scanf("%d", &j);
        temp = str[y1[i - 1]][x1[i - 1]];
        str[y1[i - 1]][x1[i - 1]] = str[y2[j - 1]][x2[j - 1]];
        str[y2[j - 1]][x2[j - 1]] = temp;
        for(p = 0, k = x1[i - 1]; k != 10; k -= 6, p++);
        if(p % 2 == 0){
            for(q = 0, k = y1[i - 1]; k != 4; k -= 4, q++);
        }
        else{
            for(q = 0, k = y1[i - 1]; k != 2; k -= 4, q++);
        }
        for(r = 0, k = x2[j - 1]; k != 10; k -= 6, r++);
        if(r % 2 == 0){
            for(t = 0, k = y2[j - 1]; k != 4; k -= 4, t++);
        }
        else{
            for(t = 0, k = y2[j - 1]; k != 2; k -= 4, t++);
        }
        temp = cre[q][p].type;
        cre[q][p].type = cre[t][r].type;
        cre[t][r].type = temp;
    }
    else if(strcmp(c, "JB") == 0){
        n = search_type(str, x1, y1, '4');
        printf("Open wells are numbered from 1 to %d by sequence from up left to down right part of the map.\n", n);
        printf("Choose a number from 1 to %d\n", n);
        scanf("%d", &i);
        m = search_type(str, x2, y2, '5');
        printf("Close wells are numbered from 1 to %d by sequence from up left to down right part of the map.\n", m);
        printf("Choose a number from 1 to %d\n", m);
        scanf("%d", &j);
        temp = str[y1[i - 1]][x1[i - 1]];
        str[y1[i - 1]][x1[i - 1]] = str[y2[j - 1]][x2[j - 1]];
        str[y2[j - 1]][x2[j - 1]] = temp;
        for(p = 0, k = x1[i - 1]; k != 10; k -= 6, p++);
        if(p % 2 == 0){
            for(q = 0, k = y1[i - 1]; k != 4; k -= 4, q++);
        }
        else{
            for(q = 0, k = y1[i - 1]; k != 2; k -= 4, q++);
        }
        for(r = 0, k = x2[j - 1]; k != 10; k -= 6, r++);
        if(r % 2 == 0){
            for(t = 0, k = y2[j - 1]; k != 4; k -= 4, t++);
        }
        else{
            for(t = 0, k = y2[j - 1]; k != 2; k -= 4, t++);
        }
        temp = cre[q][p].type;
        cre[q][p].type = cre[t][r].type;
        cre[t][r].type = temp;
    }
    else if(strcmp(c, "JS") == 0){
        n = search_type(str, x1, y1, '2');
        printf("On lights are numbered from 1 to %d by sequence from up left to down right part of the map.\n", n);
        printf("Choose a number from 1 to %d\n", n);
        scanf("%d", &i);
        m = search_type(str, x2, y2, '3');
        printf("Off lights are numbered from 1 to %d by sequence from up left to down right part of the map.\n", m);
        printf("Choose a number from 1 to %d\n", m);
        scanf("%d", &j);
        temp = str[y1[i - 1]][x1[i - 1]];
        str[y1[i - 1]][x1[i - 1]] = str[y2[j - 1]][x2[j - 1]];
        str[y2[j - 1]][x2[j - 1]] = temp;
        for(p = 0, k = x1[i - 1]; k != 10; k -= 6, p++);
        if(p % 2 == 0){
            for(q = 0, k = y1[i - 1]; k != 4; k -= 4, q++);
        }
        else{
            for(q = 0, k = y1[i - 1]; k != 2; k -= 4, q++);
        }
        for(r = 0, k = x2[j - 1]; k != 10; k -= 6, r++);
        if(r % 2 == 0){
            for(t = 0, k = y2[j - 1]; k != 4; k -= 4, t++);
        }
        else{
            for(t = 0, k = y2[j - 1]; k != 2; k -= 4, t++);
        }
        temp = cre[q][p].type;
        cre[q][p].type = cre[t][r].type;
        cre[t][r].type = temp;
    }
    else if(strcmp(c, "WG") == 0){
        search_character(str, &x3, &y3, "WG");
        for(j = 0, k = x3; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y3 + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y3 + 1; k != 2; k -= 4, i++);
        }
        printf("Choose the character you want to change your location with.\n");
        for(k = 0; k < 4; k++){
            s[i] = '\0';
        }
        gets(ss);
        gets(s);
        search_character(str, &x4, &y4, s);
        for(p = 0, k = x4; k != 10; k -= 6, p++);
        if(p % 2 == 0){
            for(q = 0, k = y4 + 1; k != 4; k -= 4, q++);
        }
        else{
            for(q = 0, k = y4 + 1; k != 2; k -= 4, q++);
        }
        k = 0;
        temp = str[y4][x4 - 1];
        str[y4][x4 - 1] = str[y3][x3 - 1];
        str[y3][x3 - 1] = temp;
        temp = str[y4][x4];
        str[y4][x4] = str[y3][x3];
        str[y3][x3] = temp;
        temp = str[y4][x4 + 1];
        str[y4][x4 + 1] = str[y3][x3 + 1];
        str[y3][x3 + 1] = temp;
        for(k = 0; k < 4; k++){
            temp = cre[i][j].name[k];
            cre[i][j].name[k] = cre[q][p].name[k];
            cre[q][p].name[k] = temp;
        }
    }
    else if(strcmp(c, "SH") == 0) {
        innocent_card(card);
        printf("press 1 to see which character is innocent\n");
        scanf("%d", &i);
        printf("%s is innocent\n", determine_MRJack(card));
    }
    else if(strcmp(c, "SG") == 0) {
        printf("How many character do you want to move?\n");
        printf("1 - 2 - 3\n");
        scanf("%d", &i);
        gets(ss);
        if(i == 1){
            printf("Choose the character you want to move:\n");
            gets(s);
            printf("Choose the next move\n");
            gets(next_move);
            if(strcmp(s, "MS") != 0) {
                move_rule(cre, str, s, next_move);
                printf("Choose the next move\n");
                gets(next_move);
                move_rule(cre, str, s, next_move);
                printf("Choose the next move\n");
                gets(next_move);
                move_rule(cre, str, s, next_move);
            }
            else{
                move(cre, str, next_move, s);
                printf("Choose the next move\n");
                gets(next_move);
                move(cre, str, next_move, s);
                printf("Choose the next move\n");
                gets(next_move);
                move(cre, str, next_move, s);
            }
        }
        else if(i == 2){
            printf("Choose the first character you want to move:\n");
            gets(s);
            printf("Choose the next move\n");
            gets(next_move);
            if(strcmp(s, "MS") != 0) {
                move_rule(cre, str, s, next_move);
                printf("Choose the next move\n");
                gets(next_move);
                move_rule(cre, str, s, next_move);
                printf("Choose the second character you want to move:\n");
                gets(s);
                printf("Choose the next move\n");
                gets(next_move);
                if(strcmp(s, "MS") != 0) {
                    move_rule(cre, str, s, next_move);
                }
                else{
                    move(cre, str, next_move, s);
                }
            }
            else{
                move(cre, str, next_move, s);
                printf("Choose the next move\n");
                gets(next_move);
                move(cre, str, next_move, s);
                printf("Choose the second character you want to move:\n");
                gets(s);
                printf("Choose the next move\n");
                gets(next_move);
                move_rule(cre, str, s, next_move);
            }
        }
        else if(i == 3){
            printf("Choose the first character you want to move:\n");
            gets(s);
            printf("Choose the next move\n");
            gets(next_move);
            if(strcmp(s, "MS") != 0) {
                move_rule(cre, str, s, next_move);
                printf("Choose the second character you want to move:\n");
                gets(s);
                printf("Choose the next move\n");
                gets(next_move);
                if(strcmp(s, "MS") != 0) {
                    move_rule(cre, str, s, next_move);
                    printf("Choose the third character you want to move:\n");
                    gets(s);
                    printf("Choose the next move\n");
                    gets(next_move);
                    if(strcmp(s, "MS") != 0) {
                        move_rule(cre, str, s, next_move);
                    }
                    else{
                        move(cre, str, next_move, s);
                    }
                }
            }
            else{
                move(cre, str, next_move, s);
                printf("Choose the second character you want to move:\n");
                gets(s);
                printf("Choose the next move\n");
                gets(next_move);
                move_rule(cre, str, s, next_move);
                printf("Choose the third character you want to move:\n");
                gets(s);
                printf("Choose the next move\n");
                gets(next_move);
                move_rule(cre, str, s, next_move);
            }
        }
    }
    else if(strcmp(c, "JW") == 0){
        printf("Choose the direction that JW light will lighten:\n");
        printf("UP - DOWN - UP RIGHT - UP LEFT - DOWN RIGHT - DOWN LEFT\n");
        gets(next_move);
        search_character(str, &x3, &y3, "JW");
        for(j = 0, k = x3; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y3 + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y3 + 1; k != 2; k -= 4, i++);
        }
        if(strcmp(next_move, "UP") == 0){
            i--;
            while(cre[i][j].type != '1' && cre[i][j].type != '6' && cre[i][j].type != '7' && cre[i][j].type != '8'){
                cre[i][j].situation[0] = 'V';
                cre[i][j].situation[1] = 'I';
                cre[i][j].situation[2] = 'S';
                cre[i][j].situation[3] = 'I';
                cre[i][j].situation[4] = 'B';
                cre[i][j].situation[5] = 'L';
                cre[i][j].situation[6] = 'E';
                cre[i][j].situation[7] = '\0';
                i--;
            }
        }
        else if(strcmp(next_move, "DOWN") == 0) {
            i++;
            while (cre[i][j].type != '1' && cre[i][j].type != '6' && cre[i][j].type != '7' && cre[i][j].type != '8') {
                cre[i][j].situation[0] = 'V';
                cre[i][j].situation[1] = 'I';
                cre[i][j].situation[2] = 'S';
                cre[i][j].situation[3] = 'I';
                cre[i][j].situation[4] = 'B';
                cre[i][j].situation[5] = 'L';
                cre[i][j].situation[6] = 'E';
                cre[i][j].situation[7] = '\0';
                i++;
            }
        }
        else if(strcmp(next_move, "UP RIGHT") == 0) {
            if(j % 2 == 0) {
                j++;
                while (cre[i][j].type != '1' && cre[i][j].type != '6' && cre[i][j].type != '7' &&
                       cre[i][j].type != '8') {
                    cre[i][j].situation[0] = 'V';
                    cre[i][j].situation[1] = 'I';
                    cre[i][j].situation[2] = 'S';
                    cre[i][j].situation[3] = 'I';
                    cre[i][j].situation[4] = 'B';
                    cre[i][j].situation[5] = 'L';
                    cre[i][j].situation[6] = 'E';
                    cre[i][j].situation[7] = '\0';
                    j++;
                }
            }
            else{
                i--;
                j++;
                while (cre[i][j].type != '1' && cre[i][j].type != '6' && cre[i][j].type != '7' &&
                       cre[i][j].type != '8') {
                    cre[i][j].situation[0] = 'V';
                    cre[i][j].situation[1] = 'I';
                    cre[i][j].situation[2] = 'S';
                    cre[i][j].situation[3] = 'I';
                    cre[i][j].situation[4] = 'B';
                    cre[i][j].situation[5] = 'L';
                    cre[i][j].situation[6] = 'E';
                    cre[i][j].situation[7] = '\0';
                    i--;
                    j++;
                }
            }
        }
        else if(strcmp(next_move, "UP LEFT") == 0) {
            if(j % 2 == 0) {
                j--;
                while (cre[i][j].type != '1' && cre[i][j].type != '6' && cre[i][j].type != '7' &&
                       cre[i][j].type != '8') {
                    cre[i][j].situation[0] = 'V';
                    cre[i][j].situation[1] = 'I';
                    cre[i][j].situation[2] = 'S';
                    cre[i][j].situation[3] = 'I';
                    cre[i][j].situation[4] = 'B';
                    cre[i][j].situation[5] = 'L';
                    cre[i][j].situation[6] = 'E';
                    cre[i][j].situation[7] = '\0';
                    j--;
                }
            }
            else{
                i--;
                j--;
                while (cre[i][j].type != '1' && cre[i][j].type != '6' && cre[i][j].type != '7' &&
                       cre[i][j].type != '8') {
                    cre[i][j].situation[0] = 'V';
                    cre[i][j].situation[1] = 'I';
                    cre[i][j].situation[2] = 'S';
                    cre[i][j].situation[3] = 'I';
                    cre[i][j].situation[4] = 'B';
                    cre[i][j].situation[5] = 'L';
                    cre[i][j].situation[6] = 'E';
                    cre[i][j].situation[7] = '\0';
                    i--;
                    j--;
                }
            }
        }
        else if(strcmp(next_move, "DOWN RIGHT") == 0) {
            if(j % 2 == 0) {
                i++;
                j++;
                while (cre[i][j].type != '1' && cre[i][j].type != '6' && cre[i][j].type != '7' &&
                       cre[i][j].type != '8') {
                    cre[i][j].situation[0] = 'V';
                    cre[i][j].situation[1] = 'I';
                    cre[i][j].situation[2] = 'S';
                    cre[i][j].situation[3] = 'I';
                    cre[i][j].situation[4] = 'B';
                    cre[i][j].situation[5] = 'L';
                    cre[i][j].situation[6] = 'E';
                    cre[i][j].situation[7] = '\0';
                    i++;
                    j++;
                }
            }
            else{
                j++;
                while (cre[i][j].type != '1' && cre[i][j].type != '6' && cre[i][j].type != '7' &&
                       cre[i][j].type != '8') {
                    cre[i][j].situation[0] = 'V';
                    cre[i][j].situation[1] = 'I';
                    cre[i][j].situation[2] = 'S';
                    cre[i][j].situation[3] = 'I';
                    cre[i][j].situation[4] = 'B';
                    cre[i][j].situation[5] = 'L';
                    cre[i][j].situation[6] = 'E';
                    cre[i][j].situation[7] = '\0';
                    j++;
                }
            }
        }
        else if(strcmp(next_move, "DOWN LEFT") == 0) {
            if(j % 2 == 0) {
                i++;
                j--;
                while (cre[i][j].type != '1' && cre[i][j].type != '6' && cre[i][j].type != '7' &&
                       cre[i][j].type != '8') {
                    cre[i][j].situation[0] = 'V';
                    cre[i][j].situation[1] = 'I';
                    cre[i][j].situation[2] = 'S';
                    cre[i][j].situation[3] = 'I';
                    cre[i][j].situation[4] = 'B';
                    cre[i][j].situation[5] = 'L';
                    cre[i][j].situation[6] = 'E';
                    cre[i][j].situation[7] = '\0';
                    i++;
                    j--;
                }
            }
            else{
                j--;
                while (cre[i][j].type != '1' && cre[i][j].type != '6' && cre[i][j].type != '7' &&
                       cre[i][j].type != '8') {
                    cre[i][j].situation[0] = 'V';
                    cre[i][j].situation[1] = 'I';
                    cre[i][j].situation[2] = 'S';
                    cre[i][j].situation[3] = 'I';
                    cre[i][j].situation[4] = 'B';
                    cre[i][j].situation[5] = 'L';
                    cre[i][j].situation[6] = 'E';
                    cre[i][j].situation[7] = '\0';
                    j--;
                }
            }
        }
    }
}

int card_situation2(struct map_in cre[9][13], char str[39][88], char c[4]){
    int x, y, i, j, k;
    search_character(str, &x, &y, c);
    for(j = 0, k = x; k != 10; k -= 6, j++);
    if(j % 2 == 0){
        for(i = 0, k = y + 1; k != 4; k -= 4, i++);
    }
    else{
        for(i = 0, k = y + 1; k != 2; k -= 4, i++);
    }
    if(strcmp(cre[i][j].situation, "VISIBLE") == 0){
        search_character(str, &x, &y, "IL");
        for(j = 0, k = x; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y + 1; k != 2; k -= 4, i++);
        }
        if(strcmp(cre[i][j].situation, "INVISIBLE") == 0 && cre[i][j].name[2] == '\0') {
            str[y][x] = str[y][x + 1];
            str[y][x + 1] = '+';
            cre[i][j].name[2] = '+';
            cre[i][j].name[3] = '\0';
        }
        search_character(str, &x, &y, "MS");
        for(j = 0, k = x; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y + 1; k != 2; k -= 4, i++);
        }
        if(strcmp(cre[i][j].situation, "INVISIBLE") == 0 && cre[i][j].name[2] == '\0') {
            str[y][x] = str[y][x + 1];
            str[y][x + 1] = '+';
            cre[i][j].name[2] = '+';
            cre[i][j].name[3] = '\0';
        }
        search_character(str, &x, &y, "JB");
        for(j = 0, k = x; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y + 1; k != 2; k -= 4, i++);
        }
        if(strcmp(cre[i][j].situation, "INVISIBLE") == 0 && cre[i][j].name[2] == '\0') {
            str[y][x] = str[y][x + 1];
            str[y][x + 1] = '+';
            cre[i][j].name[2] = '+';
            cre[i][j].name[3] = '\0';
        }
        search_character(str, &x, &y, "JW");
        for(j = 0, k = x; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y + 1; k != 2; k -= 4, i++);
        }
        if(strcmp(cre[i][j].situation, "INVISIBLE") == 0 && cre[i][j].name[2] == '\0') {
            str[y][x] = str[y][x + 1];
            str[y][x + 1] = '+';
            cre[i][j].name[2] = '+';
            cre[i][j].name[3] = '\0';
        }
        search_character(str, &x, &y, "WG");
        for(j = 0, k = x; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y + 1; k != 2; k -= 4, i++);
        }
        if(strcmp(cre[i][j].situation, "INVISIBLE") == 0 && cre[i][j].name[2] == '\0') {
            str[y][x] = str[y][x + 1];
            str[y][x + 1] = '+';
            cre[i][j].name[2] = '+';
            cre[i][j].name[3] = '\0';
        }
        search_character(str, &x, &y, "SG");
        for(j = 0, k = x; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y + 1; k != 2; k -= 4, i++);
        }
        if(strcmp(cre[i][j].situation, "INVISIBLE") == 0 && cre[i][j].name[2] == '\0') {
            str[y][x] = str[y][x + 1];
            str[y][x + 1] = '+';
            cre[i][j].name[2] = '+';
            cre[i][j].name[3] = '\0';
        }
        search_character(str, &x, &y, "JS");
        for(j = 0, k = x; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y + 1; k != 2; k -= 4, i++);
        }
        if(strcmp(cre[i][j].situation, "INVISIBLE") == 0 && cre[i][j].name[2] == '\0') {
            str[y][x] = str[y][x + 1];
            str[y][x + 1] = '+';
            cre[i][j].name[2] = '+';
            cre[i][j].name[3] = '\0';
        }
        search_character(str, &x, &y, "SH");
        for(j = 0, k = x; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y + 1; k != 2; k -= 4, i++);
        }
        if(strcmp(cre[i][j].situation, "INVISIBLE") == 0 && cre[i][j].name[2] == '\0') {
            str[y][x] = str[y][x + 1];
            str[y][x + 1] = '+';
            cre[i][j].name[2] = '+';
            cre[i][j].name[3] = '\0';
        }
        return 0;
    }
    else if(strcmp(cre[i][j].situation, "INVISIBLE") == 0){
        search_character(str, &x, &y, "IL");
        for(j = 0, k = x; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y + 1; k != 2; k -= 4, i++);
        }
        if(strcmp(cre[i][j].situation, "VISIBLE") == 0 && cre[i][j].name[2] == '\0') {
            str[y][x] = str[y][x + 1];
            str[y][x + 1] = '+';
            cre[i][j].name[2] = '+';
            cre[i][j].name[3] = '\0';
        }
        search_character(str, &x, &y, "MS");
        for(j = 0, k = x; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y + 1; k != 2; k -= 4, i++);
        }
        if(strcmp(cre[i][j].situation, "VISIBLE") == 0 && cre[i][j].name[2] == '\0') {
            str[y][x] = str[y][x + 1];
            str[y][x + 1] = '+';
            cre[i][j].name[2] = '+';
            cre[i][j].name[3] = '\0';
        }
        search_character(str, &x, &y, "JB");
        for(j = 0, k = x; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y + 1; k != 2; k -= 4, i++);
        }
        if(strcmp(cre[i][j].situation, "VISIBLE") == 0 && cre[i][j].name[2] == '\0') {
            str[y][x] = str[y][x + 1];
            str[y][x + 1] = '+';
            cre[i][j].name[2] = '+';
            cre[i][j].name[3] = '\0';
        }
        search_character(str, &x, &y, "JW");
        for(j = 0, k = x; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y + 1; k != 2; k -= 4, i++);
        }
        if(strcmp(cre[i][j].situation, "VISIBLE") == 0 && cre[i][j].name[2] == '\0') {
            str[y][x] = str[y][x + 1];
            str[y][x + 1] = '+';
            cre[i][j].name[2] = '+';
            cre[i][j].name[3] = '\0';
        }
        search_character(str, &x, &y, "WG");
        for(j = 0, k = x; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y + 1; k != 2; k -= 4, i++);
        }
        if(strcmp(cre[i][j].situation, "VISIBLE") == 0 && cre[i][j].name[2] == '\0') {
            str[y][x] = str[y][x + 1];
            str[y][x + 1] = '+';
            cre[i][j].name[2] = '+';
            cre[i][j].name[3] = '\0';
        }
        search_character(str, &x, &y, "SG");
        for(j = 0, k = x; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y + 1; k != 2; k -= 4, i++);
        }
        if(strcmp(cre[i][j].situation, "VISIBLE") == 0 && cre[i][j].name[2] == '\0') {
            str[y][x] = str[y][x + 1];
            str[y][x + 1] = '+';
            cre[i][j].name[2] = '+';
            cre[i][j].name[3] = '\0';
        }
        search_character(str, &x, &y, "JS");
        for(j = 0, k = x; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y + 1; k != 2; k -= 4, i++);
        }
        if(strcmp(cre[i][j].situation, "VISIBLE") == 0 && cre[i][j].name[2] == '\0') {
            str[y][x] = str[y][x + 1];
            str[y][x + 1] = '+';
            cre[i][j].name[2] = '+';
            cre[i][j].name[3] = '\0';
        }
        search_character(str, &x, &y, "SH");
        for(j = 0, k = x; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y + 1; k != 2; k -= 4, i++);
        }
        if(strcmp(cre[i][j].situation, "VISIBLE") == 0 && cre[i][j].name[2] == '\0' ) {
            str[y][x] = str[y][x + 1];
            str[y][x + 1] = '+';
            cre[i][j].name[2] = '+';
            cre[i][j].name[3] = '\0';
        }
        return 1;
    }
}

void game_exe(struct map_in cre[9][13], char str[39][88], char c[4], char next_move[11]){
    int i, x, y, j, k, w;
    char s[1];
    if(strcmp(c, "SH") == 0){
        printf("How many moves should SH do?\n");
        scanf("%d", &i);
        gets(s);
        for(;i > 0; i--){
            w = well_move(cre, str, c);
            if(w == 0) {
                printf("Choose the next move\n");
                gets(next_move);
                move_rule(cre, str, c, next_move);
                print_map(str);
            }
        }
        character_ability(cre, str, c);
    }
    else if(strcmp(c, "IL") == 0){
        printf("How many moves should IL do?\n");
        scanf("%d", &i);
        gets(s);
        for(;i > 0; i--){
            w = well_move(cre, str, c);
            if(w == 0) {
                printf("Choose the next move\n");
                gets(next_move);
                move_rule(cre, str, c, next_move);
                print_map(str);
            }
        }
        character_ability(cre, str, c);
        print_map(str);
    }
    else if(strcmp(c, "MS") == 0){
        printf("How many moves should MS do?\n");
        scanf("%d", &i);
        gets(s);
        for(;i > 0; i--) {
            w = well_move(cre, str, c);
            if(w == 0) {
                printf("Choose the next move\n");
                gets(next_move);
                move(cre, str, next_move, c);
                if (i != 1) {
                    print_map(str);
                }
            }
        }
        search_character(str, &x, &y, c);
        for (j = 0, k = x; k != 10; k -= 6, j++);
        if (j % 2 == 0) {
            for (i = 0, k = y + 1; k != 4; k -= 4, i++);
        }
        else {
            for (i = 0, k = y + 1; k != 2; k -= 4, i++);
        }
        if(cre[i][j].type == '1' || cre[i][j].type == '2' || cre[i][j].type == '3' || cre[i][j].type == '8') {
            if (j % 2 == 0) {
                if (cre[i - 1][j].type == '0' || cre[i - 1][j].type == '4' || cre[i - 1][j].type == '5') {
                    move(cre, str, "UP", "MS");
                }
                else if (cre[i + 1][j].type == '0' || cre[i + 1][j].type == '4' || cre[i + 1][j].type == '5') {
                    move(cre, str, "DOWN", c);
                }
                else if (cre[i + 1][j + 1].type == '0' || cre[i + 1][j + 1].type == '4' || cre[i + 1][j + 1].type == '5') {
                    move(cre, str, "DOWN RIGHT", c);
                }
                else if (cre[i][j + 1].type == '0' || cre[i][j + 1].type == '4' || cre[i][j + 1].type == '5') {
                    move(cre, str, "UP RIGHT", c);
                }
                else if (cre[i + 1][j - 1].type == '0' || cre[i + 1][j - 1].type == '4' ||
                         cre[i + 1][j - 1].type == '5') {
                    move(cre, str, "DOWN LEFT", c);
                }
                else if (cre[i][j - 1].type == '0' || cre[i][j - 1].type == '4' || cre[i][j - 1].type == '5') {
                    move(cre, str, "UP LEFT", c);
                }
            }
            else {
                if (cre[i - 1][j].type == '0' || cre[i - 1][j].type == '4' || cre[i - 1][j].type == '5') {
                    move(cre, str, "UP", c);
                }
                else if (cre[i + 1][j].type == '0' || cre[i + 1][j].type == '4' || cre[i + 1][j].type == '5') {
                    move(cre, str, "DOWN", c);
                }
                else if (cre[i][j + 1].type == '0' || cre[i][j + 1].type == '4' || cre[i][j + 1].type == '5') {
                    move(cre, str, "DOWN RIGHT", c);
                }
                else if (cre[i - 1][j + 1].type == '0' || cre[i - 1][j + 1].type == '4' ||
                         cre[i - 1][j + 1].type == '5') {
                    move(cre, str, "UP RIGHT", c);
                }
                else if (cre[i][j - 1].type == '0' || cre[i][j - 1].type == '4' || cre[i][j - 1].type == '5') {
                    move(cre, str, "DOWN LEFT", c);
                }
                else if (cre[i - 1][j - 1].type == '0' || cre[i - 1][j - 1].type == '4' ||
                         cre[i - 1][j - 1].type == '5') {
                    move(cre, str, "UP LEFT", c);
                }
            }
        }
        print_map(str);
    }
    else if(strcmp(c, "JB") == 0){
        printf("If you want to use JB ability first and then move him press 1 and on the other hand press 2.\n");
        do{
            scanf("%d", &i);
        }
        while(i != 1 && i != 2);
        if(i == 1){
            character_ability(cre, str, c);
            print_map(str);
            printf("How many moves should JB do?\n");
            scanf("%d", &i);
            gets(s);
            for(;i > 0; i--){
                w = well_move(cre, str, c);
                if(w == 0) {
                    printf("Choose the next move\n");
                    gets(next_move);
                    move_rule(cre, str, c, next_move);
                    print_map(str);
                }
            }
        }
        else{
            printf("How many moves should JB do?\n");
            scanf("%d", &i);
            gets(s);
            for(;i > 0; i--){
                w = well_move(cre, str, c);
                if(w == 0) {
                    printf("Choose the next move\n");
                    gets(next_move);
                    move_rule(cre, str, c, next_move);
                    print_map(str);
                }
            }
            character_ability(cre, str, c);
            print_map(str);
        }
    }
    else if(strcmp(c, "JW") == 0){
        printf("How many moves should JW do?\n");
        scanf("%d", &i);
        gets(s);
        for(;i > 0; i--){
            w = well_move(cre, str, c);
            if(w == 0) {
                printf("Choose the next move\n");
                gets(next_move);
                move_rule(cre, str, c, next_move);
                print_map(str);
            }
        }
        character_ability(cre, str, c);
        print_map(str);
    }
    else if(strcmp(c, "WG") == 0){
        printf("If you want to use the ability press 1 and if you want to move the character press 2.\n");
        do{
            scanf("%d", &i);
        }
        while(i != 1 && i != 2);
        if(i == 1){
            character_ability(cre, str, c);
            print_map(str);
        }
        else{
            printf("How many moves should WG do?\n");
            scanf("%d", &i);
            gets(s);
            for(;i > 0; i--){
                w = well_move(cre, str, c);
                if(w == 0) {
                    printf("Choose the next move\n");
                    gets(next_move);
                    move_rule(cre, str, c, next_move);
                    print_map(str);
                }
            }
        }
    }
    else if(strcmp(c, "SG") == 0){
        printf("If you want to use SG ability first and then move him press 1 and on the other hand press 2.\n");
        do{
            scanf("%d", &i);
        }
        while(i != 1 && i != 2);
        if(i == 1){
            character_ability(cre, str, c);
            print_map(str);
            printf("How many moves should SG do?\n");
            scanf("%d", &i);
            gets(s);
            for(;i > 0; i--){
                w = well_move(cre, str, c);
                if(w == 0) {
                    printf("Choose the next move\n");
                    gets(next_move);
                    move_rule(cre, str, c, next_move);
                    print_map(str);
                }
            }
        }
        else{
            printf("How many moves should SG do?\n");
            scanf("%d", &i);
            gets(s);
            for(;i > 0; i--){
                w = well_move(cre, str, c);
                if(w == 0) {
                    printf("Choose the next move\n");
                    gets(next_move);
                    move_rule(cre, str, c, next_move);
                    print_map(str);
                }
            }
            character_ability(cre, str, c);
            print_map(str);
        }
    }
    else if(strcmp(c, "JS") == 0){
        printf("If you want to use JS ability first and then move him press 1 and on the other hand press 2.\n");
        do{
            scanf("%d", &i);
        }
        while(i != 1 && i != 2);
        if(i == 1){
            character_ability(cre, str, c);
            print_map(str);
            printf("How many moves should JS do?\n");
            scanf("%d", &i);
            gets(s);
            for(;i > 0; i--){
                w = well_move(cre, str, c);
                if(w == 0) {
                    printf("Choose the next move\n");
                    gets(next_move);
                    move_rule(cre, str, c, next_move);
                    print_map(str);
                }
            }
        }
        else{
            printf("How many moves should JS do?\n");
            scanf("%d", &i);
            gets(s);
            for(;i > 0; i--){
                w = well_move(cre, str, c);
                if(w == 0) {
                    printf("Choose the next move\n");
                    gets(next_move);
                    move_rule(cre, str, c, next_move);
                    print_map(str);
                }
            }
            character_ability(cre, str, c);
            print_map(str);
        }
    }
}

void jack_win(struct map_in cre[9][13], char str[39][88], int v, char MRJ[4]){
    int x, y, i, j, k;
    search_character(str, &x, &y, MRJ);
    for(j = 0, k = x; k != 10; k -= 6, j++);
    if(j % 2 == 0){
        for(i = 0, k = y + 1; k != 4; k -= 4, i++);
    }
    else{
        for(i = 0, k = y + 1; k != 2; k -= 4, i++);
    }
    if(v == 1){
        if(cre[i][j].type == '7'){
            printf("MR.JACK WIN!!!\n");
            exit(0);
        }
    }
}

void detective_win(struct map_in cre[9][13], char str[39][88], char c[4], char s[4], char MRJ[4], int a){
    int x, y, i, j, k;
    if(a == 1) {
        printf("Choose the character you want to arrest!\n");
        scanf("%s", s);
        search_character(str, &x, &y, c);
        for(j = 0, k = x; k != 10; k -= 6, j++);
        if(j % 2 == 0){
            for(i = 0, k = y + 1; k != 4; k -= 4, i++);
        }
        else{
            for(i = 0, k = y + 1; k != 2; k -= 4, i++);
        }
        if(j % 2 == 0){
            if(strcmp(cre[i][j + 1].name, s) == 0){
                printf("%s arrested by detective!\n", s);
                if(strcmp(s, MRJ) == 0){
                    printf("Detective WIN!!!\n");
                    exit(0);
                }
                else{
                    printf("MR.JACK WIN!!!\n");
                    exit(0);
                }
            }
            else if(strcmp(cre[i + 1][j + 1].name, s) == 0){
                printf("%s arrested by detective!\n", s);
                if(strcmp(s, MRJ) == 0){
                    printf("Detective WIN!!!\n");
                    exit(0);
                }
                else{
                    printf("MR.JACK WIN!!!\n");
                    exit(0);
                }
            }
            else if(strcmp(cre[i + 1][j].name, s) == 0){
                printf("%s arrested by detective!\n", s);
                if(strcmp(s, MRJ) == 0){
                    printf("Detective WIN!!!\n");
                    exit(0);
                }
                else{
                    printf("MR.JACK WIN!!!\n");
                    exit(0);
                }
            }
            else if(strcmp(cre[i - 1][j].name, s) == 0){
                printf("%s arrested by detective!\n", s);
                if(strcmp(s, MRJ) == 0){
                    printf("Detective WIN!!!\n");
                    exit(0);
                }
                else{
                    printf("MR.JACK WIN!!!\n");
                    exit(0);
                }
            }
            else if(strcmp(cre[i][j - 1].name, s) == 0){
                printf("%s arrested by detective!\n", s);
                if(strcmp(s, MRJ) == 0){
                    printf("Detective WIN!!!\n");
                    exit(0);
                }
                else{
                    printf("MR.JACK WIN!!!\n");
                    exit(0);
                }
            }
            else if(strcmp(cre[i + 1][j - 1].name, s) == 0){
                printf("%s arrested by detective!\n", s);
                if(strcmp(s, MRJ) == 0){
                    printf("Detective WIN!!!\n");
                    exit(0);
                }
                else{
                    printf("MR.JACK WIN!!!\n");
                    exit(0);
                }
            }
            else{
                printf("%s ran away this round!!\n", s);
            }
        }
        else{
            if(strcmp(cre[i][j + 1].name, s) == 0){
                printf("%s arrested by detective!\n", s);
                if(strcmp(s, MRJ) == 0){
                    printf("Detective WIN!!!\n");
                    exit(0);
                }
                else{
                    printf("MR.JACK WIN!!!\n");
                    exit(0);
                }
            }
            else if(strcmp(cre[i - 1][j + 1].name, s) == 0){
                printf("%s arrested by detective!\n", s);
                if(strcmp(s, MRJ) == 0){
                    printf("Detective WIN!!!\n");
                    exit(0);
                }
                else{
                    printf("MR.JACK WIN!!!\n");
                    exit(0);
                }
            }
            else if(strcmp(cre[i + 1][j].name, s) == 0){
                printf("%s arrested by detective!\n", s);
                if(strcmp(s, MRJ) == 0){
                    printf("Detective WIN!!!\n");
                    exit(0);
                }
                else{
                    printf("MR.JACK WIN!!!\n");
                    exit(0);
                }
            }
            else if(strcmp(cre[i - 1][j].name, s) == 0){
                printf("%s arrested by detective!\n", s);
                if(strcmp(s, MRJ) == 0){
                    printf("Detective WIN!!!\n");
                    exit(0);
                }
                else{
                    printf("MR.JACK WIN!!!\n");
                    exit(0);
                }
            }
            else if(strcmp(cre[i][j - 1].name, s) == 0){
                printf("%s arrested by detective!\n", s);
                if(strcmp(s, MRJ) == 0){
                    printf("Detective WIN!!!\n");
                    exit(0);
                }
                else{
                    printf("MR.JACK WIN!!!\n");
                    exit(0);
                }
            }
            else if(strcmp(cre[i - 1][j - 1].name, s) == 0){
                printf("%s arrested by detective!\n", s);
                if(strcmp(s, MRJ) == 0){
                    printf("Detective WIN!!!\n");
                    exit(0);
                }
                else{
                    printf("MR.JACK WIN!!!\n");
                    exit(0);
                }
            }
            else{
                printf("%s ran away this round!!\n", s);
            }
        }
    }
}

int main() {
    int x, y, i, j, n, k, a, round, v = 1;
    char str[39][88], card[8][20], c[4], sus[4], MRJ[4], next_move[11], s[1], m[9][61];
    char *ps = (char *) calloc(20, sizeof(char));
    FILE *fp;
    struct node * list = create_node("SH: 1) Move 1 to 3 houses. 2) After his move he will specify one of the innocent characters.");
    list->num = 1;
    struct node * list1;
    struct node * list2;
    struct map_in cre[9][13];
    system("color 1");
    menu(m);
    scanf("%d", &k);
    if(k == 1) {
        create_map_character(cre, character, str);
        str[38][16] = str[38][28] = str[38][40] = str[38][52] = str[38][64] = str[38][76] = ' ';
        print_map(str);
        for(i = 0; i < 9; i++){
            for(j = 0; j < 13; j++){
                cre[i][j].situation[0] = 'I';
                cre[i][j].situation[1] = 'N';
                cre[i][j].situation[2] = 'V';
                cre[i][j].situation[3] = 'I';
                cre[i][j].situation[4] = 'S';
                cre[i][j].situation[5] = 'I';
                cre[i][j].situation[6] = 'B';
                cre[i][j].situation[7] = 'L';
                cre[i][j].situation[8] = 'E';
                cre[i][j].situation[9] = '\0';
            }
        }
        innocent_card(card);
        printf("MR.JACK's identity will be revealed now\nDetective please close your eye:)\n");
        printf("MR.JACK, press 1 to see your character\n");
        scanf("%d", &k);
        ps = determine_MRJack(card);
        printf("MR.JACK is ");
        for(i = 0; i < 20; i++){
            printf("%c", ps[i]);
        }
        printf("\nMR.JACK, if you saw your character press 1\n");
        MRJ[0] = ps[0];
        MRJ[2] = MRJ[3] = '\0';
        for(i = 1; i < 20; i++){
            if(ps[i] == ' '){
                MRJ[1] = ps[i + 1];
            }
        }
        if(ps[0] == 'S' && ps[1] == 'I'){
            MRJ[0] = 'W';
            MRJ[1] = 'G';
        }
        scanf("%d", &k);
        system("cls");
        print_map(str);
        printf("Please wait for a moment!\n");
        card_creation(list);
        for (i = 4, round = 1; i > 0; i--) {
            printf("If you want to save the game press 1 and if not press 2\n");
            scanf("%d", &a);
            if(a == 1){
                fp = fopen("C:\\Users\\LENOVO\\CLionProject\\MR.JACK.bin", "wb");
                if(fp == NULL){
                    printf("Cannot create file\n");
                    return -1;
                }
                fwrite(str, sizeof(char), 39 * 88, fp);
                fwrite(cre, sizeof(cre[0][0]) , 13 * 9, fp);
                fwrite(&round, sizeof(int), 1, fp);
                fwrite(&i, sizeof(int), 1, fp);
                fwrite(list, sizeof(struct node), 1, fp);
                fwrite(list->next, sizeof(struct node), 1, fp);
                fwrite(list->next->next, sizeof(struct node), 1, fp);
                fwrite(list->next->next->next, sizeof(struct node), 1, fp);
                fwrite(list->next->next->next->next, sizeof(struct node), 1, fp);
                fwrite(list->next->next->next->next->next, sizeof(struct node), 1, fp);
                fwrite(list->next->next->next->next->next->next, sizeof(struct node), 1, fp);
                fwrite(list->next->next->next->next->next->next->next, sizeof(struct node), 1, fp);
                fwrite(MRJ, sizeof(char), 4, fp);
                fwrite(&v, sizeof(int), 1, fp);
                fclose(fp);
                printf("Game is saved.\n");
            }
            first_4_card(list, &list1);
            second_4_card(list, list1, &list2);
            print_list(list1);
            printf("MR.JACK's turn!\n");
            printf("Choose the character you want to play with:\n");
            scanf("%s", c);
            game_exe(cre, str, c, next_move);
            jack_win(cre, str, v, MRJ);
            printf("Detective's turn!\n");
            printf("Choose the character you want to play with:\n");
            scanf("%s", c);
            game_exe(cre, str, c, next_move);
            printf("If you want to arrest one of the characters press 1 and if not press 2\n");
            scanf("%d", &a);
            detective_win(cre, str, c, sus, MRJ, a);
            printf("Detective's turn!\n");
            printf("Choose the character you want to play with:\n");
            scanf("%s", c);
            game_exe(cre, str, c, next_move);
            printf("If you want to arrest one of the characters press 1 and if not press 2\n");
            scanf("%d", &a);
            detective_win(cre, str, c, sus, MRJ, a);
            printf("MR.JACK's turn!\n");
            printf("Choose the character you want to play with:\n");
            scanf("%s", c);
            game_exe(cre, str, c, next_move);
            jack_win(cre, str, v, MRJ);
            printf("If you want to save the game press 1 and if not press 2\n");
            scanf("%d", &a);
            if(a == 1){
                fp = fopen("C:\\Users\\LENOVO\\CLionProject\\MR.JACK.bin", "wb");
                if(fp == NULL){
                    printf("Cannot create file\n");
                    return -1;
                }
                fwrite(str, sizeof(char), 39 * 88, fp);
                fwrite(cre, sizeof(cre[0][0]) , 13 * 9, fp);
                fwrite(&round, sizeof(int), 1, fp);
                fwrite(&i, sizeof(int), 1, fp);
                fwrite(list, sizeof(struct node), 1, fp);
                fwrite(list->next, sizeof(struct node), 1, fp);
                fwrite(list->next->next, sizeof(struct node), 1, fp);
                fwrite(list->next->next->next, sizeof(struct node), 1, fp);
                fwrite(list->next->next->next->next, sizeof(struct node), 1, fp);
                fwrite(list->next->next->next->next->next, sizeof(struct node), 1, fp);
                fwrite(list->next->next->next->next->next->next, sizeof(struct node), 1, fp);
                fwrite(list->next->next->next->next->next->next->next, sizeof(struct node), 1, fp);
                fwrite(MRJ, sizeof(char), 4, fp);
                fwrite(&v, sizeof(int), 1, fp);
                fclose(fp);
            }
            determine_situation(cre);
            v = card_situation2(cre, str, MRJ);
            printf("End of round %d\n", round);
            round++;
            print_list(list2);
            printf("Detective's turn!\n");
            printf("Choose the character you want to play with:\n");
            scanf("%s", c);
            game_exe(cre, str, c, next_move);
            printf("If you want to arrest one of the characters press 1 and if not press 2\n");
            scanf("%d", &a);
            detective_win(cre, str, c, sus, MRJ, a);
            printf("MR.JACK's turn!\n");
            printf("Choose the character you want to play with:\n");
            scanf("%s", c);
            game_exe(cre, str, c, next_move);
            jack_win(cre, str, v, MRJ);
            printf("MR.JACK's turn!\n");
            printf("Choose the character you want to play with:\n");
            scanf("%s", c);
            game_exe(cre, str, c, next_move);
            jack_win(cre, str, v, MRJ);
            printf("Detective's turn!\n");
            printf("Choose the character you want to play with:\n");
            scanf("%s", c);
            game_exe(cre, str, c, next_move);
            printf("If you want to arrest one of the characters press 1 and if not press 2\n");
            scanf("%d", &a);
            detective_win(cre, str, c, sus, MRJ, a);
            determine_situation(cre);
            v = card_situation2(cre, str, MRJ);
            printf("End of round %d\n", round);
            round++;
        }
        printf("MR.JACK WIN!!!\n");
        return 0;
    }
    else if(k == 2){
        struct node * list;
        struct node * list1;
        struct node * list2;
        fopen("C:\\Users\\LENOVO\\CLionProject\\MR.JACK.bin", "rb");
        if(fp == NULL){
            printf("Cannot create file\n");
            return -1;
        }
        fread(str, sizeof(char), 39 * 88, fp);
        fread(cre, sizeof(cre[0][0]) , 13 * 9, fp);
        fread(&round, sizeof(int), 1, fp);
        fread(&i, sizeof(int), 1, fp);
        fread(list, sizeof(struct node), 1, fp);
        fread(list->next, sizeof(struct node), 1, fp);
        fread(list->next->next, sizeof(struct node), 1, fp);
        fread(list->next->next->next, sizeof(struct node), 1, fp);
        fread(list->next->next->next->next, sizeof(struct node), 1, fp);
        fread(list->next->next->next->next->next, sizeof(struct node), 1, fp);
        fread(list->next->next->next->next->next->next, sizeof(struct node), 1, fp);
        fread(list->next->next->next->next->next->next->next, sizeof(struct node), 1, fp);
        fread(MRJ, sizeof(char), 4, fp);
        fread(&v, sizeof(int), 1, fp);
        fclose(fp);
    }
}