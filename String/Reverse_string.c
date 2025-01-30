/*  Write a C program to reverse a given string 
    without using the built-in `strrev` function.  */

#include <stdio.h>
#include <string.h> 

void reverse(char str[])
{
    int a = strlen(str); 
    char arr[a];
    for (int i=0; i<a; i++)
    {
        arr[i] = str[a-i-1];
        printf("%c",arr[i]);
    }
}
int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s",str);

    reverse(str);
    return 0;
}