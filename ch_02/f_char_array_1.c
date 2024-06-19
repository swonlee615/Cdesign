// 배열크기 O  /  공백문자 X  /  문자 → %c  문자'열 → %s
// 예:  A 입력/저장 → BCDEFG 입력/저장 → HIJKLMN 입력/저장

#include <stdio.h>
#include <string.h>


int main()
{
    char X;
    printf("---Input---\n");
    scanf("%c", &X);           // 입력서식(%c→문자) '초기화' 변수자료형(문자→A엔터) 매칭 O
                               // scanf 실행 성공:  문자 1개 A 입력/저장[%c 문자자료형 A(1 Byte) A 주소값(&)을 시작으로 입력/저장]  →  '초기화' 변수(엔터) 버퍼 유지
    printf("---Output---\n");
    printf("%c\n", X);         // %c → 선언한 자료형크기 만큼 문자 1개 A 출력
    
    char Y[7];
    printf("---Input---\n");
    scanf("%s", &Y);           // scanf 실행:  버퍼 변수(문자→엔터) 삭제  →  입력서식(%s→문자'열') '초기화' 변수자료형(문자'열'→BCDEFG엔터) 매칭 O
                               // scanf 실행 성공:  Y 주소값(&)을 시작으로 문자 6개 BCDEFG 입력/저장(공백문자 전까지) + 문자 1개 \0=null 생성  → '초기화' 변수(문자→엔터) 버퍼 유지 
    printf("---Output---\n");
    printf("%s\n", Y);         // %s → 문자 6개 BCDEFG 출력:  \0=null 문자 전까지 출력
    printf("%d\n", strlen(Y)); // %d → 문자'열' 길이(strlen = string length) 출력  → \0=null 문자 앞까지 길이 출력
    printf("<%c>\n", Y[6]);    // \0=null 문자 생성 위치 

    char Z[8];
    printf("---Input---\n");
    scanf("%s", &Z);          // scanf 실행:  버퍼 변수(문자→엔터) 삭제  →  입력서식(%s→문자'열') '초기화' 변수자료형(문자'열'→HIJKLMN엔터) 매칭 O
                              // scanf 실행 성공:  Z 주소값(&)을 시작으로 문자 7개 HIJKLMN 입력/저장(공백문자 전까지) + 문자 1개 \0=null 생성  → '초기화' 변수(문자→엔터) 버퍼 유지
    printf("---Output---\n");
    printf("%s\n", Z);        // %s → 문자 7개 HIJKLMN 출력:  \0=null 문자 전까지 출력
    printf("%d\n", strlen(Z)); // %d → 문자'열' 길이(strlen = string length) 출력  → \0=null 문자 전까지 길이 출력
    printf("<%c>\n", Z[7]);    // \0=null 문자 생성 위치 

    return 0;
}