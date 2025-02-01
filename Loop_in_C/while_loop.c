/*  WAP to print table -  */

#include<stdio.h>
#include<stdlib.h>
int main (){

    do
    {   
        int a;
        printf("Enter 0 to treminate it : \n");
        printf("Enter no. to print table :\n");
        scanf("%d",&a);

        if(0==a){
             exit(0);
        }

        for(int i=1; i<=10; i++){
            printf("%d * %d = %d\n",a,i,(a*i));
        }
    }while(1);
    

    return 0;
}