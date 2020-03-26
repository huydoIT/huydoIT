#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NUM_LETTERS 26
#define NUM_DIGITS  10
#define NUM_CHARS   (NUM_LETTERS + NUM_DIGITS)
#define SIZE        15

void randStr(char newabc[8], int number)
{
    for (int i = 0; i < number; ++i) {
        newabc[i] = char((rand() % 26) + 65);
    }
}

int main() {
    int a = 1500;
    while (true)
    {
        char inp[100] = { 0 };
        char rs[50] = { 0 };
        char money[50] = { 0 };
        char name[2] = { 0 };
        
        int n = 0;
        printf("Input: ");
        scanf("%s", &inp);
        if (inp == "END") {
            break;
        }
        strncpy(name, inp, 1);
        //strncpy(money, inp + 2, strlen(inp) - 2);
        
        strcpy(rs, "W");
        strcat(rs, name);
        //strcat(rs, money);
        //printf("TEST = %s\n", rs);
        if (inp[1] == 'I') {
            strcat(rs, inp + 2);
        }
        if (inp[1] == 'O') {
            n = atoi(money)*(-1);
            //strcat(rs, itoa(n, money, 10));
            strcat(rs, "-");
            strcat(rs, inp + 2);
        }
        //printf("Str: %s\n", rs);
        //strncpy(rs, inp + 2, strlen(inp) - 2);
        //printf("money = %d\n", atoi(rs + 2));
        a += atoi(rs + 2);

        char insert[5] = "abc";
        char des1[100] = { 0 };
        char des2[100] = { 0 };
        char des3[100] = { 0 };
        //type 1
        strncpy(des1, rs, 2);
        strcat(des1, insert);
        strcat(des1, rs + 2);

        //type 2
        strncpy(des2, rs, 4);
        strcat(des2, insert);
        strcat(des2, rs + 4);

        //type 3
        strcpy(des3, rs);
        strcat(des3, insert);
        des3[strlen(des3)] = '\0';

        //printf("Result: %s || a = %d\n", rs, a);
        printf("\ntype 1 = %s\n\n", des1);
        printf("type 2 = %s\n\n", des2);
        printf("type 3 = %s\n\n", des3);
        printf("========================\n");
    }
    printf("End!\n");
    return 0;
}