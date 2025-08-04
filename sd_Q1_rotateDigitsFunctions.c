# include <stdio.h>
# include <stdbool.h>

int rotate_left(int num) { //shifts number one digit to the left
    int rotated_num = 0;
    rotated_num = rotated_num +((num-num%100)/100)+((num%100)*10);
    return rotated_num;
}

int main() {
    int input_num = 478 ; //only 3 digit number
    int shifted_number = rotate_left(input_num);
    printf("\nWhen %d is rotated to the left by one digit it becomes %d\n",input_num,shifted_number);
    return 0;
}