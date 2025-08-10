# include <stdio.h>
# include <stdbool.h>

//not allowed to use arrays

bool vowel_checker(char input) {
    bool is_vowel = false ;
    if (input=='a'||input=='A'||input=='e'||input=='E'||input=='i'||input=='I'||input=='o'||input=='O'||input=='u'||input=='U'){
        is_vowel = true ;
    return is_vowel;
    } 
}

int main() {
    char user_input ;
    printf("Please enter a char and I will say if its a vowel : ");
    scanf("%c",&user_input);
    switch (vowel_checker(user_input)) {
        case true : 
        printf("%c is a vowel", user_input);
        break;
        default :
        printf("%c is not a vowel", user_input);
        break;
    }
    return 0;
}