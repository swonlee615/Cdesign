
#include <stdio.h>
#include <string.h> // string 함수 사용 라이브러리 추가

// 문자'열': 선언크기 < 변수갯수
// 예: ABCDE 입력/저장
int main()
{
    char Y[3];
    printf("---input---\n");
    scanf("%s", &Y); // 자동으로 마지막에 null 문자 추가해줌 -- 임의로 추가할 필요 없음
    printf("---Output---\n");
    printf("%s\n", Y);
    printf("<%c>\n", Y[5]);
    printf("%d\n", strlen(Y[0]));
    printf("%c\n", Y);
 
    return 0;
}