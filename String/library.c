/* WAP to use of string library */

#include<stdio.h>
#include<string.h>
int main (){

    char name[] = "August";
    char name1[10];

     strcpy(name1,name);
    
    printf("Name is %s ",name1);

    return 0;
}
// cat, cpy, cmp, 