// 공백문자 O  /  문자 → %s 
// 예:  스페이스스페이스ABCD스페이스EFG엔터 입력/저장

#include <stdio.h>

int main()
{
    char I;

    printf("---Input---\n");
    scanf("%s", &I);         // 입력서식(%s→문자'열') '초기화' 변수자료형(문자→스페이스스페이스ABCD스페이스EFG엔터) 매칭 O  →  공백문자 예외문자 Set UP 
                             // scanf 실행 대기:  문자 1개 스페이스 입력/저장 X 버퍼유지 O  →  버퍼 변수(문자→스페이스) 삭제  →  '초기화' 변수(문자→스페이스ABCD스페이스EFG엔터) 버퍼 유지 
                             // scanf 실행 대기:  문자 1개 스페이스 입력/저장 X 버퍼유지 O  →  버퍼 변수(문자→스페이스) 삭제  →  버퍼 변수(문자→ABCD스페이스EFG엔터) 유지
                             // scanf 실행: 입력서식(%s→문자'열') 버퍼 변수자료형(문자'열'→ABCD스페이스스페이스CD엔터) 매칭 O --- !!ABCD 까지 입력 후 스페이스 만나서 입력 정지!! => \0 생성
                             // scanf 실행 성공:  char I 메모리박스 '활성화' 문자 1개 A 입력/저장 + char I 메모리박스 '생성' 문자 4개 BCD 입력/저장 (공백문자 전까지) + \0=null 문자 생성  →  버퍼 변수(문자→스페이스EFG엔터)유지
    printf("---Output---\n"); 
    printf("<%c>\n", I);     // %c → 선언한 자료형크기 만큼 문자 1개 A 출력:  %s → 컴파일링 오류
    
    printf("---Input---\n");
    scanf("%s", &I);         // 입력서식(%s→문자'열') 버퍼 변수자료형(문자→스페이스EFG엔터) 매칭 O
                             // scanf 실행 대기:  문자 1개 스페이스 입력/저장 X 버퍼유지 O  →  버퍼 변수(문자→스페이스) 삭제  →  '초기화' 변수(문자→EFG엔터) 버퍼 유지 
                             // scanf 실행: 입력서식(%s→문자'열') 버퍼 변수자료형(문자'열'→EFG엔터) 매칭 O
                             // scanf 실행 성공:  char I 메모리박스 '활성화' 문자 1개 E 입력/저장 + char I 메모리박스 '생성' 문자 3개 FG 입력/저장 (공백문자 전까지) + \0=null 문자 생성  →  버퍼 변수(문자→엔터)유지
    printf("---Output---\n"); 
    printf("<%c>\n", I);     // %c → 선언한 자료형크기 만큼 문자 1개 E 출력:  %s → 컴파일링 오류

    printf("---Input---\n");
    scanf("%s", &I);         // 입력서식(%s→문자'열') 버퍼 변수자료형(문자→엔터) 매칭 O  →  공백문자 예외문자 Set UP 
                             // scanf 실행 대기:  문자 1개 엔터 입력/저장 X 버퍼유지 O  →  버퍼 변수(문자→엔터) 삭제  
                             // scanf 실행: 입력대기
    return 0;
}
