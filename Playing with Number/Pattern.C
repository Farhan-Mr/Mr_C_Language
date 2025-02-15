//WAP to get your Area of Square

#include<stdio.h>
int main (){

int s; 
printf("Enter your Square side :- ");
scanf("%d",&s);

int area = (s*s);
printf("Area of Square :- %d ",area);

// Find Perimeter of Square 

int S, Peri;
printf("\nEnter Side of Square :- ");
scanf("%d",&S);

Peri = 4*S ;
printf("Perimeter of Square :- %d ",Peri);

    return 0;
}