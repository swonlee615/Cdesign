
#include <stdio.h> 

void main() 
{ 
    char C[3] = {'X', 'Y', 'Z'}; 
       
    printf("%d %d %d\n", C[0], C[1], C[2]);

    printf("-----------\n"); 
    
    printf("%d %d %d\n", sizeof(C[0]), sizeof(C[0]), sizeof(C[0])); 
    
    printf("-----------\n"); 
    
    printf("%d %d %d\n", &C[0], &C[1], &C[2]);
} 

