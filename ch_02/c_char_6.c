
// 문자 2자리 이상 초기화
// 예 AB 입력/저장  (XYZ 입력/저장  /  123 입력저장)

#include <stdio.h>

int main()
{
    char X = 'AB';   // 뒷자리 문자 1개 입력/저장 → B 입력/저장 (XYZ: Z/ 123: 3)

    char Y;
    scanf("%c", &Y); // 앞자리 문자 1개 입력/저장 → A 입력/저장 (XYZ: X / 123: 1) → '초기화' 변수[문자→B(YZ/23), 엔터] 버퍼 유지

    printf("---선언 '동시' 초기화---\n");
    printf("<%c>\n", X); // %d → 문자 1개 B(Z/3) 출력
    printf("<%d>\n", X); // %d → 문자 1개 B(Z/3) ASCII Code 변환 66(90/) 정수 1개 출력
    
    printf("---선언   '후' 초기화---\n");
    printf("<%c>\n", Y); // %c → 문자 1개 A(X/1) 출력
    printf("<%d>\n", Y); // %c → 문자 1개 A(X/1) ASCII Code 변환값 65(88/) 정수 1개 출력

    return 0;
}

