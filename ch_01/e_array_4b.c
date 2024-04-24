
#include <stdio.h> 

void main() 
{ 
    char C[4] = {88, 89, 90}; 
   
    printf("%c %c %c\n", C[0], C[1], C[2]);

    printf("-----------\n"); 
    
    printf("%d %d %d\n", sizeof(C[0]), sizeof(C[1]), sizeof(C[2]));
    
    printf("-----------\n"); 
    
    printf("%d %d %d\n", &C[0], &C[1], &C[2]); 
} 

