#include <stdio.h>

int main() {
    int votes[4] = {0, 0, 0, 0};
    int option, i;
    char candidates[4][20] = {"Candidate 1", "Candidate 2", "Candidate 3", "Candidate 4"};

    while(1) {
        printf("\n**** Welcome to EVM Voting Machine ****\n");
        printf("Please choose your candidate:\n");
        for(i = 0; i < 4; i++) {
            printf("%d. %s\n", i+1, candidates[i]);
        }
        printf("5. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        if(option >= 1 && option <= 4) {
            votes[option-1]++;
            printf("\nThank you for voting!\n");
        } else if(option == 5) {
            break;
        } else {
            printf("\nInvalid option! Please try again.\n");
        }
    }

    printf("\n**** Voting Results ****\n");
    for(i = 0; i < 4; i++) {
        printf("%s: %d votes\n", candidates[i], votes[i]);
    }

    return 0;
}

