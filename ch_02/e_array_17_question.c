// 배열크기 X + 입력서식 %c & %s
// 예: OPQR 입력/저장  /  1234 입력/저장

#include <stdio.h>

int main()
{
    char A[2] = {0};
    printf("---Input---\n");
    scanf("%c", &A);            // 입력서식(%c→문자) '초기화' 변수자료형(문자→OPQR엔터) 매칭 O
                                // scanf 실행 성공:  문자 1개 O 입력/저장[%c 문자자료형 O(1 Byte) A 주소값(&)을 시작으로 입력/저장](char A[2]; 메모리박스 2개 '활성화')  → '초기화' 변수(문자→PQR엔터) 버퍼 유지   
    printf("---Output---\n");
    printf("A 문자열: %s\n", A); // %s → \0=null 문자 전까지 문자 1개 O 출력 

    char B[2];
    printf("---Input---\n");
    scanf("%s", &B);            // 입력서식(%s→문자'열') 버퍼 변수자료형(문자'열'→PQR엔터) 매칭 O
                                // scanf 실행 성공:  B 주소값(&)을 시작으로 문자 3개 PQR 입력/저장(공백문자 전까지) + 문자 1개 \0=null 생성(char B[2]; 메모리박스 2개 '활성화')  → '초기화' 변수(문자→엔터) 버퍼 유지   
    printf("---Output---\n");
    printf("B 문자열: %s\n", B); // %s → \0=null 문자 전까지 문자 3개 PQR 출력 
    printf("A 문자열: %s\n", A); // %s → char B 메모리박스 '초기화' → char A 메모리박스 위치 '초기화'(문자 1개 R) + 문자 1개 \0=null 생성 : \0=null 문자 앞까지 문자 1개 R 출력

    char C[3] = {0};
    printf("---Input---\n");
    scanf("%c", &C);               // 입력서식(%c→문자) 버퍼 변수자료형(문자→엔터) 매칭 O
                                   // scanf 실행 성공:  문자 1개 엔터 입력/저장[%c 문자자료형 엔터(1 Byte) C 주소값(&)을 시작으로 입력/저장](char C[3]; 메모리박스 3개 '활성화') 
    printf("---Output---\n");
    printf("C 문자열:\n<%s>\n", C); // %s → \0=null 문자 전까지 문자 1개 엔터 출력 
    printf("B 문자열: %s\n", B);    // %s → \0=null 문자 잔까지 문자 3개 PQR 출력 
    printf("A 문자열: %s\n", A);    // %s → char B 메모리박스 '초기화' → char A 메모리박스 위치 '초기화'(문자 1개 R) + 문자 1개 \0=null 생성: \0=null 문자 앞까지 문자 1개 R 출력

    char D[4];
    printf("---Input---\n");
    scanf("%s", &D);                // 입력서식(%s→문자'열') 버퍼 변수자료형(문자'열'→OPQR) 매칭 O
                                    // scanf 실행 성공:  D 주소값(&)을 시작으로 문자 4개 OPQR 입력/저장(공백문자 전까지) + 문자 1개 \0=null 생성(char D[4]; 메모리박스 4개 '활성화')  → '초기화' 변수(문자→엔터) 버퍼 유지   
    printf("---Output---\n");
    printf("D 문자열: %s\n", D);    // %s → \0=null 문자 전까지 문자 4개 OPQR 출력 
    printf("C 문자열:\n<%s>\n", C); // %s → char D 메모리박스 '초기화' → char C 메모리박스 위치 문자 1개 \0=null 생성: \0=null 문자 앞까지 문자 O개 출력 → 출력 변수 X   
    printf("B 문자열: %s\n", B);    // %s → \0=null 문자 전까지 문자 3개 PQR 출력 
    printf("A 문자열: %s\n", A);    // %s → char B 메모리박스 '초기화' → char A 메모리박스 위치 '초기화'(문자 1개 R) + 문자 1개 \0=null 생성: \0=null 문자 앞까지 문자 1개 R 출력

    return 0;
}

