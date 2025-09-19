#include <stdio.h>

/*
========================================
문제 4: 짝수/홀수 판별
----------------------------------------
입력: 정수 1개
출력: "even" 또는 "odd"

예시:
입력: 7
출력: odd
========================================
*/

int main(void) {
    
    int a;
    printf("type your number: ");
    scanf("%d", &a);

    if (a % 2 == 1) {
        printf("Odd!\n");
    } 
    else {
        printf("Even!\n");
    }

    return 0;
}
