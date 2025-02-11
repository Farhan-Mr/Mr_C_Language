/* Write a simple program to understand Structure */

#include<stdio.h>
    struct sam {
        char name[20];
        int age; 
        float cgps;
    }user1,user2;               //  Here, You can also decleared your variable
int main (){
    // Method 1 input 
    printf("Enter user 1 Detail - ");

    scanf("%s%d%f",&user1.name,&user1.age,&user1.cgps);
    printf("\nDetail of User 1 - \n%s\n%d\n%.2f",user1.name,user1.age,user1.cgps);

    // Method 2 input 
    printf("\n\nEnter user 2 Detail - ");

    scanf("%s%d%f",&user2.name,&user2.age,&user2.cgps);
    printf("\nDetail of User 2 - \n%s\n%d\n%.2f\n\n",user2.name,user2.age,user2.cgps);

    // Method 3 input 

    struct sam user3 = {"Saif",18,89.8};
    printf("\nDetail of User 3 - \n%s\n%d\n%.2f",user3.name,user3.age,user3.cgps);
   return 0;
}