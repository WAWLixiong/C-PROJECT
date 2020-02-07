// zippol.c
/*
int zippo[4][2];
zippo          --> zippo地址
zippo[0]       --> zippo地址
&zippo[0]      --> zippo地址
&zippo[0][0]   --> zippo地址
*zippo         --> zippo[0]得值，该值是一个地址, 也就是zippo的地址
*zippo[0]      --> zippo[0][0]的值
**zippo        --> zippo[0][0]的值
*&zippo[0][0]  --> zippo[0][0]的值
*/
#include <stdio.h>

int main(void){
    int zippo[4][2] = {
        {2, 4},
        {6, 8},
        {1, 3},
        {5, 7},
    };
    printf("zippo = %p\n", zippo);
    printf("zippo[0] = %p\n", zippo[0]);
    printf("&zippo[0] = %p\n", &zippo[0]);
    printf("*zippo = %p\n", *zippo);
    printf("*zippo[0] = %d\n", *zippo[0]);
    printf("*&zippo[0][0] = %d\n", *&zippo[0][0]);
    printf("**zippo = %d\n", **zippo);
    getchar();
    return 0;
}