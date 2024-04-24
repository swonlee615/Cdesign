
#include <stdio.h>   // 라이브러리 → 함수 실행 코드들의 저장소
#include <stdbool.h> // 라이브러리 추가

void main() // 메인함수
{ // 메인 함수 시작
    bool A = true; // bool A:  bool 형태로 변수 A라는 이름으로 메모리박스 1개'선언'(메모리박스 내에 A라는 이름으로 입력/저장 공간 1개 할당)
                   // =: '동시에' 할당된 메모리박스 공간에 true를 사용하여 1이라는 정수로 '초기화'(입력/저장)
                   // → bool형 메모리박스 1개 '활성화'하여 변수 값(= 1) 입력/저장   
                   // → true에 마우스오버 시 1(= 참) 확인 가능  
    
    bool B = false; // bool B:  bool 형태로 변수 B라는 이름으로 메모리박스 1개'선언'(메모리박스 내에 B라는 이름으로 입력/저장 공간 1개 할당)
                    // =: '동시에' 할당된 메모리박스 공간에 false를 사용하여 0이라는 정수로 '초기화'(입력/저장)
                    // → bool형 메모리박스 1개 '활성화'하여 변수 값(= 0) 입력/저장   
                    // → false에 마우스오버 시 0(= 거짓) 확인 가능 

    // printf("%b", A);// 이와 같은 출력서식 없음
    
    printf("%d\n", A); // " "안의 '형태'로 출력해라(%d → 정수를 받아라, \n → 줄바꿈 해라):  %d 자리에 변수 A의 값(true = 1 = 정수)을 받아 출력하고 줄바꿈 해라
    printf("%d\n", B); // " "안의 '형태'로 출력해라(%d → 정수를 받아라, \n → 줄바꿈 해라):  %d 자리에 변수 A의 값(false = 0 = 정수)을 받아 출력하고 줄바꿈 해라
} // 메인 함수 끝
