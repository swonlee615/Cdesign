
#include <stdio.h>

// Case 1:  \0=null 문자 Set-Up O?
// main 함수가 2개면 runtime 실행 X -- 이유 : 진입점 지정이 안돼서.. main함수가 진입점인데 2개 이상이면 컴퓨터가 어떤게 진입점인지 알지 X

// int main()
// {
//     int A;
//     float B;
//     char C;
//     char D[5];

//     printf("---int A null---\n<%c>\n", A);
//     printf("---float B null---\n<%c>\n", B);
//     printf("---char C null---\n<%c>\n", C);
//     printf("---char D array null---\n<%c> <%c> <%c> <%c> <%c>\n", D[0], D[1], D[2], D[3], D[4]);
//     printf("---char D array null X???---\n<%c> <%c> <%c> <%c> <%c>\n", D[5], D[6], D[7], D[8], D[9]);      
 
//     return 0;
// }

// Case 2:  \0=null 문자 Set-Up 방법
int main()
{
    // Approach 1
    char A[5] = {'\0', '\0', '\0', '\0', '\0'}; //  전체 \0=null 초기화(입력/저장) 
    printf("---char A array null---\n<%c> <%c> <%c> <%c> <%c>\n", A[0], A[1], A[2], A[3], A[4]);

    // Approach 2-1
    char B[5] = {0, };    // 전체 \0=null 초기화(입력/저장) O 
    printf("---char B array null---\n<%c> <%c> <%c> <%c> <%c>\n", B[0], B[1], B[2], B[3], B[4]);

    char C[5] = {'\0', }; // 전체 \0=null 초기화(입력/저장) O 
    printf("---char C array null---\n<%c> <%c> <%c> <%c> <%c>\n", C[0], C[1], C[2], C[3], C[4]);

    char D[5] = {0};      // 전체 \0=null 초기화(입력/저장) O
    printf("---char D array null---\n<%c> <%c> <%c> <%c> <%c>\n", D[0], D[1], D[2], D[3], D[4]);

    char E[5] = {'\0'};   // 전체 \0=null 초기화(입력/저장) O
    printf("---char E array null---\n<%c> <%c> <%c> <%c> <%c>\n", D[0], D[1], D[2], D[3], D[4]);
    

    // Approach 2-2
    char F[5] = {1};      // 전체 1 초기화(입력/저장) X → C[0] = 1 초기화(입력/저장)
    printf("---char F array 1?---\n[<%c> <%d>] [<%c> <%d>] [<%c> <%d>] [<%c> <%d>] [<%c> <%d>]\n", F[0], F[0], F[1], F[1], F[2], F[2], F[3], F[3], F[4], F[4]);

    char G[5] = {0, };
    G[0] = 1;
    printf("---char D array 0 & null---\n[<%c> <%d>] [<%c> <%d>] [<%c> <%d>] [<%c> <%d>] [<%c> <%d>]\n", G[0], G[0], G[1], G[1], G[2], G[2], G[3], G[3], G[4], G[4]);
 
    return 0;
}

