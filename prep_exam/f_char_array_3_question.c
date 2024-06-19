// 배열크기 O  /  공백문자 O  /  문자 → %s
// 예:  스페이스스페이스JK스페이스스페이스LMN엔터 입력/저장 

#include <stdio.h>

int main()
{
    char I[10] = {0};

    printf("---Input---\n");
    scanf("%s", &I);         // 입력서식(%s→문자'열') '초기화' 변수자료형(문자→스페이스스페이스JK스페이스스페이스LMN엔터) 매칭 O → 공백문자 예외문자 Set UP 
                             // scanf 실행 대기:  문자 1개 스페이스 입력/저장 X 버퍼유지 O  →  버퍼 변수(문자→스페이스) 삭제  →  '초기화' 변수(문자→스페이스JK스페이스스페이스LMN엔터) 버퍼 유지 
                             // scanf 실행 대기:  문자 1개 스페이스 입력/저장 X 버퍼유지 O  →  버퍼 변수(문자→스페이스) 삭제  →  버퍼 변수(문자→JK스페이스스페이스LMN엔터) 유지
                             // scanf 실행: 입력서식(%s→문자'열') 버퍼 변수자료형(문자'열'→JK스페이스스페이스LMN엔터) 매칭 O
                             // scanf 실행 성공:  I 주소값(&)을 시작으로 문자 2개 JK 입력/저장(공백문자 전까지) + 문자 1개 \0=null 생성  →  버퍼 변수(문자→스페이스스페이스LMN엔터)유지
    printf("---Output---\n"); 
    printf("<%s>\n", I);     // %s → 문자 2개 JK 출력
    printf("<%c> <%c>\n", I[0], I[1]); // %c → 선언한 자료형크기 만큼 문자 1개 J K 각각 출력
    printf("<%c>\n", I[2] ); // \0=null 문자 생성 위치 

    printf("---Input---\n");
    scanf("%s", &I);         // scanf 실행:  문자 1개 스페이스 입력/저장 X 버퍼유지 O →  버퍼 변수(문자→스페이스) 삭제  →  버퍼 변수(문자→스페이스LMN엔터) 유지
                             // scanf 실행:  문자 1개 스페이스 입력/저장 X 버퍼유지 O →  버퍼 변수(문자→스페이스) 삭제  →  버퍼 변수(문자→LMN엔터) 유지
                             // scanf 실행:  입력서식(%s→문자'열') 버퍼 변수자료형(문자→LMN엔터) 매칭 O
                             // scanf 실행 성공:  I 주소값(&)을 시작으로 문자 3개 LMN 입력/저장(공백문자 전까지) + 문자 1개 \0=null 생성   →  버퍼 변수(문자→엔터) 유지  
    printf("---Output---\n"); 
    printf("<%s>\n", I);     // %s → 문자 3개 LMN 출력
    printf("<%c> <%c> <%c>\n", I[0], I[1], I[2]); // %c → 선언한 자료형크기 만큼 문자 1개 L M N 각각 출력
    printf("<%c>\n", I[3] ); // \0=null 문자 생성 위치 

    printf("---Input---\n");
    scanf("%c", &I);         // scanf 실행:  입력서식(%c→문자) 버퍼 변수자료형(문자→엔터) 매칭 O
                             // scanf 실행 성공:  문자 1개 엔터 입력/저장[%c 문자자료형 엔터(1 Byte) I 주소값(&)을 시작으로 입력/저장]   
    printf("---Output---\n"); 
    printf("<%c>\n", I[0]);  // %c → 선언한 자료형크기 만큼 문자 1개 엔터 출력
    printf("<%c>\n<%c> <%c>\n", I[0], I[1], I[2]); // %c → 선언한 자료형크기 만큼 문자 3개 엔터 M N 각각 출력
    printf("<%s>\n", I);
   
    return 0;
}