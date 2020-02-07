// pow.c
#include <stdio.h>
int main(void){
    int ret, inp, pow;
    int index;

    printf("Please input a value and a pwd!\n");
    scanf("%d%d", &inp, &pow); // scanf后边需要加一个getchar，否则程序还是会退出，了解下原理
    getchar();
    ret = inp;
    for (index = 1; index < pow; index++){
        ret *= inp;
    }
    printf("ret is %d", ret);
    getchar();
    return 0;
}