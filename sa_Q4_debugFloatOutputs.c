//-----------Original Code-----------------

// float divide(int a, int b){ 
//     return a / b; 
// } 
 
// int main(){ 
//     printf("Division: %.2f", divide(5, 2)); 
//     return 0; 
// } 


//------------Adjusted Code------------------

# include <stdio.h>

float divide(float a, float b){  // if you input 2 integers as divisors, the result will end up being trunkated
    return a / b; 
} 
 
int main(){ 
    printf("Division: %.2f", divide(5, 2)); 
    return 0; 
} 