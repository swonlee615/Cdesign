
// 선언 자료형 & 입력서식 자료형 & 초기화 자료형 일치 X 
// 자료형 1개

// 선언 '후' 초기화
#include <stdio.h>

// 예: X → 88 → 89 → Y 입력/저장
int main()
{
    char A;
    char B;       
    char C;
    char D;
    char E;
    char F;     
    int G;  
    float H;
    char I;
    char J;

    printf("---input---\n");
    scanf("%c", &A);     // 예: %c 문자자료형 X(1 Byte) A 주소값(&)을 시작으로 입력/저장 → 문자 엔터 버퍼 유지 
    scanf("%c", &B);     // 예: %c 버퍼 문자자료형 엔터(1 Byte) B 주소값(&)을 시작으로 입력/저장
    scanf("%d", &C);     // 예: %d 정수자료형 88(4 Bytes) C 주소값(&)을 시작으로 입력/저장 → 문자 엔터 버퍼 유지 
    scanf("%c", &D);     // 예: %c 버퍼 문자자료형 엔터(1 Byte) D 주소값(&)을 시작으로 입력/저장  
    scanf("%c", &E);     // 예: %c 문자자료형 89(2 Bytes) E 주소값(&)을 시작으로 입력/저장 → 문자 앞자리 8(1 Byte) 주소값(&)을 시작으로 입력/저장 → 문자 뒷자리 9 + 문자 엔터 버퍼 유지  
    scanf("%c", &F);     // 예: %c 문자자료형 9(1 Byte) F 주소값(&)을 시작으로 입력/저장 → 문자 엔터 버퍼 유지 
    scanf("%d", &G);     // 예: 버퍼 엔터 삭제 → 입력대기 → %d 문자 Y 입력/저장 실패 → 문자 Y엔터 버퍼 유지  
    scanf("%f", &H);     // 예: %f 문자 Y 입력/저장 실패 → 문자 Y엔터 버퍼 유지  
    scanf("%c", &I);     // 예: %c 버퍼 문자자료형 Y(1 Byte) I 주소값(&)을 시작으로 입력/저장 → 문자 엔터 버퍼 유지
    scanf("%c", &J);     // 예: %c 버퍼 문자자료형 엔터(1 Byte) J 주소값(&)을 시작으로 입력/저장  
    printf("---Output---\n");
    printf("<%d> <%c>\n<%d> <%c>\n<%d> <%c>\n<%d> <%c>\n<%d>\n<%f>\n<%d> <%c>\n<%d> <%c>\n", A, A, C, C, E, E, F, F, G, H, I, I, J, J);

    return 0;
}