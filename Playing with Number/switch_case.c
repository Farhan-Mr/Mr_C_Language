/*  Write a C program to display the day of the week using a switch-case statement.
    Debug and execute the program  */

    #include<stdio.h>
    int main (){
        int Day;
        printf("Enter a number (1-7) : ");
        scanf("%d", &Day);
    switch (Day)     {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Ooppss !! Invalid INPUT.\n");
            printf("Please enter a number between 1 and 7");
    }
        return 0;
    }