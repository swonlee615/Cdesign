#include <stdio.h> 

void main() 
{ 
    float B[3] = {0.5, 0.25, 0.625}; 

    printf("%f %f %f\n", B[0], B[1], B[2]); 
    
    printf("-----------\n"); 
    
    printf("%d %d %d\n", sizeof(B[0]), sizeof(B[1]), sizeof(B[2]));    
    
    printf("-----------\n"); 
    
    printf("%d %d %d\n", &B[0], &B[1], &B[2]); 
} 
// float도 4Bytes => 주솟값 4씩 증가