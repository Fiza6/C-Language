#include<stdio.h>


// pass by reference changes the actual value of the parameter globally


// return_type name_of_func(datatype param1 , data_type param 2...)
// {
    // function body
// }


int sum (int* num1 , int* num2 , int* total){
    *total = *num1 + *num2; //Dereference

    printf("%d ", num1);  // num1 => address
    printf("\n%d" , *num1); // *num1 => value at that address
} 

int main(){
   int  x = 3;
   int  y = 5;
   int total = 0 ; 
   sum(&x, &y, &total); 
//    printf("total : %d" , total);
   return 0; 
}