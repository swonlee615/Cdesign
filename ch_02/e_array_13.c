
#include <stdio.h>

// scanf %s
int main()
{
    // 선언 '후' 초기화 → 예: ABCD 입력/저장
    //                       문자 자료형 메모리박스 10개 문자'열' 선언 '후' 변수 문자 ABCD 초기화
    char K[10];

    scanf("%s", &K);           // 입력서식(%s→문자'열') '초기화' 변수자료형(문자'열'→ABCD엔터) 매칭 O -- 공백문자 인정 X => 엔터 저장 X -- 버퍼로 감
                               // scanf 실행 성공:  K 주소값(&)을 시작으로 문자 4개 ABCD 입력/저장(공백문자 전까지) + 문자 1개 \0=null 생성  → '초기화' 변수(문자→엔터) 버퍼 유지 
    printf("%s\n", K);         // %s → 문자 4개 ABCD 출력
    printf("%d\n", strlen(K)); // %d → 문자'열' 길이(strlen = string length) 출력  → \0=null 문자 앞까지 길이 출력
    printf("<%c>\n", K[4]);    // \0=null 문자 생성 위치 
    printf("-------\n");

    scanf("%s", &K);           // scanf 실행:  버퍼 변수(문자→엔터) 삭제  →  입력서식(%s→문자'열') '초기화' 변수자료형(문자'열'→ABCD엔터) 매칭 O
                               // scanf 실행 성공:  K 주소값(&)을 시작으로 문자 4개 ABCD 입력/저장(공백문자 전까지) + 문자 1개 \0=null 생성  → '초기화' 변수(문자→엔터) 버퍼 유지 
    printf("%s\n", K);         // %s → 문자 4개 ABCD 출력
    printf("%d\n", strlen(K)); // %d → 문자'열' 길이(strlen = string length) 출력  → \0=null 문자 앞까지 길이 출력
    printf("<%c>\n", K[4]);    // \0=null 문자 생성 위치 
    printf("-------\n");

    scanf("%s", &K);           // scanf 실행:  버퍼 변수(문자→엔터) 삭제  →  입력서식(%s→문자'열') '초기화' 변수자료형(문자'열'→ABCD엔터) 매칭 O
                               // scanf 실행 성공:  K 주소값(&)을 시작으로 문자 4개 ABCD 입력/저장(공백문자 전까지) + 문자 1개 \0=null 생성  → '초기화' 변수(문자→엔터) 버퍼 유지 
    printf("%s\n", K);         // %s → 문자 4개 ABCD 출력
    printf("%d\n", strlen(K)); // %d → 문자'열' 길이(strlen = string length) 출력  → \0=null 문자 앞까지 길이 출력
    printf("<%c>\n", K[4]);    // \0=null 문자 생성 위치 
    printf("-------\n");

    scanf("%s", &K);           // scanf 실행:  버퍼 변수(문자→엔터) 삭제  →  입력서식(%s→문자'열') '초기화' 변수자료형(문자'열'→ABCD엔터) 매칭 O
                               // scanf 실행 성공:  K 주소값(&)을 시작으로 문자 4개 ABCD 입력/저장(공백문자 전까지) + 문자 1개 \0=null 생성  → '초기화' 변수(문자→엔터) 버퍼 유지 
    printf("%s\n", K);         // %s → 문자 4개 ABCD 출력
    printf("%d\n", strlen(K)); // %d → 문자'열' 길이(strlen = string length) 출력  → \0=null 문자 앞까지 길이 출력
    printf("<%c>\n", K[4]);    // \0=null 문자 생성 위치 
    printf("-------\n");

    scanf("%s", &K);           // scanf 실행:  버퍼 변수(문자→엔터) 삭제  →  입력서식(%s→문자'열') '초기화' 변수자료형(문자'열'→ABCD엔터) 매칭 O
                               // scanf 실행 성공:  K 주소값(&)을 시작으로 문자 4개 ABCD 입력/저장(공백문자 전까지) + 문자 1개 \0=null 생성  → '초기화' 변수(문자→엔터) 버퍼 유지 
    printf("%s\n", K);         // %s → 문자 4개 ABCD 출력
    printf("%d\n", strlen(K)); // %d → 문자'열' 길이(strlen = string length) 출력  → \0=null 문자 앞까지 길이 출력
    printf("<%c>\n", K[4]);    // \0=null 문자 생성 위치 
    printf("-------\n");

    return 0;
}