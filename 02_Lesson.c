#include <stdio.h>
#include <stdbool.h>


void main(){

    // printf("Hello");

    // data types

    // int , float ,  double , char , string , bool

    // int :->  the numbers without decimal point -> 3 , 7

    // float :-> decimal point numbers : 3.5 , 7.89
 
    // double :-> larger range of decimal values are supported 

    // char :-> one character at a time ->  

    // string -> stream of characters -> "Fiza" , "123456", "23_780_678"

    // bool ->  true /false or 0, 1

    // Declaration of variable -> syntax : datatype name_of_variable ;
    int num1,num2 ; 
    
    // int num1;
    // int num2: 
    // python : num1 = 3

    char op1;
    float percentage;
    double pi;
    bool pass; 

 

    // Initialization :> You are assigning value to the variable
    num1 = 4;
    num2 = 5;
    op1 = '+';

    percentage = 73.6; // 6 to 7 digits allowed after decimal point
    pi = 3.14;

    pass = false;

    // Declaration + Initialization
    int num3 = 3 ;

    char op2 = '-'; // We can declare inthe middle of the code as well
    char message[] = "Hello David"; 

    // Print int
    printf("%d",num3); //Note : Whatever you write inside double quotes is your output 
    printf("\n");      //option 1 to add a new line character
    printf("%f" , percentage);
    printf("\n");      
    printf("%lf\n",pi);
    printf("This is the character we have selected : %c\n" , op2);
    printf("%d multiplied by %d = 9: ", num3, num3 );
    printf("\n%s", message);
    printf("\n%d",pass);


    char space = ' ';
    printf("\nwe%chave%cadded%cspace",space, space, space );
    
    int x, y ; 
    char op_new ; 
    printf("\n Choose anyone (+ , - , * , /):   ");
    scanf("%c" , &op_new);

    printf("\n Enter first number:   ");
    scanf("%d" , &x);

    printf("\n Enter second number:   ");
    scanf("%d" , &y);

    printf("%d   %c   %d", x , op_new , y );


    return;
}

