
#include <stdio.h> // 라이브러리 → 함수 실행 코드들의 저장소

void main() // 메인 함수
{ // 메인 함수 시작
    int A[3] = {1, 23, 456}; // int A[3]:  정수배열 형태로 변수 A라는 이름으로 메모리박스 3개'선언'(메모리박스 내에 A라는 이름으로 입력/저장 공간 3개 할당)
                             // =: '동시에' 할당된 메모리박스 공간에 {  }를 사용하여 1, 23, 456이라는 정수로 '초기화'(입력/저장)
                             // → 정수형 메모리박스 3개(배열) '할당'하여 변수 값(= 1, 23, 456) '차례대로' 입력/저장    
    printf("%d\n", A[0]); // " "안의 '형태'로 출력해라(%d → 정수를 받아라, \n → 줄바꿈 해라):  %d 자리에 정수배열 A의 0번째 자리의 변수 값을 받아 출력하고 줄바꿈 해라
    printf("%d\n", A[1]); // " "안의 '형태'로 출력해라(%d → 정수를 받아라, \n → 줄바꿈 해라):  %d 자리에 정수배열 A의 1번째 자리의 변수 값을 받아 출력하고 줄바꿈 해라
    printf("%d\n", A[2]); // " "안의 '형태'로 출력해라(%d → 정수를 받아라, \n → 줄바꿈 해라):  %d 자리에 정수배열 A의 2번째 자리의 변수 값을 받아 출력하고 줄바꿈 해라
    printf("%d %d %d\n", A[0], A[1], A[2]); // " "안의 '형태'로 출력해라(%d → 정수를 받아라, \n → 줄바꿈 해라):  %d 자리에 정수배열 A의 해당번째 자리의 변수값을 받아 출력하고 줄바꿈 해라
    
    printf("-----------\n");      // " "안의 '형태'로 출력해라:   -----------을 출력하고 줄바꿈해라

    printf("%d\n", sizeof(A[0])); // " "안의 '형태'로 출력해라(%d → 정수를 받아라, \n → 줄바꿈 해라):  %d 자리에 정수배열 A의 0번째 자리의 자료형의 크기(=정수)를 받아 출력하고 줄바꿈 해라
    printf("%d\n", sizeof(A[1])); // " "안의 '형태'로 출력해라(%d → 정수를 받아라, \n → 줄바꿈 해라):  %d 자리에 정수배열 A의 1번째 자리의 자료형의 크기(=정수)를 받아 출력하고 줄바꿈 해라
    printf("%d\n", sizeof(A[2])); // " "안의 '형태'로 출력해라(%d → 정수를 받아라, \n → 줄바꿈 해라):  %d 자리에 정수배열 A의 2번째 자리의 자료형의 크기(=정수)를 받아 출력하고 줄바꿈 해라

    printf("-----------\n"); // " "안의 '형태'로 출력해라:   -----------을 출력하고 줄바꿈해라
    
    printf("%d\n", &A[0]);   //  " "안의 '형태'로 출력해라(%d → 정수를 받아라, \n → 줄바꿈 해라):  %d 자리에 정수배열 A의 0번째 자리의 주소값(=정수)을 받아 출력하고 줄바꿈 해라
    printf("%d\n", &A[1]);   //  " "안의 '형태'로 출력해라(%d → 정수를 받아라, \n → 줄바꿈 해라):  %d 자리에 정수배열 A의 1번째 자리의 주소값(=정수)을 받아 출력하고 줄바꿈 해라
    printf("%d\n", &A[2]);   //  " "안의 '형태'로 출력해라(%d → 정수를 받아라, \n → 줄바꿈 해라):  %d 자리에 정수배열 A의 2번째 자리의 주소값(=정수)을 받아 출력하고 줄바꿈 해라
    // → 정수자료형은 크기가 4 Bytes 이므로, 주소값 끝자리가 4씩 증가함을 알 수 있다
} // 메인 함수 끝