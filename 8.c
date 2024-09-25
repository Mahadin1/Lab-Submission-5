#include <stdio.h>

int main() {
    int age;
    float income;
    int creditScore;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your annual income: ");
    scanf("%f", &income);
    printf("Enter your credit score (300 to 900): ");
    scanf("%d", &creditScore);

    if (age >= 20 && income > 25000 && creditScore > 450) {
        printf("You are eligible for the loan.\n");
    } else {
        printf("You are not eligible for the loan.\n");
        
        if (age < 20) {
            printf("You must be at least 18 years old.\n");
        }
        if (income <= 25000) {
            printf("Your income must be above 25000.\n");
        }
        if (creditScore <= 400) {
            printf("Your credit score must be above 450.\n");
        }
    }

    return 0;
}
