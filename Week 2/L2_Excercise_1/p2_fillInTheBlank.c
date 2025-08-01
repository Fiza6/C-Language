// ---------------Original-------------------------

//#include <stdio.h> 
//#include <stdbool.h> 
 
//int main() { 
//    int age; 
//    char name[20]; 
 
//    printf("Enter your name: "); 
//    scanf("____", &name);
 
//    printf("Enter your age: "); 
//    scanf("____", &age); 
 
//    printf("Hello %s, you are %d years old.\n", ____, ____); 
 
//    return 0; 
//}


//------------With Blanks filled in--------------------

#include <stdio.h> 
// #include <stdbool.h>    I commented this out since we didnt use any boolean here
 
int main() { 
    int age; 
    char name[20]; 
 
    printf("Enter your name: "); 
    scanf("%s", &name); //added %s here because name is expected to be a string since we initialized it as char variableName[]
    //also added & to name since its required to reference a variable as &variableName with scanF 
 
    printf("Enter your age: "); 
    scanf("%d", &age); // %d is for integers , age was introduced as an integer
 
    printf("Hello %s, you are %d years old.\n",name,age); // in this line, I didnt need to add & in front of the variables unlike when we use scanF
 
    return 0; 
}