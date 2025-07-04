#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    // Determine grade using nested ternary operator
    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F';

    printf("Your grade is %c. ", grade);

    // Print comments using switch-case
    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done.\n");
            break;
        case 'C':
            printf("Good job.\n");
            break;
        case 'D':
            printf("You passed, but you could do better.\n");
            break;
        case 'E':
            printf("You passed, but improvement is needed.\n");
            break;
        case 'F':
            printf("Sorry, you failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

    return 0;
}
