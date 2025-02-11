/* WAP to declear a array of structure and enter detail also print it */

#include<stdio.h>
    struct data
    {
        char name[20];
        int age;
    };
int main (){

    struct data user[5];

    printf("Enter detail of user : ");
        for(int i=0; i<5; i++)
        {   
            printf("\nEnter User %d detail ",(i+1));
            printf("\nEnter name : ");
            scanf("%s",user[i].name);
            printf("Enter user age : ");
            scanf("%d",&user[i].age);
        }
        // Print detail -
        for(int i=0; i<5; i++)
        {
            printf("\nUser detail %d \n",(i+1));
            printf("Name : %s \t Age : %d",user[i].name,user[i].age);
        }


    return 0;
}