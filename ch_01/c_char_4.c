#include <stdio.h> // 라이브러리 → 함수(e.g. scanf, printf, etc.) 실행 코드들의 저장소

void main() // 메인 함수
{ // 메인 함수 시작

    // 메인 함수 내에 여러 자료형/변수 '선언'(메모리 할당) 및 '초기화'(입력/저장) 가능
    int number_1 = 65; //int: 4Bytes
    int number_2 = 'A';

    char text_1 = 'X';
    char text_2 = 88;
    char text_3 = '8';

    printf("%d %c\n", number_1, number_1); // " "안의 '형태'로 출력해라(%d → 정수를 받아라, %c → 문자를 받아라,\n → 줄바꿈 해라)
                                           // ➝ 1) %d 자리에 변수 number_1의 값을 받아 출력하고 2) %c 자리에 변수 number_1의 값을 받아 출력(정수 →ASCII Code 변환→ 문자)하고 3) 줄바꿈 해라
    printf("%d %c\n", number_2, number_2); // " "안의 '형태'로 출력해라(%d → 정수를 받아라, %c → 문자를 받아라,\n → 줄바꿈 해라)
                                           // ➝ 1) %d 자리에 변수 number_2의 값을 받아 출력(문자 →ASCII Code 변환→ 정수)하고 2) %c 자리에 변수 number_2의 값을 받아 출력하고 3) 줄바꿈 해라
    
    printf("------------------------\n");

    printf("%c %d\n", text_1, text_1); // " "안의 '형태'로 출력해라(%c → 문자를 받아라, %d → 정수를 받아라,\n → 줄바꿈 해라)
                                       // ➝ 1) %c 자리에 변수 text_1의 값을 받아 출력하고 2) %d 자리에 변수 text_1의 값을 받아 출력(문자 →ASCII Code 변환→ 정수)하고 3) 줄바꿈 해라
    printf("%c %d\n", text_2, text_2); // " "안의 '형태'로 출력해라(%c → 문자를 받아라, %d → 정수를 받아라,\n → 줄바꿈 해라)
                                       // ➝ 1) %c 자리에 변수 text_2의 값을 받아 출력(정수 →ASCII Code 변환→ 문자)하고 2) %d 자리에 변수 text_2의 값을 받아 출력하고 3) 줄바꿈 해라
    printf("%c %d\n", text_3, text_3); // " "안의 '형태'로 출력해라(%c → 문자를 받아라, %d → 정수를 받아라,\n → 줄바꿈 해라)
                                       // ➝ 1) %c 자리에 변수 text_3의 값을 받아 출력하고 2) %d 자리에 변수 text_3의 값을 받아 출력(문자 →ASCII Code 변환→ 정수)하고 3) 줄바꿈 해라
    printf("%d %d %d %d %d\n", &number_1, &number_2, &text_1, &text_2, &text_3);
} // 메인 함수 끝

