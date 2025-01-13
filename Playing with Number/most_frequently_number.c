#include<stdio.h>
int main (){

int a;
    printf("Enter size of array : ");
    scanf("%d",&a);

    int arr[a];
    printf("Enter elements of array : ");
    for(int i=0; i<a; i++ ){
        scanf("%d",&arr[i]);
    }
    printf("Giver array is : ");
        for(int i=0; i<a; i++ ){
        printf("%d  ",arr[i]);
    }
    int max_num = 0;
    int max_arr = 0;
        for(int i=0; i<a; i++ ){
            int count = 0;
            for(int j=0; j<a; j++){
                if (arr[i]==arr[j])
                {
                    count ++ ;
                }                
            }
         if(count>max_num)
         {
            max_num = count;
            max_arr = arr[i];
         }   
        }
        printf("\nMost frequently number is %d ",max_arr);

    return 0;
}