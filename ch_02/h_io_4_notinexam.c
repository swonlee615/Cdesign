
// 선언 자료형 & 초기화 자료형 일치 X
// 자료형 1개
//float 오차 -- 시험엔 x

// 선언 '동시' 초기화 
#include <stdio.h>

int main()
{
    char A = 'X';    //     문자 X(1 Byte)  → 선언 문자자료형 크기(1 Byte) 만큼 입력/저장 
    char B = 88;     //    정수 88(4 Bytes) → 선언 문자자료형 크기(1 Byte) 만큼 입력/저장 
    int C = 'X';     //     문자 X(1 Byte)  → 선언 정수자료형 크기(4 Byte) 만큼 입력/저장 
    float D = 88.88; // 소수 88.88(4 Bytes) → 선언 문자자료형 크기(4 Byte) 만큼 입력/저장:  소수 88.88.879997 → float 오차

    printf("---Data Type: Simultaneous Input & Output---\n");
    printf("<%d> <%c>\n<%d> <%c>\n<%d> <%c>\n<%f>\n", A, A, B, B, C, C, D); // 선언한 자료형크기 만큼 각각 출력서식 형태로 출력

    return 0;
}