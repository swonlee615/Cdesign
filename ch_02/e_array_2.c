
// // 선언 '동시' 초기화
// #include <stdio.h>

// // Approach 1
// int main()
// {
//     char X[5] = {'\0', '\0', '\0', '\0', '\0'}; // char X[5] = {0};
//     // char X[5] = {'A', 'B', 'C', 'D'}; → X를 재'선언'(redefine) X
//     // X[5] = {'A', 'B', 'C', 'D'};  → X 배열의 5번째 위치에 초기화 ?!?!? 
//     X[0] = 'A'; 
//     X[1] = 'B';
//     X[2] = 'C';
//     X[3] = 'D';
//     printf("<%c> <%c> <%c> <%c> <%c>\n", X[0], X[1], X[2], X[3], X[4]);
//     printf("%s\n", X);
//     return 0;
// }

// Approach 2
int main()
{
    char X[5] = {'A', 'B', 'C', 'D', '\0'}; 
    printf("<%c> <%c> <%c> <%c> <%c>\n", X[0], X[1], X[2], X[3], X[4]);
    printf("%s\n", X); 
    return 0;
}       
     