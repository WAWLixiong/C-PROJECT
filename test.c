#include <stdio.h>
int main(void){
    char words[10][10];
    fgets(words[0], 10, stdin);
    printf("%s", words[0]);
    getchar();
    return 0;
}