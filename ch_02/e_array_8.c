
#include <stdio.h>
#include <string.h> // string 함수 사용 라이브러리 추가

// 공백문자 O
//동시초기화 : 공백문자 인식 O
//선언후초기화 : 공백문자 인식 X
//scanf : 공백문자 인식 X 
int main()
{
    // 선언 '동시' 초기화 (1) → 원칙 X: 배열크기 ≤ 초기화 변수 갯수
    printf("---원칙 X---\n");
    char X[2] = {'A', 'B', ' ', 'C', 'D'};                    // 배열의 크기 2 ≤ 초기화 변수 갯수 5 + 1(\0=null 문자 생성 메모리박스 공간)
    printf("%s\n", X);                                        // %s → 문자'열' 출력:  정상출력 X(예: AB스페이스CD 출력 X  AB쓰레기값 출력 O)
    printf("%c %c %c %c %c\n", X[0], X[1], X[2], X[3], X[4]); // 정상출력 X(예: A B 스페이스 C D 출력 X  A B 쓰레기값 출력 O)
    printf("%d\n", strlen(X));                                // %d → 문자'열' 길이(strlen = string length) 출력  → \0=null 문자 전까지 길이 출력
    printf("<%c>\n", X[5]);                                   // \0=null 문자 생성 위치

    // 선언 '후' 초기화 → 원칙 X: 배열크기 ≤ 초기화 변수 갯수
    printf("---원칙 X---\n");
    char Z[2];
    printf("---입력---\n");
    scanf("%s", &Z);               // 예: AB스페이스CD 입력/저장  →  배열의 크기 2 ≤ 초기화 변수 갯수 5 + 1(\0=null 문자 생성 메모리박스 공간)
    printf("---출력---\n");
    printf("%s\n", Z);             // %s → 문자'열' 출력
    printf("%c %c\n", Z[0], Z[1]); // %c → 배열요소 문자 출력: X[2] = \0=null
    printf("%d\n", strlen(Z));     // %d → 문자'열' 길이(strlen = string length) 출력  → \0=null 문자 전까지 길이 출력
    printf("<%c>\n", Z[2]);        // \0=null 문자 생성 위치

    printf("--입력--\n");
    scanf("%s", &Z);               //  scanf 실행:  버퍼 변수(문자→스페이스) 삭제  →  버퍼 변수(문자→CD) 초기화 + \0=null 문자 생성  →  버퍼 변수(문자→엔터) 유지   
    printf("--출력--\n");
    printf("%s\n", Z);             // %s → 문자'열' 출력
    printf("%c %c\n", Z[0], Z[1]); // %c → 배열요소 문자 출력: X[2] = \0=null
    printf("%d\n", strlen(Z));     // %d → 문자'열' 길이(strlen = string length) 출력  → \0=null 문자 전까지 길이 출력
    printf("<%c>\n", Z[2]);        // \0=null 문자 생성 위치

    return 0;
}