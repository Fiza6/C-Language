#include<stdio.h>

int main(){

    int a , b ;
    char op; 

    printf("Enter 2 numbers and operator:");
    scanf("%d %d %c", &a , &b , &op);
    switch (op)
        {
        case '+':
            {
                printf("\nThe sum is: %d ", a+b);
                break;
            }  
        case '-':
            {
                printf("\nThe result is: %d ", a-b);
                break;
            }
        default:
            {
                printf("\nInvalid Operator !");
                break;
            }     
        }

    // Outside of switch case
    printf("\nEnd of switch");


    
    return 0;
}



