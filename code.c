// stone paper and scissor 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, computer;

    // Random number seed
    srand(time(0));

    printf("STONE PAPER SCISSOR GAME\n");
    printf("1. Stone\n2. Paper\n3. Scissor\n");

    printf("Enter your choice (1-3): ");
    scanf("%d", &user);

    // Generate computer choice (1 to 3)
    computer = (rand() % 3) + 1;

    printf("Computer chose: %d\n", computer);

    // Check winner
    if (user == computer) {
        printf("It's a Draw!\n");
    }
    else if ((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2)){
        printf("You Win!\n");
    }
    else {
        printf("Computer Wins!\n");
    }

    return 0;
}