
// 입력서식 & '초기화'자료형 일치 X
// 예: 90 입력/저장

#include <stdio.h>

int main()
{
    char A;
    printf("---Input---\n");
    scanf("%c", &A); // 입력서식(%c→문자)와 '초기화'변수 자료형(문자→90엔터)이 매칭 O
                     // scanf 실행 성공:  앞자리 문자 1개 입력/저장 → 9 입력/저장[%c 문자자료형 9(1 Byte) A 주소값(&)을 시작으로 입력/저장] → '초기화' 변수(문자→0, 엔터) 버퍼 유지 
    printf("---Output---\n");
    printf("<%c>\n", A); // %c → 선언한 자료형크기 만큼 문자 1개 9 출력
    printf("<%d>\n", A); // %d → 선언한 자료형크기 만큼 문자 1개 9 ASCII Code 변환 정수 1개 57 출력

    int B;
    printf("---Input---\n");
    scanf("%d", &B); // 입력서식(%d→문자)와 버퍼 변수자료형(문자→0엔터 X 정수→0 O 인식) 매칭 O
                     // scanf 실행 성공:  버퍼 정수 1개 0 입력/저장[%d 정수자료형 0(4 Bytes) B 주소값(&)을 시작으로 입력/저장] → 버퍼 변수(문자→엔터) 유지
    printf("---Output---\n");
    printf("<%d>\n", B); // %d → 선언한 자료형크기 만큼 정수 1개 0 출력
    printf("<%c>\n", B); // %c → 선언한 자료형크기 만큼 정수 1개 0 ASCII Code 변환 문자 1개 null 출력

    int C;
    printf("---Input---\n");
    scanf("%d", &C); // scanf 실행:  버퍼 변수(문자→엔터) 삭제  →  입력서식(%d→정수) '초기화' 변수자료형(정수→90) 매칭 O
                     // scanf 실행 성공: 정수 1개 90 입력/저장[%d 정수자료형 90(4 Bytes) A 주소값(&)을 시작으로 입력/저장] → 버퍼 변수(문자→엔터) 유지
    printf("---Output---\n");
    printf("<%d>\n", C); // %d → 선언한 자료형크기 만큼 정수 1개 90 출력
    printf("<%c>\n", C); // %c → 선언한 자료형크기 만큼 정수 1개 90 ASCII Code 변환 문자 1개 Z 출력

    int D;
    printf("---Input---\n");
    scanf("%c", &D); // 입력서식(%c→문자)와 버퍼 변수자료형(문자→엔터) 매칭 O
                     // scanf 실행 성공: 문자 1개 엔터 입력/저장[%c 문자자료형 엔터(1 Byte) C 주소값(&)을 시작으로 입력/저장]
    printf("---Output---\n");
    printf("<%c>\n", D); // %c → 선언한 자료형크기 만큼 문자 1개 엔터 출력
    printf("<%d>\n", D); // %d → int 자료형크기 4 Bytes:  [(3 Bytes = 쓰레기값) + (1 Bytes = 문자 엔터(LF-Line Feed) ASCII Code 변환 정수 1개 10)] 출력
    
    return 0;
}

