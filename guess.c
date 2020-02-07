// guess.c
#include <stdio.h>
int main(void){
    int test[4] = {1, 2, 3, 4};
    printf("%p\n", &test);
    printf("%p\n", &test[0]);
    if(test == &test[0]){
        printf("1\n");
    }
    if (test == &test){
        putchar('2');
    }
    getchar();
}