
// 선언 자료형 & 입력서식 자료형 & 초기화 자료형 일치 X
// 배열크기 < 정수/소수'열',  배열크기 < 문자'열'

// 선언 '후' 초기화:  자료형 1개 & 자료형 배열
#include <stdio.h>

// X → 123456789AB → 12345
int main()
{
    int A;
    float B;
    char C;
    char D[2] = {0};
    char E[3];
    char F[2];

    printf("---input---\n");
    scanf("%d", &A);    // 예: 입력서식(%d→정수자료형)  초기화변수 문자자료형(문자→X) 매칭 X → scanf 실행 실패 → 초기화변수(문자→X, 엔터) 버퍼 유지
    scanf("%f", &B);    // 예: 입력서식(%f→소수자료형)  초기화변수 문자자료형(문자→X) 매칭 X → scanf 실행 실패 → 버퍼변수(문자→X, 엔터) 유지 -- 들어가지 못해서 쓰레기값이 된 애들 // -- 내가 처음 입력한 애들은 여전히 버퍼에 유지
    scanf("%c", &C);    // 예: %c 버퍼 문자자료형 X(1 Byte) C 주소값(&)을 시작으로 입력/저장 → 버퍼변수(문자→엔터) 유지  
    scanf("%c", &D);    // 예: %c 버퍼 문자자료형 엔터(1 Byte) D 주소값(&)을 시작으로 입력/저장(char D[2]: 메모리박스 2개 활성화)
    scanf("%s", &E);    // 예: %s 문자열자료형 123456789AB 엔터 → 공백문자(엔터)전 E 주소값(&)을 시작으로 123456789AB 입력/저장 + \0=null 문자 생성(char E[3]; 메모리박스 3개 활성화) → 문자 엔터 버퍼 유지
    scanf("%s", &F);    // 예: %s 버퍼 문자 엔터 삭제 → %s 문자열자료형 12345엔터 → 공백문자(엔터)전 F 주소값(&)을 시작으로 12345 입력/저장 + \0=null 문자 생성(char F[2]; 메모리박스 2개 활성화) → 문자 엔터 버퍼 유지
    printf("---Output---\n");
    printf("<%d> <%f> <%c> <%s> <%s> <%s> ", A, B, C, D, E, F);

    return 0;
}

// 빅엔디안으로 바꾸는 이유/경우는??? : 출력할 때는 빅엔디안으로 바꿔야함..~ 입력은 리틀로 되어도..