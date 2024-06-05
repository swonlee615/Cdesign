
#include <stdio.h>

// scanf %c
int main()
{
    // 선언 '후' 초기화 → 예: ABCD 입력/저장
    //                       문자 자료형 메모리박스 10개 문자'열' 선언 '후' 변수 문자 ABCD 초기화
    char K[10] = {0}; //null 세팅 한 이유 : 현재 자동으로 null 생성 불가하기 때문

    printf("---Input---\n");
    scanf("%c", &K);           // 입력서식(%c→문자) '초기화' 변수자료형(문자→ABCD엔터) 매칭 O
                               // scanf 실행 성공:  문자 1개 A 입력/저장[%c 문자자료형 A(1 Byte) K 주소값(&)을 시작으로 입력/저장]  →  '초기화' 변수(문자→BCD엔터) 버퍼 유지 -- %s로 출력 가능한 상태
    printf("---Output---\n");
    printf("%s\n", K);         // %s → 문자 1개 A 출력

    printf("---Input---\n");
    scanf("%c", &K);           // 입력서식(%c→문자) '초기화' 변수자료형(문자→BCD엔터) 매칭 O
                               // scanf 실행 성공:  문자 1개 B 입력/저장[%c 문자자료형 B(1 Byte) K 주소값(&)을 시작으로 입력/저장]  →  '초기화' 변수(문자→CD엔터) 버퍼 유지
    printf("---Output---\n");
    printf("%s\n", K);         // %s → 문자 1개 B 출력

    printf("---Input---\n");
    scanf("%c", &K);           // 입력서식(%c→문자) '초기화' 변수자료형(문자→CD엔터) 매칭 O
                               // scanf 실행 성공:  문자 1개 C 입력/저장[%c 문자자료형 C(1 Byte) K 주소값(&)을 시작으로 입력/저장]  →  '초기화' 변수(문자→D엔터) 버퍼 유지
    printf("---Output---\n");
    printf("%s\n", K);         // %s → 문자 1개 C 출력

    printf("---Input---\n");
    scanf("%c", &K);           // 입력서식(%c→문자) '초기화' 변수자료형(문자→D엔터) 매칭 O
                               // scanf 실행 성공:  문자 1개 D 입력/저장[%c 문자자료형 D(1 Byte) K 주소값(&)을 시작으로 입력/저장]  →  '초기화' 변수(문자→엔터) 버퍼 유지
    printf("---Output---\n");
    printf("%s\n", K);         // %s → 문자 1개 D 출력

    printf("---Input---\n");
    scanf("%c", &K);           // 입력서식(%c→문자) '초기화' 변수자료형(문자→엔터) 매칭 O
                               // scanf 실행 성공:  문자 1개 엔터 입력/저장[%c 문자자료형 엔터(1 Byte) K 주소값(&)을 시작으로 입력/저장]
    printf("---Output---\n");
    printf("<%s>\n", K);       // %s → 문자 1개 엔터 출력

    return 0;
}