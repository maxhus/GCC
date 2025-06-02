#include <stdio.h>
void guessNumber(int guess) {
    int gues = 555; 
    if (guess == gues ) {
    	printf("Correct. You guessed it!\n");
    } else if (guess < gues ) {
    	printf("Your guess is too low.\n");
    } else {
        printf("Your guess is too high.\n");
    }
          
}
int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}

