
#include <stdio.h>
#include <string.h> // string 함수 사용 라이브러리 추가

// 공백문자 X
int main()
{
    // 선언 '동시' 초기화 (1)
    char X[10] = {'A', 'B', 'C', 'D', '\0'};         // 배열의 크기 10 ≥ 초기화 변수 갯수 4 + 1 이상(\0=null 문자 생성 메모리박스 공간)
    printf("%s\n", X);                               // %s → 문자'열' 출력
    printf("%c %c %c %c\n", X[0], X[1], X[2], X[3]); // %c → 배열요소 문자 출력
    printf("%d\n", strlen(X));                       // %d → 문자'열' 길이(strlen = string length) 출력  → \0=null 문자 전까지 길이 출력
    printf("<%c>\n", X[4]);                          // \0=null 문자 초기화 위치

    // 선언 '후' 초기화
    char Z[10];
    printf("--입력--\n");
    scanf("%s", &Z);           // 예: ABCD 입력/저장
                               // 문자 메모리박스 10개 문자'열' 선언 '후' 변수 문자 4개 ABCD 초기화 + 문자 1개 \0=null 생성  →  '초기화' 변수(문자→엔터) 버퍼 유지    
    printf("--출력--\n");
    printf("%s\n", Z);         // %s → 문자'열' 출력
    printf("%c %c %c %c\n", Z[0], Z[1], Z[2], Z[3]); // %c → 배열요소 문자 출력
    printf("%d\n", strlen(Z)); // %d → 문자'열' 길이(strlen = string length) 출력  → \0=null 문자 전까지 길이 출력
    printf("<%c>\n", Z[4]);    // \0=null 문자 생성 위치 

    return 0;
}

