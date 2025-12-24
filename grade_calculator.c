/* Calculating class average and printing pass/fail status
based on student data input.
*/
#include <stdio.h>

int main () {
    // Variables updated to professional English naming conventions
    int studentCount, i, totalScore = 0;
    float average;

    printf("Enter the number of students: ");
    scanf("%d", &studentCount);

    // Arrays to store data for each student
    int scores[studentCount];
    int studentIDs[studentCount];
    char studentNames[studentCount][100];

    // --- DATA INPUT ---
    for (i = 0; i < studentCount; i++) {
        printf("Student %d - Enter ID, Name(SingleWord), and Score: ", i + 1);

        // Recording data into specific array indexes
        scanf("%d %s %d", &studentIDs[i], studentNames[i], &scores[i]);

        totalScore += scores[i];
    }

    // Calculating the class average
    average = (float)totalScore / studentCount;

    // --- OUTPUT SECTION ---
    printf("\n\n---- EXAM RESULT LIST ----\n");
    printf("ID\t\tNAME\t\tSCORE\tSTATUS\n");
    printf("----------------------------------------------\n");

    for (i = 0; i < studentCount; i++) {
        printf("%d\t\t%s\t\t%d\t", studentIDs[i], studentNames[i], scores[i]);

        // Logic: Pass if score is above or equal to average
        if (scores[i] >= average) {
            printf("PASSED\n");
        } else {
            printf("FAILED\n");
        }
    }

    printf("----------------------------------------------\n");
    printf("CLASS AVERAGE: %.2f\n", average);

    return 0;
}

//GitHub: ozgurkoraymelek