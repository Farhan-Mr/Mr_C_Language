// wap to call function to calculate price with gst -

#include<stdio.h>

void gst_price(float arr[], int pri);             // function declear

int main() {

    float arr[5];
    printf("Enter price of 5 items: ");

    for (int i = 0; i < 5; i++) {
        scanf("%f", &arr[i]); 
    }

    gst_price(arr, 5); 

    return 0;
}

void gst_price(float arr[], int pri)             // function defination 
{
    for(int i=0; i<pri; i++){
        float pri_gst = arr[i]+(arr[i]*0.18);
        printf("Price of Item %d with GST: %.2f\n",(i+1), pri_gst);
    }
    
}