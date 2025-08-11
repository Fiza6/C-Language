#include<stdio.h>

int main(){
   


    // Pointers

    // Declare
    //      datatype* name_of_Pointer;
    // Initialize
    //      name_of_pointer = &variable;


    // Declare and Initialize
            // datatype* name_of_Pointer = &variable;
    int x = 0 ;
    int* p = &x ; 

    int y = (int)&x;
    printf("%d\n" , y  );

    printf("Address of x : %p\n", &x);
    printf("The value of pointer : %p\n", p);
    printf("Derefernce: %d" , *p);
    printf("\nValue of x : %d ", x) ; 
 


    // how to declare : int*p OR float*p or any datatype 
    // A pointer is a variable : p
    // Holds the memory address of another variable: p = &x
    // And indirectly it can access the value of a variable => derefrence : *p
    // memory address is always a hexa value

    // ----------------- pointer with array --------------

    printf("\n\n\n\n-----------------------pointer with array --------------\n\n\n\n");
    
    int arr[3] = {2,6,9};  // continuous memory location
    int *q = &arr[0];
    printf("\n%d" , *q );
    printf("\n%d" , *(q+1));
    printf("\n%d" , *(q+2));
    // printf("\n%d" , *(q+3));
    


    // ----------------------------Pointer to Null--------------
    
    printf("\n\n\n----------------------------Pointer to Null--------------\n\n\n");
    int* r = NULL;
    printf("\n\n\n%p is value of r:  ", (void*)r);


    // ----------------------------Pointer to pointer--------------

    int **s = &r ; 
    printf("\n\n%p is a pointer to a pointer : " , s);
    
    return 0 ;
} 