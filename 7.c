#include <stdio.h>

int main() {
    int attendance, assignScore;
    char examResult;

    printf("Please enter your attendance in percentage (1-100): ");
    scanf("%d", &attendance);
    printf("Please enter your Assignment Score (1-10): ");
    scanf("%d", &assignScore);
    printf("Please enter your Exam Result (A to C): ");
    scanf(" %c", &examResult);

//  if A and attend >= 70 and assign >= 8  then  your are in first division Ranking list
//  if A and attend >= 50 and assign >= 5  then  your are in Second division Ranking list
//  if B and attend >= 70 and assign >= 8  then  your are in Second Division Ranking list
//  if B and attend >= 50 and assign >= 4  then  your are in Third Division Ranking list
//  if C and attend >= 40 and assign >= 5  then  your are in Third Division Ranking list
//  else  last divsion 

    if ((attendance > 100 || attendance < 0) || (assignScore < 0 || assignScore > 10) || (examResult != 'a' && examResult != 'b' && examResult != 'c')) {
        printf("Invalid data, please enter data within limits\n");
    } else {

        if (examResult == 'a') {
            if (attendance >= 70 && assignScore >= 8) {
                printf("You are in First Division Ranking list\n");
            } else if (attendance >= 50 && assignScore >= 5) {
                printf("You are in Second Division Ranking list\n");
            } else {
                printf("You are in Last Division Ranking list\n");
            }
        } else if (examResult == 'b') { 
            if (attendance >= 70 && assignScore >= 8) {
                printf("You are in Second Division Ranking list\n");
            } else if (attendance >= 50 && assignScore >= 4) {
                printf("You are in Third Division Ranking list\n");
            } else {
                printf("You are in Last Division Ranking list\n");
            }
        } else if (examResult == 'c') {
            if (attendance >= 40 && assignScore >= 5) {
                printf("You are in Third Division Ranking list\n");
            } else {
                printf("You are in Last Division Ranking list\n");
            }
        } else {
            printf("You are in Last Division Ranking list\n");
        }
    }

    return 0;
}
