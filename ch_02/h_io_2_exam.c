
// 선언 자료형 & 입력서식 자료형 & 초기화 자료형 일치 O 
// 배열크기 ≥ 정수/소수'열', 문자'열'

// 선언 '후' 초기화 
#include <stdio.h>

// Case 1: 입력하는대로 그때그때 출력 (각각 초기화 → 각각 출력) 반복 
int main()
{
    int A;
    float B;
    char C;
    char D;
    char E;
    char F;
    // int/float 배열:  배열위치지정 → 변수입력,  배열크기 ≥ 변수갯수
    char G[5];

    printf("---data Type: afterwards input & output---\n");
    printf("---input int---\n");
    scanf("%d", &A);         // %d 정수자료형 2023 + \n (4 Bytes) A 주소값(&)을 시작으로 입력/저장  → 문자 엔터 버퍼 유지 
    printf("---output int---\n");
    printf("%d\n", A);       // 선언한 자료형크기 만큼 정수 1개 출력
    printf("---input float---\n");       
    scanf("%f", &B);         // 버퍼 문자 엔터 삭제 → %f 소수자료형 20.23(4 Bytes) B 주소값(&)을 시작으로 입력/저장입력/저장 → 문자 엔터 버퍼 유지 
    printf("---output float---\n");
    printf("%f\n", B);       // 선언한 자료형크기 만큼 소수 1개 출력 -- 현재 버퍼에 \n 존재
    scanf("%c", &C);         // %c -- 버퍼 공백문자 인식함 -- 버퍼 문자자료형 엔터(1 Byte) C 주소값(&)을 시작으로 입력/저장
    printf("---input char---\n");
    scanf("%c", &D);         // %c 문자자료형 X(1 Byte) D 주소값(&)을 시작으로 입력/저장 → 문자 엔터 버퍼 유지 
    printf("---output char---\n");
    printf("%c %d\n", D, D); // 선언한 자료형크기 만큼 각각 문자 정수 1개 출력 -- 현재 버퍼에 \n 존재
    scanf("%c", &E);         // %c -- 버퍼 공백문자 인식함 -- 버퍼 문자자료형 엔터(1 Byte) E 주소값(&)을 시작으로 입력/저장
    printf("---input char---\n");
    scanf("%d", &F);         // 선언한 자료형크기 만큼 정수 1개 출력 
                             // %d 정수자료형 88(4 Bytes) F 주소값(&)을 시작으로 입력/저장 → char F→E→D→C 메모리박스 입력/저장(1 Byte + 1 Byte + 1 Byte + 1 Byte = 4 Bytes) → 문자 엔터 버퍼 유지 
                             // D가 먼저 출력된 후 입력/저장 → D 출력 영향 X  
    printf("---output char---\n");
    printf("%c %d\n", F, F); // 선언한 자료형크기 만큼 각각 문자 정수 1개 출력   

    printf("---array type char: afterwards input & output---\n");
    printf("---input array char---\n");
    scanf("%s", &G);         // 버퍼 문자 엔터 삭제 → G 주소값(&)을 시작으로 ABCD 입력/저장
    printf("---output array char---\n");
    printf("%s\n", &G);      // 문자열 출력
    
    return 0;
}

// Case 2: 입력 먼저 다 하고  -- 전체 초기화 → 전체 출력 
int main()
{
    int A;
    float B;
    char C;
    char D;
    char E;
    char F;
    // int/float 배열:  배열위치지정 → 변수입력,  배열크기 ≥ 변수갯수
    char G[5];

    printf("---Data Type: Afterwards Input & Output---\n");
    printf("---Input---\n");
    scanf("%d", &A); // %d 정수자료형 2023(4 Bytes) 입력/저장 → 문자 엔터 버퍼 유지 
    scanf("%f", &B); // 버퍼 문자 엔터 삭제 → %f 소수자료형 20.23(4 Bytes) 입력/저장 → 문자 엔터 버퍼 유지 
    scanf("%c", &C); // %c 버퍼 문자자료형 엔터(1 Byte) 입력/저장
    scanf("%c", &D); // %c 문자자료형 X(1 Byte) 입력/저장 → 문자 엔터 버퍼 유지 
    scanf("%c", &E); // %c 버퍼 문자자료형 엔터(1 Byte) 입력/저장
    scanf("%d", &F); // %d 정수자료형 88(4 Bytes) 입력/저장 → char F→E→D→C 메모리박스 입력/저장(1 Byte + 1 Byte + 1 Byte + 1 Byte = 4 Bytes) 
                    // 뭐가 덮어버림??????? 
                     // →  if scanf("%c", &F); → %c 문자자료형 X(1 Byte) 입력/저장           
    printf("---Output---\n");
    printf("<%d> <%f> <%c> <%d> <%c> <%d>\n", A, B, D, D, F, F); // 70번째 줄 입력/저장으로 인해 예상 D 출력값 상이:  %c → \0=null  %d →  0  출력
                                                                 // 71번째 줄 수정 입력/저장하면 예상 D 출력값 동일:  %c →  X       %d →  88 출력
    printf("---Array Type char: Afterwards Input & Output---\n");
    printf("---Input---\n");
    scanf("%s", &G); // 버퍼 문자 엔터 삭제 → 입력대기 → ABCD 입력/저장 + \0=null 생성 → 문자 엔터 버퍼 유지 
    printf("---Output---\n");
    printf("%s", &G);
    
    return 0;
}

//case 1 2 차이 !!???