#include<stdio.h>

int main(){

    printf("\n\n-----------------Declaring string--------------\n\n");
    // Method 1 : character Array
    char name[10] = "Drew_David";

    // char name2[5] = {"q", "w", "e", "r", "t"};

    // Method 2 : String Literal
    char *name3 = "Drew_David";

    printf("\n\n-----------------Printing string--------------\n\n");

    printf("\n\nHello: %s" , name);


    printf("\n\n----------------Input string--------------\n\n");

    char input_str[20];
    printf("\n\nEnter your question:  ");
    // scanf("%s", &input_str);
    
    fgets(input_str, sizeof(input_str), stdin);
    printf("\n\nYou entered : %s", input_str);

    return 0 ;
}