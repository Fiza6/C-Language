//------------Original Code---------------------

// int main(){ 
//     int num = 5; 
 
//     if(num = 0){ 
//         printf("Zero"); 
//     } 
//     else if(num > 0){ 
//         printf("Positive"); 
//     } 
//     else{ 
//         printf("Negative"); 
//     } 
//     return 0; 
// } 

//-----------Adjusted Code---------------------

# include <stdio.h>

int main(){ 
    int num = 5; 
 
    if(num == 0){          // = assigns values to variables, == compares values
        printf("Zero"); 
    } 
    else if(num > 0){ 
        printf("Positive"); 
    } 
    else{ 
        printf("Negative"); 
    } 
    return 0; 
} 
