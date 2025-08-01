// A simple calculator ----------


#include <stdio.h>

void main() {

float num_1,num_2 ;
char operator ;

printf("Welcome to Calcutron, I will ask you for 2 numbers and an operator.\nPlease enter your first number : ");
scanf("%f",&num_1);

printf("\nPlease choose from the following operators : \n + - * / \n User choice : ");
scanf(" %c",&operator);

printf("\nPlease enter your second number : ");
scanf("%f",&num_2);

if (operator == '+') {
    printf("\n%.2f %c %.2f = %.2f",num_1,operator,num_2,num_1+num_2);
}
else if (operator == '-') {
    printf("\n%.2f %c %.2f = %.2f",num_1,operator,num_2,num_1-num_2);
}
else if (operator == '*') {
    printf("\n%.2f %c %.2f = %.2f",num_1,operator,num_2,num_1*num_2);
}
else if (operator == '/') {
    if (num_2 == 0) {
        printf("Sorry! Dividing by 0 is Undefined!");
    }
    else {
        printf("\n%.2f %c %.2f = %.2f",num_1,operator,num_2,num_1/num_2);
    }
}

}