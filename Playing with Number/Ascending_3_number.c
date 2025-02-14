/* WAP to arrange 3 number in ascending order */

#include <stdio.h>
int main (){

// WAP Enter 3 no. and then arrenge in Ascending Order

int x,y,z;
printf("Enter 1st no. : ");
scanf("%d",&x);
printf("Enter 2nd no. : ");
scanf("%d",&y);
printf("Enter 3rd no. : ");
scanf("%d",&z);

// case 1 : whan x is smaller as compare to y and z 
// X  Y  Z 

if(x<y && x<z)
{
    if (y<z)
    {
        printf("First  : %d \nSecond : %d \nThird  : %d ",x,y,z);
    }
    else 
    {
        printf("First  : %d \nSecond : %d \nThird  : %d ",x,z,y);
    }
    
}

// case 2 : when y is smaller as comparet to x and z
// X  Y  Z  

else if (y<x && y<z)
{
    if (x<z)
    {
        printf("First  : %d \nSecond : %d \nThird  : %d ",y,x,z);
    }
    else 
    {
        printf("First  : %d \nSecond : %d \nThird  : %d ",y,z,x);
    }
}

// case 3 : when z is smller as compare to x any y 
// X  Y  Z 
else 
{
    if(z<x && z<y)
    {
        if(x<y)
        {
            printf("First  : %d \nSecond : %d \nThird  : %d ",z,x,y);
        }
        else 
        {
            printf("First  : %d \nSecond : %d \nThird  : %d ",z,y,x);
        }
    }
}

    return 0;
}