// append.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE *source, FILE *dest);
char *s_gets(char *st, int n);

int main(void){
    FILE *fa, *fs; // fa 指向目标文件，fs 指向源文件
    int files = 0; // 附加的文件数量
    char file_app[SLEN]; // 目标文件名
    char file_src[SLEN]; // 源文件名
    int ch;

    puts("Enter name of destination file:");
    s_gets(file_app, SLEN);
    if ((fa = fopen(file_app, "a+")) == NULL){
        fprintf(stderr, "Can't open %s \n", file_app);
        exit(EXIT_FAILURE);
    }
    if(setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0){
        fputs("Can't create output buffer\n", stderr);
        exit(EXIT_FAILURE);
    }
    puts("Enter name of first source file (empty line to quit):");
    while(s_gets(file_src, SLEN) && file_src[0] != '\0'){
        if (strcmp(file_src, file_app) == 0)
            fputs("Can't append file to itself\n", stderr);
        else{
            if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0){
                {fputs("Can't create input buffer\n", stderr)};
                continue;
            }
        }
    }
}