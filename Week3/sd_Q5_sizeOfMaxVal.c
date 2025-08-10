# include <stdio.h> 
# include <limits.h>
# include <float.h>
# include <stdbool.h>

int main() {
    printf("The size of an integer is %zu bytes\n",sizeof(int));
    printf("The size of a float is %zu bytes\n",sizeof(float));
    printf("The size of a double is %zu bytes\n",sizeof(double));
    printf("The size of a char is %zu bytes\n",sizeof(char));
    printf("The size of a boolean is %zu bytes\n",sizeof(bool));
    return 0;
}