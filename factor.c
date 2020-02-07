//factor.c
#include <stdio.h>
long fact(int n);
long rfact(int n); // 没有实现也不会报错
int main(){
    int n;
    long ret;
    printf("Please input a integer:\n");
    while((scanf("%d", &n)) == 1){
        ret = fact(n);
        printf("%d's jiecheng is %ld\n", n, ret);
        printf("Please input a another integer:\n");
    }
    return 0;
}

long fact(int n){
    int i;
    long ret = n; // 既然这样了就直接用n来就行，最后通过函数类型变为long类型
    if(n == 0)
        ret = 1;
    else{
        for (i = n; i>1; i--){
            ret *= i - 1;
        }
    }
    return ret;
}

long rfact(int n){
    long ans;
    if(n>0){
        ans = n * rfact(n - 1);
    }
    else
        ans = 1;
    return ans;
}