#include <stdio.h> 
   
int main() { 
    int counter;
    printf("Even numbers between 1 to 100\n"); 
    /*
     * Initialize counter with 1, and increment it in every iteration.
     * For every value of counter check whether it is even number or
     * not and print it accordingly
     */ 
    for(counter = 1; counter <= 100; counter++) { 
        /* Even numbers are divisible by 2 */ 
        if(counter%2 == 0) {
            /* counter is even, print it */
            printf("%d ", counter); 
        } 
    } 
   
    return 0; 
} 
