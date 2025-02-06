/* WAP to pass a string from main function to user define function and reverse it */

#include<stdio.h>
    void reverse(char str[]);

int main (){

    char str[100];
    printf("Enter string : ");
        scanf("%s",str);

    // printf("\n Given string is : %s",str);
    
    // function calling -
    reverse(str);    

    return 0;
}

void reverse(char str[]){
    printf("\nBefore Reverse %s ",str);

    int count = 0;
    for (int i=0; str[i] != '\0'; i++)
    {
        count ++ ;
    }
            // printf("Length is %d",count);    ---- Length of string 

    // Reversing process 

    int arr[count];
    for(int i=0; i<count; i++)
    {
        arr[i] = str[count-i-1];
    }
    // Print Reverse part -
    printf("\nAfter Reverse : ");
    for(int i=0; i<count; i++)
    {
        printf("%c",arr[i]);
    }

    
}