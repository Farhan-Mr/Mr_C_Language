/* WAP to store employee details such as Empid, Name, Salary and Age for 50 employees and display the same for users.*/

#include<stdio.h>

    struct Employee
    {
        int Empid; 
        int name[20];
        int salary;
        int age;
    };

    int main (){

        struct Employee emp[50];
        printf("Enter 50 Employee Detail \n1. Empid \n2. Name \n3. Salary \n4. Age\n");

        for(int i=0; i<50; i++){
            scanf("%d%s%d%d",&emp[i].Empid,&emp[i].name,&emp[i].salary,&emp[i].age);
        }
        printf("\n\n");
        for(int i=0; i<50; i++)
        {
            printf("\nDetail of %d. Employee - \nEmpid = %d\nName = %s\nSalary = %d\nAge = %d",(i+1),emp[i].Empid,emp[i].name,emp[i].salary,emp[i].age);
        }

        return 0;
    }
    