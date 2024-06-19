// 배열크기 X  /  공백문자 O  /  문자 → %c  문자'열 → %s
// 예: 1스페이스2스페이스345 

#include <stdio.h>

int main()
{
    char A[3] = {0};
    printf("---Input---\n");
    scanf("%c", &A);          // 입력서식(%c→문자) '초기화' 변수자료형(문자→1스페이스2스페이스345엔터) 매칭 O 
                              // scanf 실행 성공:  문자 1개 1 입력/저장[%c 문자자료형 1(1 Byte) A 주소값(&)을 시작으로 입력/저장]  →  '초기화' 변수(문자→스페이스2스페이스345엔터) 버퍼 유지  
    printf("---Output---\n"); 
    printf("<%s>\n", A);      // %c → 선언한 자료형크기 만큼 문자 1개 A 출력

    char B;
    printf("---Input---\n");
    scanf("%c", &B);          // 입력서식(%c→문자) 버퍼 변수자료형(문자→스페이스2스페이스345엔터) 매칭 O 
                              // scanf 실행 성공:  문자 1개 스페이스 입력/저장[%c 문자자료형 스페이스(1 Byte) B 주소값(&)을 시작으로 입력/저장]  →  버퍼 변수(문자→2스페이스345엔터) 버퍼 유지  
    printf("---Output---\n"); 
    printf("<%c>\n", B);      // %c → 선언한 자료형크기 만큼 문자 1개 스페이스 출력

    char C;
    printf("---Input---\n");
    scanf("%c", &C);          // 입력서식(%c→문자) 버퍼 변수자료형(문자→2스페이스345엔터) 매칭 O 
                              // scanf 실행 성공:  문자 1개 2 입력/저장[%c 문자자료형 2(1 Byte) C 주소값(&)을 시작으로 입력/저장]  →  버퍼 변수(문자→스페이스345엔터) 버퍼 유지  
    printf("---Output---\n"); 
    printf("<%c>\n", C);      // %c → 선언한 자료형크기 만큼 문자 1개 2 출력

    char D[3] = {0};          // 문자인데 배열로 선언했기 때문에 \0값 선언 -- %s로 출력하기 위함
    printf("---Input---\n");
    scanf("%c", &D);          // 입력서식(%c→문자) 버퍼 변수자료형(문자→스페이스345엔터) 매칭 O 
                              // scanf 실행 성공:  문자 1개 스페이스 입력/저장[%c 문자자료형 스페이스(1 Byte) D 주소값(&)을 시작으로 입력/저장]  →  버퍼 변수(문자→345엔터) 버퍼 유지  
    printf("---Output---\n"); 
    printf("<%s>\n", D);      // %c → 선언한 자료형크기 만큼 문자 1개 스페이스 출력
 
    char E;
    printf("---Input---\n");
    scanf("%s", &E);          // 입력서식(%s→문자'열') 버퍼 변수자료형(문자→345엔터) 매칭 O 
                              // scanf 실행 성공:  char E 메모리박스 '초기화' 문자 1개 3 + char D 메모리박스 위치 '초기화'문자 2개 45 (공백문자 전까지) + 문자 1개 \0=null 생성  → '초기화' 변수(문자→엔터) 버퍼 유지
    printf("---Output---\n"); 
    printf("<%c>\n", E);      // %c → 선언한 자료형크기 만큼 문자 1개 3 출력
    printf("<%s>\n", D);      // %s → 문자 2개 45 출력: \0=null 문자 앞까지
    printf("<%c>\n", C);      // %c → 선언한 자료형크기 만큼 문자 1개 2 출력
    printf("<%c>\n", B);      // %c → 선언한 자료형크기 만큼 문자 1개 스페이스 출력
    printf("<%s>\n", A);      // %c → 선언한 자료형크기 만큼 문자 1개 A 출력      

    return 0;
}