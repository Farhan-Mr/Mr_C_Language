/* Wap to enter price of 5 item and print their fianl cost with gst - */

#include<stdio.h>
int main (){

    float price [5];
    printf("Enter the price of 5 items - ");
    for(int i=0; i<5; i++)
    {
        scanf("%f",&price[i]);
    }
    
    printf("Price of items with GSt - \n");
        for( int i=0; i<5; i++ )
        {
            printf("Price of item %d is -> %.2f\n", (i+1), (price[i]*0.18));
        }

    return 0;
}