
// 배열크기 X + 입력서식 %c & %s
// 예: OPQR → OPQRSTUVWXYZ 입력/저장  /  1234 입력/저장 → 12345678 입력/저장

#include <stdio.h>

int main()
{
    char A[2] = {0};
    printf("---Input---\n");
    scanf("%c", &A);            // 입력서식(%c→문자) '초기화' 변수자료형(문자→OPQR엔터) 매칭 O
                                // scanf 실행 성공:  문자 1개 O 입력/저장[%c 문자자료형 O(1 Byte) A 주소값(&)을 시작으로 입력/저장](char A[2]; 메모리박스 2개 '활성화')  → '초기화' 변수(문자→PQR엔터) 버퍼 유지   
    printf("---Output---\n");
    printf("A 문자열: %s\n", A); // %s → \0=null 문자 전까지 문자 1개 O 출력 

    char B[2] = {0};
    printf("---Input---\n");
    scanf("%c", &B);            // 입력서식(%c→문자) '초기화' 변수자료형(문자→PQR엔터) 매칭 O
                                // scanf 실행 성공:  문자 1개 P 입력/저장[%c 문자자료형 P(1 Byte) B 주소값(&)을 시작으로 입력/저장](char B[2]; 메모리박스 2개 '활성화')  → '초기화' 변수(문자→QR엔터) 버퍼 유지   
    printf("---Output---\n");
    printf("B 문자열: %s\n", B); // %s → \0=null 문자 전까지 문자 1개 P 출력 
    printf("A 문자열: %s\n", A); // %s → \0=null 문자 전까지 문자 1개 O 출력 

    char C[2];
    printf("---Input---\n");
    scanf("%s", &C);               // 입력서식(%s→문자'열') 버퍼 변수자료형(문자'열'→QR엔터) 매칭 O
                                   // scanf 실행 성공:  C 주소값(&)을 시작으로 문자 2개 QR 입력/저장(공백문자 전까지) + 문자 1개 \0=null 생성(char C[2]; 메모리박스 2개 '활성화')  → '초기화' 변수(문자→엔터) 버퍼 유지   
    printf("---Output---\n");
    printf("C 문자열: %s\n", C);    // %s → \0=null 문자 전까지 문자 2개 QR 출력 
    printf("B 문자열:\n<%s>\n", B); // %s → char C 메모리박스 '초기화' → char B 메모리박스 위치 '초기화'(문자 1개 \0): \0=null 문자 전까지 문자 O개 출력 → 출력 변수 X   
    printf("A 문자열: %s\n", A);    // %s → \0=null 문자 전까지 문자 1개 O 출력 

    char D[3];
    printf("---Input---\n");
    scanf("%s", &D);            // scanf 실행:  버퍼 변수(문자→엔터) 삭제  →  입력서식(%s→문자'열') '초기화' 변수자료형(문자'열'→OPQRSTUV엔터) 매칭 O
                                // scanf 실행 성공:  D 주소값(&)을 시작으로 문자 12개 OPQRSTUVWSYZ엔터 입력/저장(공백문자 전까지) + 문자 1개 \0=null 생성(char D[3]; 메모리박스 3개 '활성화')  → '초기화' 변수(문자→엔터) 버퍼 유지 
    printf("---Output---\n");
    printf("D 문자열: %s\n", D); // %s → \0=null 문자 전까지 문자 12개 OPQRSTUV 출력 
    printf("C 문자열: %s\n", C); // %s → char D 메모리박스 '초기화' → char C 메모리박스 위치 '초기화'(문자 2개 RS): \0=null 문자 전까지 문자 5개 RSTUVWXYZ 출력 
    printf("B 문자열: %s\n", B); // %s → char D 메모리박스 '초기화' → char B 메모리박스 위치 '초기화'(문자 2개 TU): \0=null 문자 전까지 문자 3개 TUVWXYZ 출력 
    printf("A 문자열: %s\n", A); // %s → char D 메모리박스 '초기화' → char A 메모리박스 위치 '초기화'(문자 1개 V) + 문자 1개 \0=null 생성: \0=null 문자 전까지 문자 1개 VWXYZ 출력 

    char E[2] = {0};
    printf("---Input---\n");
    scanf("%c", &E);               // 입력서식(%c→문자) 버퍼 변수자료형(문자→엔터) 매칭 O
                                   // scanf 실행 성공:  문자 1개 엔터 입력/저장[%c 문자자료형 엔터(1 Byte) C 주소값(&)을 시작으로 입력/저장](char E[2]; 메모리박스 2개 '활성화') 
    printf("---Output---\n");
    printf("E 문자열:\n<%s>\n", E); // %s → \0=null 문자 전까지 문자 1개 엔터 출력 
    printf("D 문자열: %s\n", D);    // %s → \0=null 문자 전까지 문자 8개 OPQRSTUV 출력 
    printf("C 문자열: %s\n", C);    // %s → char D 메모리박스 '초기화' → char C 메모리박스 위치 '초기화'(문자 2개 RS): \0=null 문자 전까지 문자 5개 RSTUVWXYZ 출력 
    printf("B 문자열: %s\n", B);    // %s → char D 메모리박스 '초기화' → char B 메모리박스 위치 '초기화'(문자 2개 TU): \0=null 문자 전까지 문자 3개 TUVWXYZ 출력 
    printf("A 문자열: %s\n", A);    // %s → char D 메모리박스 '초기화' → char A 메모리박스 위치 '초기화'(문자 1개 V) + 문자 1개 \0=null 생성: \0=null 문자 전까지 문자 1개 VWXYZ 출력 

    return 0;
}

