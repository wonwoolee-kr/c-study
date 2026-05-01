#include <stdio.h>

int main(){
    int a= 5;
    int b= 7;
    printf("%d\n", a+b);
    printf("값을 입력하세요");
    scanf ("%d", &a);
    if ((a%2) == 0){
        printf("짝수에요");
        }
        else{
            printf("홀수에요");
        }
}

