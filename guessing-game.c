#include <stdio.h>

int main(){
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Welcome to the     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Guessing Game! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    int secretNumber = 42;

    int guess;

    for(int i = 1; i <= 3; i++){
        printf("Chance %d of %d \n", i, 3);
        printf("What is your guess? ");

        scanf("%d", &guess);

        printf("Your guess was %d \n", guess);

        int isCorrect = guess == secretNumber;

        if(isCorrect){
            printf("Congratulations! Your guess was right :)");
            break;
        }
        else{
            printf("Your guess is wrong :(\n");
        }
    }
}