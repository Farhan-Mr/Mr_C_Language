/* WAP to find Volume of Sphere */

#include<stdio.h>
int main () {
    
printf("Volume of shpere\n");
/* Volue of shpere */

  int r;
  printf("Enter Radius : ");
  scanf("%d",&r);

 float pie = 3.14;
 float volume = 4* pie* r* r* r/3;

 printf("%.2f",volume);


    return 0;
}