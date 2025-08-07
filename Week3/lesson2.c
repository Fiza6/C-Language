// Functions in c 
// A block of code specified for doing a task
// Can be used repeatedly
// Makes the code modular

// There are 2 types of functions :
// User defined -> created by user 
// Built-in  -> printf()  , scanf() , sizeOf()

#include<stdio.h>


// Syntax of decalring/ defining a function

/*
    return_type name_of_function(){
        // body of function
    }

*/

// Where you declare ? 
// Outside main()

/*
    To make use of this function you have to call it
        Syntax:
            name_of_function();
*/
          
/*
    Where can you call a function
        Inside main()
        Inside any other function you declared/defined
        Inside itself (recursion)
*/

void show(){
    printf("Hello");
}

void is_even(int num){
   
    if ((num % 2) == 2 ){
        printf("\n %d is even ", num);
    }
    else{
        printf("\n %d is odd ", num);
    }
    
}

int is_vowel(char input){

    // Array /List
    char vowels[] = {'A', 'a' , 'E' , 'e', 'I', 'i' , 'O', 'o' , 'U', 'u'}; 

    for (int i=0 ; i<10 ; i++){
        if(input == vowels[i]){
            // printf("\n %c is vowel", input);
            // break;
            return 1;
        }
        
    }
    return 0;
}

int add(int num1 , int num2){
    return num1+num2;
}

// Scope of a variable 
// if declare inside a function -> used inside function only -> local

int main(){

    // int input; 
    // Call
    show();
    is_even(3);

    // printf("");
    // scanf("");
    // is_even(input);

    if (is_vowel('o')){
        printf("\n o is vowel");
    }

    int x = 3;
    int y = 5;
    printf("\nThe sum of %d and %d is: %d",x, y, add(x,y));
    return 0;
}