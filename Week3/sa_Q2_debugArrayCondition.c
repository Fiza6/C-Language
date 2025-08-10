//-------------Original-----------------

// int main(){ 
//     int scores[3] = {80, 90, 100}; 
//     if (scores == {80, 90, 100}){ 
//         printf("All scores matched"); 
//     } 
//     return 0; 
// } 
 
 


//------------Correction-----------------

# include <stdio.h>
# include <stdbool.h>

int main(){ 
    bool scores_same = true;
    int scores[3] = {80, 90, 100}; 
    int check_if_same[3] = {80, 90, 100};
    // if (scores == {80, 90, 100}){            You cannot directly compare a list to another list like this because == checks if they have the same memory location, not if they have the same contents.
    //     printf("All scores matched"); 
    // } 
    for (int i = 0 ; i < 3 ; i++) {  // in order to compare 2 lists, I need to use a loop
        if (scores[i] != check_if_same[i]) {
            scores_same = false;
        }
    }
    if (scores_same==true) {
        printf("The scores are the same in both lists");
    }
    else {
        printf("The scores are not the same, someone hacked the test!");
    }
    return 0; 
} 
 
 
