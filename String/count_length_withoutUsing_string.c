/* WAP to count length of string  with the help of stringLength() function - */

#include<stdio.h>
#include<stdlib.h>

void stringLength();

int main ()
{

while (1)
{
    int Exit;
    printf("\nwhat you want to do \n\n");
    printf("Press 0 to Terminate\nPress 1 to Count Length of string :");

 scanf("%d",&Exit);

 if(Exit==1){
    stringLength();
    break;
 }
 else{
    exit(0);
 }
}
return 0;
}
void stringLength(){
    int count = 0;
    char str[100];
    printf("Enter Detail : ");
    scanf("%s",str);

        for( int i=0; str[i] != '\0' ; i++ )
        {
            count ++ ;
        }

    printf("Length is %d ",count);    
}