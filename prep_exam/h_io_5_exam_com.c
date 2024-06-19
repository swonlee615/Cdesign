
// 선언 자료형 & 초기화 자료형 일치 X
// 배열크기 > 정수/소수'열', 문자'열'

// 선언 '동시' 초기화 
#include <stdio.h>

int main()
{
    char A[4] = {1, 2, 3, '\0'};        // 정수(4 Bytes) → 선언 문자자료형 크기(1 Byte)  만큼 입력/저장 
    char B[4] = {88, 89, 90, '\0'};     // 정수(4 Bytes) → 선언 문자자료형 크기(1 Byte)  만큼 입력/저장 
    char C[4] = {'X', 'Y', 'Z', '\0'};  //  문자(1 Byte) → 선언 문자자료형 크기(1 Byte)  만큼 입력/저장 
    int D[4] = {'X', 'Y', 'Z', '\0'};   //  문자(1 Byte) → 선언 문자자료형 크기(4 Bytes) 만큼 입력/저장 
    float E[4] ={'X', 'Y', 'Z', '\0'};  //  문자(1 Byte) → 선언 문자자료형 크기(4 Bytes) 만큼 입력/저장

    printf("---Array Type char: Simultaneous Input & Output---\n");
    printf("<%s>\n", A);  // ASCII Code 변환 문자 '표면'출력 X // <> : "값이 표면으로 드러나지 않는다"
    printf("<%s>\n", B);  // ASCII Code 변환 문자  출력 O
    printf("<%s>\n", C);
    printf("---Array Type int: Simultaneous Input & Output---\n");
    printf("<%s>\n", D);  // %s → /0=null  문자 전까지 문자'열' 출력 → 1 Byte(문자)씩 출력: D[0]번째자리의 2번째 Byte가 00000000=\0=null임을 알수 있음
    printf("<%d> <%d> <%d> <%d>\n", D[0], D[1], D[2], D[3]);
    printf("<%c> <%c> <%c> <%c>\n", D[0], D[1], D[2], D[3]); // ASCII Code 변환 문자 출력 → 선언한 자료형크기(4 Bytes)만큼 문자 1개 출력 →  D[0], D[1], D[2], D[3]의 0번째 Byte 출력
    printf("---Array Type float: Simultaneous Input & Output---\n");
    printf("<%s>\n", E);  // %s → /0=null  문자 전까지 문자'열' 출력 → 1 Byte(문자)씩 출력: E[0]번째자리의 2번째 Byte가 00000000=\0=null임을 알수 있음
    printf("<%f> <%f> <%f> <%f>\n", E[0], E[1], E[2], E[3]);
    printf("<%c> <%c> <%c> <%c>\n", E[0], E[1], E[2], E[3]); // ASCII Code 변환 문자 출력 → 선언한 자료형크기(4 Bytes)만큼 문자 1개 출력 →  E[0], E[1], E[2], E[3]의 0번째 Byte 출력

    return 0;
}