#include <stdio.h>
#include <stdbool.h>

int compute_Average(int num_list[],int total_nums) {
    int sum;
    float average; 
    for (int i = 0 ; i < total_nums ; i++) {
        sum += num_list[i];
    }
    average = sum / total_nums ;
    return average;
}

int main() {
    int integers[] = {1,4,6,3,7,10,13,11,76};
    int int_count = (sizeof(integers)/(sizeof(integers[0])));
    //printf("Size of Array : %zu",int_count);
    float average = compute_Average(integers,int_count);
    printf("The average for : ");
    for (int i = 0; i < int_count; i++) {
        if (i==(int_count-1)) {
            printf("and %d ",integers[i]);
        }
        else {
            printf("%d, ", integers[i]);
        }  
    }
    printf(" is %.2f", average);
    return 0;
}
