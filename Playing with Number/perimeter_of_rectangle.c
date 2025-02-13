/* WAP to find Perimter of Rectangle */

#include<stdio.h>
int main (){

    int l,w;
    printf("Enter length of rectangle - ");
    scanf("%d",&l);

    printf("Enter width of rectangle - ");
    scanf("%d",&w);
    
    // Perimter of Rectangle 2*(l+w) 
    int peri = 2*(l+w);

    printf("Perimter of Rectangle : %d",peri);
    return 0;
}