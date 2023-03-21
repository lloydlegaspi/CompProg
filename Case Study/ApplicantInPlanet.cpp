#include <stdio.h>

int main()
{
    // get input from user
    int height, age, citizenship, recommendee;
    printf("Enter height (cm): ");
    scanf("%d", &height);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter citizenship code (1 for citizen, 0 for not citizen): ");
    scanf("%d", &citizenship);
    printf("Enter recommendee code (1 for recommended, 0 for not recommended): ");
    scanf("%d", &recommendee);

    // check if applicant is accepted
    if (recommendee == 1) {
        printf("Applicant accepted!\n");
    }
    else if (height >= 200 && age >= 21 && age <= 25 && citizenship == 1) {
        printf("Applicant accepted!\n");
    }
    else {
        printf("Applicant rejected.\n");
    }

    return 0;
}

