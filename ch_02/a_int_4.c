
// 입력서식 & '초기화'자료형 일치 X
// a_int_3.c 부분 추출
// 예: 89 입력/저장

#include <stdio.h>

int main()
{
    // int A;
    // printf("---Input---\n");
    // scanf("%d", &A);     // 입력서식(%d→정수) '초기화' 변수자료형(정수→89) 매칭 O
    //                      // scanf 실행 성공:  정수 1개 89 입력/저장[%d 정수자료형 89(4 Bytes) A 주소값(&)을 시작으로 입력/저장]
    // printf("---Output---\n");
    // printf("<%d>\n", A); // %d → 선언한 자료형크기 만큼 정수 1개 89 출력

    // int B;
    // printf("---Input---\n");
    // scanf("%d", &B);     // scanf 실행:  버퍼 변수(문자→엔터) 삭제  →  입력서식(%d→정수) '초기화' 변수자료형(정수→89) 매칭 O
    //                      // scanf 실행 성공:  정수 1개 89 입력/저장[%d 정수자료형 89(4 Bytes) A 주소값(&)을 시작으로 입력/저장]  →  '초기화' 변수(문자→엔터) 버퍼 유지
    // printf("---Output---\n");
    // printf("<%c>\n", B); // %c → 선언한 자료형크기 만큼 정수 1개 89 ASCII Code 변환 문자 1개 Y 출력

    // int C;
    // printf("---Input---\n");
    // scanf("%c", &C);     // scanf 실행:  입력서식(%c→문자) 버퍼 변수자료형(문자→엔터) 매칭 O
    //                      // scanf 실행 성공:  문자 1개 엔터 입력/저장[%c 문자자료형 엔터(1 Byte) C 주소값(&)을 시작으로 입력/저장]
    // printf("---Output---\n");
    // printf("<%c>\n", C); // %c → 선언한 자료형크기 만큼 문자 1개 엔터 출력

    int D;
    printf("---Input---\n");
    scanf("%c", &D);     // 입력서식(%c→정수) '초기화' 변수자료형(%c: 정수→89 X 문자→89엔터 O 인식) 매칭 O
                         // scanf 실행 성공:  문자 1개 8 입력/저장[%c 문자자료형 8(1 Byte) D 주소값(&)을 시작으로 입력/저장]  →  '초기화' 변수(문자→9, 엔터) 버퍼 유지
    printf("---Output---\n");
    printf("<%d>\n", D); // %d → int 자료형크기 4 Bytes: [(3 Bytes = 쓰레기값) + (1 Bytes = 문자 1개 8 ASCII Code 정수 변환 56)] 출력

    int E;
    printf("---Input---\n");
    scanf("%d", &E); // scanf 실행:  입력서식(%d→정수) 버퍼 변수자료형(%d: 문자→9엔터 X 정수→9 O 인식) 매칭 O
                     // scanf 실행 성공:  정수 1개 9 입력/저장[%d 정수자료형 9(4 Bytes) E 주소값(&)을 시작으로 입력/저장] → 버퍼 변수(문자→엔터) 유지
    printf("---Output---\n");
    printf("<%d>\n", E); // %d → 선언한 자료형크기 만큼 정수 1개 9 출력

    int F;
    printf("---Input---\n");
    scanf("%c", &F); // scanf 실행:  입력서식(%c→문자) 버퍼 변수자료형(문자→엔터) 매칭 O
                     // scanf 실행 성공:  문자 1개 엔터 입력/저장[%c 문자자료형 엔터(1 Byte) C 주소값(&)을 시작으로 입력/저장]
    printf("---Output---\n");
    printf("<%c>\n", F); // %d → 선언한 자료형크기 만큼 문자 1개 엔터 출력

    return 0;
}

