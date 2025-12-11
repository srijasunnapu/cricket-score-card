#include <stdio.h>

int main() {

    int totalRuns = 0;
    int totalWickets = 0;
    int run;
    int ball = 0;         
    int deliveries = 0;   

    int wides = 0;
    int noballs = 0;

    printf("---- Cricket Scoreboard (5 Overs) ----\n");
    printf("Inputs:\n");
    printf("0-6 = Runs\n");
    printf("-1  = Wicket\n");
    printf("7   = Wide Ball\n");
    printf("8   = No Ball\n");

    while(ball < 30) {   
        deliveries++;

        printf("\nDelivery %d - Enter input: ", deliveries);
        scanf("%d", &run);

        if(run == -1) {
            totalWickets++;
            printf("WICKET!\n");
            ball++;

            if(totalWickets == 10) {
                printf("All Out!\n");
                break;
            }
        }
        else if(run >= 0 && run <= 6) {
            totalRuns += run;
            ball++;   
        }
        else if(run == 7) { 
            wides++;
            totalRuns += 1;
            printf("WIDE BALL!\n");
            deliveries--;   
        }
        else if(run == 8) {     
            noballs++;
            totalRuns += 1;
            printf("NO BALL!\n");
            deliveries--;   
        }
        else {
            printf("Invalid input! Try again.\n");
            deliveries--;
        }
    }

    printf("\n----- FINAL SCORECARD -----\n");
    printf("Total Runs       : %d\n", totalRuns);
    printf("Total Wickets    : %d\n", totalWickets);
    printf("Overs Played     : %d.%d\n", ball/6, ball%6);
    printf("Total Deliveries : %d\n", deliveries+wides);

    printf("\n----- EXTRAS BREAKDOWN -----\n");
    printf("Wide Balls       : %d\n", wides);
    printf("No Balls         : %d\n", noballs);
    printf("Total Extras     : %d\n", wides + noballs);

    return 0;
}