// ptr_ops.c
#include <stdio.h>
int main(void){
    int urn[5] = {100, 200, 300, 400, 500};
    int *ptr1, *ptr2, *ptr3;

    ptr1 = urn;
    ptr2 = &urn[2];

    printf("pointer value, dereferenced pointer, pointer address:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    // 指针加法
    ptr3 = ptr1 + 4;
    printf("\nadding an int to a pointer:\n");
    printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));

    // 递增指针
    ptr1++;
    printf("\nvalues after ptr1++:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    // 递减指针
    ptr2--;
    printf("\nvalues after --ptr2\n");
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

    --ptr1;
    ++ptr2;
    printf("\nPointers rest to original values:\n");
    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);

    //一个指针减去另一个指针
    printf("\nsubtracting one pointer from another:\n");
    // printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1); // 不支持td使用d或者ld
    printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %ld\n", ptr2, ptr1, ptr2 - ptr1);

    // 一个指针减去一个整数
    printf("\nsubtracting an int from a poointer:\n");
    printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);

    getchar();
    return 0;
}