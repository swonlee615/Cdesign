
// 입력서식 & '초기화'자료형 일치 O
// 예: Y 입력/저장 / 8 입력/저장

#include <stdio.h>

int main()
{
    char A;
    printf("---Input---\n"); 
    scanf("%c", &A);     // 입력서식(%c→문자)와 '초기화' 변수자료형(문자→Y엔터) 매칭 O
                         // scanf 실행 성공:  문자 Y 입력/저장[%c 문자자료형 Y(1 Byte) A 주소값(&)을 시작으로 입력/저장]  →  '초기화' 변수(문자→엔터) 버퍼 유지 
    printf("---Output---\n");
    printf("<%c>\n", A); // %c → 선언한 자료형크기 만큼 문자 1개 Y 출력 
    
    char B;
    printf("---Input---\n"); 
    scanf("%c", &B);     // scanf 실행:  입력서식(%c→문자) 버퍼 변수자료형(문자→엔터) 매칭 O
                         // scanf 실행 성공:  문자 1개 엔터(LF) 입력/저장[%c 문자자료형 엔터(1 Byte) B 주소값(&)을 시작으로 입력/저장] 
    printf("---Output---\n");
    printf("<%d>\n", B); // %d → 선언한 자료형크기 만큼 문자 1개 엔터 ASCII Code 변환 정수 1개 10 출력 
    
    char C;
    printf("---Input---\n"); 
    scanf("%d", &C);     // scanf 실행:  입력서식(%d→정수) '초기화' 변수자료형(문자→Y) 매칭 X
                         // scanf 실행 실패:  쓰레기값[예: 쓰레기값 0 = char 자료형크기 1 Byte 만큼 정수 0 (1 Bytes = 8 Bits = 2진수 00000000 = 10진수 0)]  
                         //                   → '초기화' 변수(문자 → Y, 엔터) 버퍼 유지
    printf("---Output---\n");
    printf("<%d>\n", C); // %d → 선언한 자료형크기 만큼 정수 1개 쓰레기값 출력(예: 정수 1개 0)
    
    char D;
    printf("---Input---\n"); 
    scanf("%d", &D); // scanf 실행:  입력서식(%d→정수)와 버퍼 변수자료형(문자→Y)이 매칭 X
                     // scanf 실행 실패:  쓰레기값[예: 쓰레기값 0 = char C 메모리박스 쓰레기값 관련 X = char 자료형크기 1 Byte 정수값 0 출력(1 Bytes = 8 Bits = 2진수 00000000 = 10진수 0]) 
                     //                   → 버퍼 변수(문자 → Y, 엔터) 유지
    printf("---Output---\n"); 
    printf("<%c>\n", D); // %c → 선언한 자료형크기 만큼 문자 1개 쓰레기값 출력(예: 정수 1개 0 ASCII Code 변환 문자 1개 null)
    
    char E;
    printf("---Input---\n"); 
    scanf("%c", &E); // scanf 실행:  입력서식(%c→문자) 버퍼 변수자료형(문자→Y엔터) 매칭 O
                     // scanf 실행 성공:  문자 1개 Y 입력/저장[%c 문자자료형 Y(1 Byte) E 주소값(&)을 시작으로 입력/저장]  →  버퍼 변수(문자→엔터) 유지
    printf("---Output---\n"); 
    printf("<%c>\n", E); // %c → 선언한 자료형크기 만큼 문자 1개 Y 출력 

    char F;
    printf("---Input---\n"); 
    scanf("%c", &F); // scanf 실행:  입력서식(%c→문자) 버퍼 변수자료형(문자→엔터) 매칭 O
                     // scanf 실행 성공:  문자 1개 엔터 입력/저장[%c 문자자료형 엔터(1 Byte) F 주소값(&)을 시작으로 입력/저장]
    printf("---Output---\n"); 
    printf("<%c>\n", F); // %c → 선언한 자료형크기 만큼 문자 1개 엔터 출력 

    return 0;
}

