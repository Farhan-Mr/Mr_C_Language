#include<stdio.h>
int main (){

    int a,*p,**t;

    a=4;
    p=&a;
    t=&p;

    printf("\n%d",a);           // a ko access kr raha hai 
    printf("\n%d",*p);                  // p mein a ka address hai usko point kr raha hai aur uskko print kr raha hai 
    printf("\n%u",p);               // p mein a ka address store hai usko print kr raha hai 
    printf("\n%u",*t);      // t = &p ko point kr raha hai aur p mein ho value hai usko point kr raha hai then print 
    printf("\n%u",&t);       // t ki address ko print kr raha hai 


// int a = 20;
// int *p ;
//     p = &a ; 

//     printf("\n%d",*p);
//     printf("\n%u",&p);
//     printf("\n%u",p);ṇ


    return 0;
}