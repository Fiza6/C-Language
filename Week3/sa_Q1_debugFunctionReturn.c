//-------------Original-----------------

// int compute(int a, int b){ 
//     if(a > b) 
//         return; 
//     else 
//         return a - b; 
// } 
 
// int main(){ 
//     int x = 10, y = 5; 
//     printf("Result: %d", compute(x, y)); 
// } 

//------------Correction-----------------

# include <stdio.h>

int compute(int a, int b){ 
    if(a > b) 
        return b - a;  // not really sure what was intended here, but it needs an integer value here since it needs to return an integer
    else 
        return a - b; 
} 
 
int main(){ 
    int x = 10, y = 5; 
    printf("Result: %d", compute(x, y)); 
} 