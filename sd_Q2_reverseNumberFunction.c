# include <stdio.h>
# include <stdbool.h>
# include <math.h>

int reverse_number(int num, int digits) { 
    int rev_num = 0;
    int power_of = digits-1 ; 
    while (num>10) { 
        rev_num = rev_num + ((num%10)*(pow(10,power_of)));
        power_of = power_of-1;
        num = ((num-num%10)/10) ;
    }
    rev_num += num;
    return rev_num;
}

int count_digits(int num) {
    int digits = 0;
    while (num>10) {
        num = ((num-num%10)/10) ;
        digits++ ;
    }
    digits++;
    return digits;
}

int main() {
    int og_num = 1234321; // original number
    int total_digits = count_digits(og_num);
    //printf("Total digits of %d is %d\n",og_num,count_digits(og_num));
    int reverse_num = reverse_number(og_num,total_digits);
    printf("Original number : %d \nReversed number : %d\n", og_num ,reverse_num);
    if (og_num==reverse_num) {
        printf("%d is a palindrome",og_num);
    }
    else {
        printf("%d is not a palindrome",og_num);
    }
    return 0; 
}