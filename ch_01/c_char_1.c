
#include <stdio.h> // 라이브러리 → 함수(e.g. scanf, printf, etc.) 실행 코드들의 저장소

void main() // 메인 함수
{ // 메인 함수 시작
    char C = 'm'; // char C:  문자의 자료형태로 변수 C라는 이름으로 '선언'(메모리박스 내에 C라는 이름으로 1 Byte 크기의 입력/저장 공간 1개 할당)
                  // =:  '동시에' 할당된 메모리박스 공간에 m라는 문자로 '초기화'(입력/저장)
                  // → 문자형 메모리박스 1개 '활성화'하여 변수 값(= m) 입력/저장

    printf("%c\n", C); // " "안의 '형태'로 출력해라(%c → 문자를 받아라, \n → 줄바꿈 해라):  %c 자리에 변수 C의 값을 받아 출력하고 줄바꿈 해라
    printf("%d\n", sizeof(C)); // " "안의 '형태'로 출력해라(%d → 정수를 받아라, \n → 줄바꿈 해라):  %d 자리에 변수 C의 자료형의 크기(=정수)를 받아 출력하고 줄바꿈 해라
    printf("%d\n", &C); //  " "안의 '형태'로 출력해라(%d → 정수를 받아라, \n → 줄바꿈 해라):  %d 자리에 C의 전체 주소값(= 정수)을 받아 출력하고 줄바꿈 해라
    
} // 메인 함수 끝
