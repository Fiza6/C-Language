// ---------------Original-------------------------

//  int x, y ; 
//     char op_new ; 
//     printf("\n Choose anyone (+ , - , * , /):   ");
//     scanf("%c" , &op_new);

//     printf("\n Enter first number:   ");
//     scanf("%d" , &x);

//     printf("\n Enter second number:   ");
//     scanf("%d" , &y);

//     printf("%d   %c   %d", x , op_new , y );


//     return;
// }

//------------Modified Version--------------------

#include <stdio.h>

void main() {

    int x, y ; 
    char op_new ; 
    
    printf("\n Choose any one (+ , - , * , /):   ");
    scanf("%c" , &op_new);

    printf("\n Enter first number:   ");
    scanf("%d" , &x);

    printf("\n Enter second number:   ");
    scanf("%d" , &y);

    printf("\n-----------\nCalculation : %d   %c   %d\n", x , op_new , y );

    if (op_new == '+') { 
        printf("\nResult = %d\n", x + y); 
    } 
    else if (op_new == '-') { 
        printf("\nResult = %d\n", x-y);
    } 
    else if (op_new == '*') { 
        printf("\nResult = %d\n", x*y);
    } 
    else if (op_new == '/') { 
        if (y == 0) {
            printf("\nDividing by 0 is undefined!");
        }
        else {
            printf("\nResult = %d\n", x/y);
        }   
    } 

    return;
}