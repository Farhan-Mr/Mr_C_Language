#include<stdio.h>
#include<string.h>

int main (){
    int count = 0; 
    char name[20];

    printf("Enter name : ");

    //or 
    //scanf("%s",name);
    scanf("%s",&name);
    printf("My name is %s",name);

    count = strlen(name);
    printf("\nLength is %d",count);



    return 0;
}