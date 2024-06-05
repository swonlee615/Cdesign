
// 입력서식 & '초기화'자료형 일치 X
// 예: Z 입력/저장

#include <stdio.h>

int main()
{
    int A;
    printf("---Input---\n");
    scanf("%d", &A); // 입력서식(%d→정수) '초기화' 변수자료형(문자→Z) 매칭 X
                     // scanf 실행 실패:  쓰레기값[예: 쓰레기값 0 = char 자료형크기 1 Byte 정수값 0 (1 Bytes = 8 Bits = 2진수 00000000 = 10진수 0)]  → '초기화' 변수(Z, 엔터) 버퍼 유지
    printf("---Output---\n");
    printf("<%d>\n", A); // %d → 선언한 자료형크기 만큼 쓰래기값 출력(예: 정수 1개 0)
    printf("<%c>\n", A); // %c → 선언한 자료형크기 만큼 쓰래기값 출력(예: 정수 1개 0 ASCII Code 변환 문자 1개 null)

    char B;
    printf("---Input---\n");
    scanf("%c", &B); // 입력서식(%c→문자) 버퍼 변수자료형(문자→Z엔터) 매칭 O
                     // scanf 실행 성공:  버퍼 문자 1개 Z 입력/저장[%c 문자자료형 Z(1 Byte) C 주소값(&)을 시작으로 입력/저장] → 버퍼 변수(문자→엔터) 유지
    printf("---Output---\n");
    printf("<%c>\n", B); // %c → 선언한 자료형크기 만큼 문자 1개 Z 출력
    printf("<%d>\n", B); // %d → 선언한 자료형크기 만큼 문자 1개 Z ASCII Code 변환 정수 1개 90 출력

    char C;
    printf("---Input---\n");
    scanf("%c", &C); // 입력서식(%c→문자)와 버퍼 변수자료형(문자→엔터)이 매칭 O
                     // scanf 실행 성공:  버퍼 문자 1개 엔터 입력/저장[%c 문자자료형 엔터(1 Byte) C 주소값(&)을 시작으로 입력/저장] 
    printf("---Output---\n");
    printf("<%c>\n", C); // %c → 선언한 자료형크기 만큼 문자 1개 엔터 출력
    printf("<%d>\n", C); // %d → 선언한 자료형크기 만큼 문자 1개 엔터 ASCII Code 변환 정수 1개 10 출력

    return 0;
}

