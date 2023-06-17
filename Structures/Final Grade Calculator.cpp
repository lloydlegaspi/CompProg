#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Grades {
    char studentName[50]; // Array to store the name of the student (up to 50 characters)
    float midterm, finals, ave; // Float variable to store the midterm, final, and average grade
};

int main() {
    const int max = 50; // Maximum number of records
    struct Grades studentRecords[max]; // Array to store student records
    int recordNumber = 0; // Counter for the number of records
    char option[10]; // Input for the user's choice
    
    printf("Enter the following information:\n"); // Prompts the user to enter the following information

    if (recordNumber < max) { // Check if there's still space for new records
        do {
            printf("\n--Record %d--\n", recordNumber + 1); // Displays the current record number (starting from 1)
            printf("Name(FN): "); // Prompts the user to enter the student's name
            
            // Use fgets to input the name and handle multiple words
            fgets(studentRecords[recordNumber].studentName, sizeof(studentRecords[recordNumber].studentName), stdin);
            studentRecords[recordNumber].studentName[strcspn(studentRecords[recordNumber].studentName, "\n")] = '\0';

            printf("Midterm Grade: "); // Prompts the user to enter the student's midterm grade
            scanf("%f", &studentRecords[recordNumber].midterm);
            printf("Final Grade: "); // Prompts the user to enter the student's midterm grade
            scanf("%f", &studentRecords[recordNumber].finals);
            
            // Calculates the average grade

            studentRecords[recordNumber].ave = (studentRecords[recordNumber].midterm + studentRecords[recordNumber].finals) / 2.0;

            recordNumber++; // Increments the recordNumber

            printf("Do you want to enter another record? (Yes/No): "); // Prompts the user to enter another record.
            scanf("%s", option);

            while (strcasecmp(option, "Yes") != 0 && strcasecmp(option, "No") != 0 && tolower(option[0]) != 'y' && tolower(option[0]) != 'n') {
                printf("Invalid option. Please enter 'Yes' if you want to enter another record or 'No' if you don't: ");
                scanf("%s", option);
            }
            
            // Consume any remaining characters in the input buffer
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
    
	// Continue the loop if the user chooses to enter another record
        } while (strcasecmp(option, "Yes") == 0 || tolower(option[0]) == 'y');
    }
	
	// Print the table header and student records in a formatted manner
    printf("\n%-10s %-15s %-15s %-15s\n", "Name", "Midterm Grade", "Final Grade", "Ave. Grade");
    for (int i = 0; i < recordNumber; i++) {
        printf("%-10s %-15.2f %-15.2f %-15.2f\n", studentRecords[i].studentName, studentRecords[i].midterm, studentRecords[i].finals, studentRecords[i].ave);
    }

    return 0;
}



