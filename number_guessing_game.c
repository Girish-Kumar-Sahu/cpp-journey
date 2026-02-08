#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int check(int guess, int secret){
    if (secret==guess){
        printf("You won!\n");
        return 1;
    }
    else if (secret>guess){
        printf("A little too low\n");
        return 0;
    }
    else{
        printf("a little high\n");
        return 0;
    }
}
int main(void) {

    int won = 0;

    while(!won){
    int start, end;
    printf("enter starting value: ");
    scanf("%d", &start);
    printf("enter ending value: ");
    scanf("%d", &end);
    srand(time(0));
    int secret = rand() % (end - start + 1) + start;
    int guess;
        printf("Enter your guess: ");
        scanf("%d", &guess);
        won = check(guess, secret);
    }
    return 0;
}