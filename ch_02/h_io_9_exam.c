
// 선언 자료형 & 입력서식 자료형 & 초기화 자료형 일치 O 
// 배열크기 < 정수/소수'열',  배열크기 < 문자'열'

// 선언 '후' 초기화:  자료형 1개 & 자료형 배열
#include <stdio.h>

// 2023 → 20.23 → 스페이스ABCD → 엔터ABCD
int main()
{
    int A;
    float B;
    char C;
    char D;
    char E[2];
    char F[3];

    printf("---input---\n");
    scanf("%d", &A);     // 예: %d 정수자료형 2023(4 Bytes) A 주소값(&)을 시작으로 입력/저장 → 문자 엔터 버퍼 유지 
    scanf("%f", &B);     // 예: 버퍼 엔터 삭제 → 입력대기 →  %f 소수자료형 20.23(4 Bytes) B 주소값(&)을 시작으로 입력/저장 → 문자 엔터 버퍼 유지  
    scanf("%c", &C);     // 예: %c 버퍼 문자자료형 엔터(1 Byte) C 주소값(&)을 시작으로 입력/저장   
    scanf("%c", &D);     // 예: 문자'열' 스페이스ABCD 입력 → %c 버퍼 문자자료형 스페이스(1 Byte) D 주소값(&)을 시작으로 입력/저장 → 문자 ABCD엔터 버퍼 유지
    scanf("%s", &E);     // 예: %s 문자열자료형 버퍼 ABCD엔터 → 공백문자(엔터)전 E 주소값(&)을 시작으로 ABCD 입력/저장 ---- !!!!+ \0=null 문자 생성(char E[2]; 메모리박스 2개 활성화) → 문자 엔터 버퍼 유지 !!!! ---- (%s는 엔터 인식 불가 -> 널문자 자체 생성 )
    scanf("%s", &F);     // 예: %s 버퍼 문자 엔터 삭제 → %s 문자열자료형 엔터ABCD엔터 → 첫 문자열 엔터삭제 → 공백문자(엔터)전 F 주소값(&)을 시작으로 ABCD 입력/저장 + \0=null 문자 생성(char F[3]; 메모리박스 3개 활성화) → 문자 엔터 버퍼 유지
    printf("---Output---\n");
    printf("<%d> <%f> <%c> <%c> <%s> <%s>", A, B, C, D, E, F);

    return 0;
}