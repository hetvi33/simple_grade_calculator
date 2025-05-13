#include <stdio.h>

int main() {
    int score;
    char grade;

    // Input
    printf("Enter your score: ");
    scanf("%d", &score);

    // Determine grade
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : 'F';

    // Print grade
    printf("Your grade is %c. ", grade);

    // Provide comment using switch-case
    switch (grade) {
        case 'A':
            printf("Excellent work! ");
            break;
        case 'B':
            printf("Well done. ");
            break;
        case 'C':
            printf("Good job. ");
            break;
        case 'D':
            printf("You passed, but you could do better. ");
            break;
        case 'F':
            printf("Sorry, you failed. ");
            break;
        default:
            printf("Invalid grade. ");
    }

    // Eligibility check without using ||
    if (grade == 'A') {
        printf("You are eligible for the next level.\n");
    } else if (grade == 'B') {
        printf("You are eligible for the next level.\n");
    } else if (grade == 'C') {
        printf("You are eligible for the next level.\n");
    } else if (grade == 'D') {
        printf("You are eligible for the next level.\n");
    } else {
        printf("Please try again next time.\n");
    }

    return 0;
}
