
// 배열크기 X + 입력서식 %c
// 예: OPQ 입력/저장   /  123 입력/저장 

#include <stdio.h>

int main()
{
    char A[2] = {0};
    printf("---Input---\n");      
    scanf("%c", &A);            // 입력서식(%c→문자) '초기화' 변수자료형(문자→OPQ엔터) 매칭 O // null문자 자동세팅하지 않음
                                // scanf 실행 성공:  문자 1개 O 입력/저장[%c 문자자료형 O(1 Byte) A 주소값(&)을 시작으로 입력/저장](char A[2]; 메모리박스 2개 '활성화')  → '초기화' 변수(문자→PQ엔터) 버퍼 유지   
    printf("---Output---\n");
    printf("A 문자열: %s\n", A); // %s → \0=null 문자 전까지 문자 1개 O 출력 

    char B[2] = {0};
    printf("---Input---\n");
    scanf("%c", &B);            // 입력서식(%c→문자) 버퍼 변수자료형(문자→PQ엔터) 매칭 O
                                // scanf 실행 성공:  문자 1개 P 입력/저장[%c 문자자료형 P(1 Byte) B 주소값(&)을 시작으로 입력/저장](char B[2]; 메모리박스 2개 '활성화')  → '초기화' 변수(문자→Q엔터) 버퍼 유지   
    printf("---Output---\n");
    printf("B 문자열: %s\n", B); // %s → \0=null 문자 전까지 문자 1개 P 출력 
    printf("A 문자열: %s\n", A); // %s → \0=null 문자 전까지 문자 1개 O 출력 

    char C[3] = {0};
    printf("---Input---\n");
    scanf("%c", &C);            // 입력서식(%c→문자) 버퍼 변수자료형(문자→Q엔터) 매칭 O
                                // scanf 실행 성공:  문자 1개 Q 입력/저장[%c 문자자료형 Q(1 Byte) C 주소값(&)을 시작으로 입력/저장](char C[3]; 메모리박스 3개 '활성화')  → '초기화' 변수(문자→엔터) 버퍼 유지   
    printf("---Output---\n");
    printf("C 문자열: %s\n", C); // %s → \0=null 문자 전까지 문자 1개 Q 출력 
    printf("B 문자열: %s\n", B); // %s → \0=null 문자 전까지 문자 1개 P 출력 
    printf("A 문자열: %s\n", A); // %s → \0=null 문자 전까지 문자 1개 O 출력 

    char D[4] = {0};
    printf("---Input---\n");
    scanf("%c", &D);                // 입력서식(%c→문자) 버퍼 변수자료형(문자→엔터) 매칭 O
                                    // scanf 실행 성공:  문자 1개 엔터 입력/저장[%c 문자자료형 엔터(1 Byte) D 주소값(&)을 시작으로 입력/저장](char D[4]; 메모리박스 3개 '활성화')
    printf("---Output---\n");
    printf("D 문자열:\n<%s>\n", D); // %s → \0=null 문자 전까지 문자 1개 엔터 출력 
    printf("C 문자열: %s\n", C);    // %s → \0=null 문자 전까지 문자 1개 Q 출력 
    printf("B 문자열: %s\n", B);    // %s → \0=null 문자 전까지 문자 1개 P 출력 
    printf("A 문자열: %s\n", A);    // %s → \0=null 문자 전까지 문자 1개 O 출력 

    return 0;
}