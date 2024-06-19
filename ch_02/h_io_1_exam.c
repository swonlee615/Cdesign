
// 선언 자료형 & 초기화 자료형 일치 O 
// 배열크기 ≥ 정수/소수'열', 문자'열'

// 선언 모두 '동시' 초기화 
#include <stdio.h>

int main()
{
    int A = 2023;     //  정수자료형 2023(4 Bytes) → 선언 문자자료형 크기(4 Bytes) 만큼 입력/저장 
    float B = 20.23;  // 소수자료형 20.23(4 Bytes) → 선언 문자자료형 크기(4 Bytes) 만큼 입력/저장 
    char C = 'X';     // 문자자료형     X(1 Bytes) → 선언 문자자료형 크기(1 Byte)  만큼 입력/저장 
    char D = 88;      // 비정상 -- 정수자료형 88(4 Bytes) → 선언 문자자료형 크기(1 Byte)  만큼 입력/저장 
    int E[4];         // int E[4] = {1, 2, 3}; -- 마지막 인덱스에는 쓰레기값 등이 들어가겠쥐
    E[0] = 1;
    E[1] = 2;
    E[2] = 3;           // 위에 랑 같은거..
    float F[4];       // float F[4] = {1.1, 1.2, 1.3}; -- 마지막 인덱스에는 쓰레기값 등이 들어가겠쥐
    F[0] = 1.1;
    F[1] = 2.2;
    F[2] = 3.3;
    char G[4] = {0};  // char G[4] = {'A', 'B', 'C', '\0'}; -- null값 설정
    G[0] = 'A';
    G[1] = 'B';
    G[2] = 'C';
    
    printf("---Data Type: Simultaneous Input & Output---\n");       // 선언 동시 초기화에 대항 입출력
    printf("<%d> <%f> <%c> <%d> <%c> <%d>\n", A, B, C, C, D, D);     // printf == 선언한 자료형크기 만큼 각각 출력서식 형태로 출력
    printf("---Array Type int: Simultaneous Input & Output---\n");
    printf("<%d> <%d> <%d>\n", E[0], E[1], E[2]);                    // 선언한 자료형크기 만큼 각각 정수 형태로 출력
    printf("---Array Type flaot: Simultaneous Input & Output---\n");
    printf("<%f> <%f> <%f>\n", F[0], F[1], F[2]);                    // 선언한 자료형크기 만큼 각각 소수 형태로 출력
    printf("---Array Type char: Simultaneous Input & Output---\n");
    printf("<%c> <%c> <%c>\n", G[0], G[1], G[2]);                    // 선언한 자료형크기 만큼 각각 문자 형태로 출력
    printf("<%s>\n", G);

    return 0;
}

// 교재 사진과 다른 점 : E와 F에 null setting 안되어있음
        // int, float에 null setting 할 필요 없음..?? 왜? : 문자열이 아니기 때문에 null 전까지 출력할 필요가 없음
        // %s %c의 경우만 null 설정 신경쓰기