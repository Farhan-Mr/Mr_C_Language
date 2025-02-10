/* WAP to enter detail of Item and find lowest price and print its detail - */
// Use structure 

#include<stdio.h>

    struct Item
    {
        char product[20];
        char title[20];
        float price;
    };
int main(){

    struct Item arr[5];
    printf("Enter detail of 5 Items : \n");
    for(int i=0; i<5; i++)
    {   
        printf("\nItem no. %d",(i+1));
        printf("\nEnter Product : ");
        scanf("%s",arr[i].product);
        printf("Enter Item Title : ");
        scanf("%s",arr[i].title);
        printf("Enter price of Item : ");
        scanf("%f",&arr[i].price);
    }

    
    int min = 0;
        for(int i=1; i<5; i++)
        {
            if(arr[min].price > arr[i].price)
            {
                min = i;
            }
        }
        printf("\nDetail of Lowest Item : \n");

            printf("\nEnter Product : %s",arr[min].product);
            printf("\nEnter Item Title : %s",arr[min].title);
            printf("\nEnter price of Item : %.2f",arr[min].price);

    return 0;
}