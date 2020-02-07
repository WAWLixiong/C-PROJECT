// cypherls.c
#include <stdio.h>
#include <ctype.h>
#define SPACE ' '
int main(void){
    char ch;

    while((ch= getchar()) != '\n'){// C語言中這種寫法很常見
        if (isalpha(ch)){
            putchar(ch + 1);
        }
        else {
            putchar(ch);
        }
    }
    putchar(ch);
    getchar();
}