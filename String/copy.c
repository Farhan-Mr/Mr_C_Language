#include<stdio.h>
#include<string.h>

int main (){
     
    char old_name[10];
    char new_name[10];

    printf("Enter old name : ");
    scanf("%s",&old_name);

    printf("Enter new name : ");
    scanf("%s",&new_name);

   // use of strcpy -

    strcpy(new_name,old_name);

    printf("\nNew Name is %s",new_name);
    printf("\nold Name is %s",old_name);



    return 0;
}