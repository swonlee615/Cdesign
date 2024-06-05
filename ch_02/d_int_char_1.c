
// 입력서식 & '초기화'자료형 일치 O
// 예:  126 입력/저장 → ~ 입력/저장

#include <stdio.h>

int main()
{
    int A;
    printf("---Input---\n");
    scanf("%d", &A); // 입력서식(%d→정수) '초기화' 변수자료형(정수→126) 매칭 O
                     // scanf 실행 성공:  정수 1개 126 입력/저장[%d 정수자료형 126(4 Bytes) A 주소값(&)을 시작으로 입력/저장] → '초기화' 변수(문자→엔터) 버퍼 유지
    printf("---Output---\n");
    printf("<%d>\n", A); // %d → 선언한 자료형크기 만큼 정수 1개 126 출력
    printf("<%c>\n", A); // %c → 선언한 자료형크기 만큼 정수 1개 126 ASCII Code 변환 문자 1개 ~ 출력

    char B;
    printf("---Input---\n");
    scanf("%c", &B); // 입력서식(%c→문자) 버퍼 변수자료형(문자→엔터) 매칭 O
                     // scanf 실행 성공:  버퍼 문자 1개 엔터 입력/저장[%c 문자자료형 엔터(1 Byte) B 주소값(&)을 시작으로 입력/저장]
    printf("---Output---\n");
    printf("<%c>\n", B); // %c → 선언한 자료형크기 만큼 문자 1개 엔터 출력
    printf("<%d>\n", B); // %d → 선언한 자료형크기 만큼 문자 1개 엔터 ASCII Code 변환 정수 1개 10 출력

    char C;
    printf("---Input---\n");
    scanf("%c", &C); // 입력서식(%c→문자)와 '초기화' 변수자료형(문자→~)이 매칭 O
                     // scanf 실행 성공:  문자 1개 ~ 입력/저장[%c 문자자료형 ~(1 Byte) C 주소값(&)을 시작으로 입력/저장] → '초기화' 변수(문자→엔터) 버퍼 유지
    printf("---Output---\n");
    printf("<%c>\n", C); // %c → 선언한 자료형크기 만큼 문자 1개 ~ 출력
    printf("<%d>\n", C); // %d → 선언한 자료형크기 만큼 문자 1개 ~ ASCII Code 변환 정수 1개 126 출력

    char D;
    printf("---Input---\n");
    scanf("%c", &B); // 입력서식(%c→문자) 버퍼 변수자료형(문자→엔터) 매칭 O
                     // scanf 실행 성공:  버퍼 문자 2개 엔터 입력/저장[%c 문자자료형 엔터(1 Byte) B 주소값(&)을 시작으로 입력/저장] 
    printf("---Output---\n");
    printf("<%c>\n", B); // %c → 선언한 자료형크기 만큼 문자 1개 엔터 출력
    printf("<%d>\n", B); // %d → 선언한 자료형크기 만큼 문자 1개 엔터 ASCII Code 변환 정수 1개 10 출력 → '초기화' 변수(문자→엔터) 버퍼 유지

    return 0;
}

