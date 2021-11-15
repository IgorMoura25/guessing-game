#include <stdio.h>

int main(){
    printf("************************************\n");
    printf("* Welcome to the guessing game *\n");
    printf("************************************\n");

    int secretNumber = 42;

    int attempt;

    printf("What is your attempt? ");

    scanf("%d", &attempt);

    printf("Your attempt was %d", attempt);
}