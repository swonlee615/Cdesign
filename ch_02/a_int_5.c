// 입력서식 & '초기화'자료형 일치 X
// 예: Y 입력/저장

#include <stdio.h>

int main()
{
    int A;
    printf("---Input---\n");
    scanf("%d", &A);     // 입력서식(%d→정수) '초기화' 변수자료형(문자→Y) 매칭 X
                         // scanf 실행 실패:  쓰레기값(예: 쓰레기값 0 = int 자료형크기 4 Bytes 정수값 0) → '초기화' 변수(Y, 엔터) 버퍼 유지
    printf("---Output---\n");
    printf("<%d>\n", A); // %d → 선언한 자료형크기 만큼 쓰레기값 정수 1개 출력(예: 정수 0)
    
    int B;
    printf("---Input---\n");
    scanf("%d", &B);     // scanf 실행:  입력서식(%d→정수) '버퍼 변수자료형(문자→Y) 매칭 X
                         // scanf 실행 실패: 쓰레기값(예: 쓰레기값 0 = int A 메모리박스 쓰레기값 관련 X = int 자료형크기 4 Bytes 정수 0) → '초기화' 변수(Y, 엔터) 버퍼 유지
    printf("---Output---\n");
    printf("<%c>\n", B); // %c → 선언한 자료형크기 만큼 쓰레기값 정수 ASCII Code 변환 문자 1개 출력(예: 정수 0 ASCII 변환 null)
    
    int C;
    printf("---Input---\n");
    scanf("%c", &C);     // scanf 실행:  입력서식(%c→문자) 버퍼 변수자료형(문자→Y) 매칭 O
                         // scanf 실행 성공:  버퍼 변수 문자 1개 Y 입력/저장[%c 문자자료형 Y(1 Byte) C 주소값(&)을 시작으로 입력/저장] → 버퍼 변수 엔터 유지
    printf("---Output---\n");
    printf("<%c>\n", C); // %c → 선언한 자료형크기 만큼 문자 1개 Y 출력
    
    int D;
    printf("---Input---\n");
    scanf("%c", &D);     // scanf 실행:  입력서식(%c→문자) 버퍼 변수자료형(문자→엔터) 매칭 O
                         // scanf 실행 성공:  버퍼 변수 문자 1개 엔터 입력/저장[%c 문자자료형 엔터(1 Byte) C 주소값(&)을 시작으로 입력/저장]
    printf("---Output---\n");
    printf("<%d>\n", D); // %d → int 자료형크기 4 Bytes:  [(3 Bytes = 쓰레기값) + (1 Bytes = 문자 엔터(LF-Line Feed) ASCII Code 변환 정수 1개 10)] 출력
    
    return 0;
}

