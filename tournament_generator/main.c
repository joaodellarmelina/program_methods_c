#include <stdio.h>
#include <ctype.h>
int main(void) {
    char players[50][100];
    printf("Please enter player names. Empty name=end.\n");
    int count=0;
// Input tournament players:
    while ( 1 ) {
        printf("Type the name or press an empty space to cancel: \n");

        fgets(players[count], 100, stdin);

        if (isspace(players[count][0])) break;

        count++;
    }


    // Output players
    printf("Total: %i \n", count);
    printf("Players list: \n");
    for (int i=0;i<count;i++) {
        printf("%i - %s", i+1, players[i]);
    }

// All combinations of players for a tennis tournament
    int matchCount = 0;
    for (int j=0; j<count; j++) {
        for (int h=1; h<count; h++) {
            if (h != j && h>j){
                printf("Match %2d: %-15s vs %-15s\n", ++matchCount, players[j], players[h]);
            }
        }
    }


    return 0;
}