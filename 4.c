#include<stdio.h>

int main() {
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);


    if (a > 0 && b > 0 && c > 0) {
        if ((a + b > c) && (a + c > b) && (b + c > a)) {
            printf("The triangle is valid.\n");
        } else {
            printf("The triangle is not valid.\n");
        }
    } else {
        printf("All side must be postive and greater then 0, Please try again with valid values.\n");
    }

    return 0;
}
