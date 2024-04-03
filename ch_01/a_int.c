
#include <stdio.h> // 라이브러리 → 함수(e.g. scanf, printf, etc.) 실행 코드들의 저장소

void main() // 메인 함수 // void : '공백'을 반환하는 함수
{ // 메인 함수 시작 // '코드블럭'
    int A = 5; // int A:  정수의 자료형태로 변수 A라는 이름으로 '선언'(메모리박스 내에 A라는 이름으로 4 Bytes 크기의 입력/저장 공간 1개 할당)
               // = 5:  '동시에' 할당된 메모리박스 공간에 5라는 정수로 '초기화'(입력/저장)
               // → 정수형 메모리박스 1개 '할당'하여 변수 값(= 5) '초기화'(입력/저장)

    printf("%d\n", A);         // " "안의 '형태'로 출력해라(%d → 정수를 받아라, \n → 줄바꿈 해라):  %d 자리에 변수 A의 값을 받아 출력하고 줄바꿈 해라
    printf("%d\n", sizeof(A)); // " "안의 '형태'로 출력해라(%d → 정수를 받아라, \n → 줄바꿈 해라):  %d 자리에 변수 A의 '자료형의 크기(=정수)'를 받아 출력하고 줄바꿈 해라
    printf("%d\n", &A);        // " "안의 '형태'로 출력해라(%d → 정수를 받아라, \n → 줄바꿈 해라):  %d 자리에 A의 전체 주소값(= 정수)을 받아 출력하고 줄바꿈 해라
                                // '&' : 해당 공간의 전체 주소값 -- 출력 시에는 0번째 주소값과 동일하게 출력
                            
    // printf("%x\n", &A);        
    // printf("%X\n", &A);        
    // printf("%p\n", &A);        
} // 메인 함수 끝

// 주석처리는 컴파일 단계에서 삭제됨 
// int는 4Bytes


// 크기:   %d  정수 출력서식 +  sizeof 함수
// 주소값:   %d  정수 출력서식 +  & 
// \n:   줄바꿈