#include <stdio.h>

int main()
{
    // get input from user
    int days;
    printf("Enter number of days late: ");
    scanf("%d", &days);

    // calculate fine
    double fine;
    if (days <= 2) {
        fine = 10.00;
    }
    else if (days <= 4) {
        fine = 15.00;
    }
    else if (days <= 5) {
        fine = 20.00;
    }
    else {
        // assume CD
        fine = 50.00;
        // ask user if it's a VHS
        printf("Is it a VHS tape? (1 for yes, 0 for no): ");
        int is_vhs;
        scanf("%d", &is_vhs);
        if (is_vhs) {
            fine = 35.00;
        }
    }

    // print fine
    printf("Fine: $%.2lf\n", fine);

    return 0;
}

