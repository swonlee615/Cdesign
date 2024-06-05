
#include <stdio.h>

// 문자: 선언크기 < 변수갯수
// 예: ABCDE 입력/저장
int main()
{
    char X;
    printf("---input---\n");
    scanf("%s", &X); //%s 는 배열에서 출력 가능
    printf("---Output---\n");
    printf("%c\n", X);
    printf("%s\n", X);
 
    return 0;
}   
 