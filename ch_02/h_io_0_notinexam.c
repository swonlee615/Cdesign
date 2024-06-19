
#include <stdio.h>

int main ()
{
    char Z = 1876824;         // 4 Bytes 크기 정수 1개(1876824)를  1 Byte 메모리박스(Z)만큼 입력/저장   
    printf("%d\n", Z);
    char *ptr = &Z;           
    printf("<%c>\n", ptr[0]); // 2진수 01011000 = 10진수 88
    printf("<%c>\n", ptr[1]); // 쓰레기값 ASCII Code 변환
    printf("<%c>\n", ptr[2]); // 쓰레기값 ASCII Code 변환
    printf("<%c>\n", ptr[3]); // 쓰레기값 (예: a ASCII Code 변환 = 01100001)

    printf("<%x>\n", ptr[0]); 
    printf("<%x>\n", ptr[1]); 
    printf("<%x>\n", ptr[2]); 
    printf("<%x>\n", ptr[3]); 
    return 0;
}