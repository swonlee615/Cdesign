
// 배열크기 X
// 예: OPQR 입력/저장  /  1234 입력/저장
// -- 마지막 input에 OPQRST 시도해보기

#include <stdio.h>

int main()
{
    char A[2];
    printf("---Input---\n");
    scanf("%s", &A);            // 입력서식(%s→문자'열') '초기화' 변수자료형(문자'열'→OPQR엔터) 매칭 O
                                // scanf 실행 성공:  A 주소값(&)을 시작으로 문자 4개 OPQR 입력/저장(공백문자 전까지) + 문자 1개 \0=null 생성(char A[2]; 메모리박스 2개 '활성화' + 3개 '생성')  →  '초기화' 변수(문자→엔터) 버퍼 유지 
    printf("---Output---\n");  
    printf("X 문자열: %s\n", A); // %s → \0=null 문자 전까지 문자 4개 OPQR 출력 

    char B[2];
    printf("---Input---\n");      
    scanf("%s", &B);            // scanf 실행:  버퍼 변수(문자→엔터) 삭제  →  입력서식(%s→문자'열') '초기화' 변수자료형(문자'열'→OPQR엔터) 매칭 O
                                // scanf 실행 성공:  B 주소값(&)을 시작으로 문자 4개 OPQR 입력/저장(공백문자 전까지) + 문자 1개 \0=null 생성(char B[2]; 메모리박스 2개 '활성화')  → '초기화' 변수(문자→엔터) 버퍼 유지 
    printf("---Output---\n");
    printf("Y 문자열: %s\n", B); // %s → \0=null 문자 전까지 문자 4개 OPQR 출력 
    printf("X 문자열: %s\n", A); // %s → char B 메모리박스 '초기화' → char A 메모리박스 위치 '초기화'(문자 2개 QR) + 문자 1개 \0=null 생성: \0=null 문자 앞까지 문자 2개 QR 출력

    char C[4];
    printf("---Input---\n");
    scanf("%s", &C);            // scanf 실행:  버퍼 변수(문자→엔터) 삭제  →  입력서식(%s→문자'열') '초기화' 변수자료형(문자'열'→OPQR엔터) 매칭 O
                                // scanf 실행 성공:  C 주소값(&)을 시작으로 문자 4개 OPQR 입력/저장(공백문자 전까지) + 문자 1개 \0=null 생성(char C[4]; 메모리박스 4개 '활성화')  → '초기화' 변수(문자→엔터) 버퍼 유지   
    printf("---Output---\n");
    printf("Z 문자열: %s\n", C); // %s → \0=null 문자 전까지 문자 4개 OPQR 출력 
    printf("Y 문자열: %s\n", B); // %s → char C 메모리박스 '초기화' → char B 메모리박스 위치  + 문자 1개 \0=null 생성: \0=null 문자 앞까지 문자 0개 출력 → 출력 변수 X   
    printf("X 문자열: %s\n", A); // %s → char B 메모리박스 '초기화' → char A 메모리박스 위치 '초기화'(문자 2개 QR) + 문자 1개 \0=null 생성: \0=null 문자 앞까지 문자 2개 QR 출력

    return 0;
}