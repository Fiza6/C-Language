// Each area that there was an error, I added comments on the side 

// ---------------Original-------------------------

//#include <stdio.h> 
//#include <stdbool.h> 
//int main() { 
//int a = 7 
//int b = 8; 
//int sum; 
//sum = a + b; 
//printf("The sum is: %f\n", sum); 
//return 
//}

//------------Corrected Version--------------------

#include <stdio.h> 
//#include <stdbool.h> I commented this line out because I'm fairly certain its not needed here since there is no booleans used

int main() {
    int a = 7 ; // added a ; to the edn of this line , this is required because all lines in between the {} need to end in ; 
    int b = 8; 
    int sum; 
    sum = a + b; 
    printf("The sum is: %d\n", sum); // changed the pointer %f which expects a float value, to %d which expects and integer, the result of a and b should be an integer
    return 0 ; // added 0 to the end of this line. alternatively, I could have switched int main() as void main() 
}

//There was supposed to be 5 errors in this code, I only found 4. and when compiled, the code runs as intended 