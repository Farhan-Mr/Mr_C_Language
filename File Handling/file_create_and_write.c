#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
    int main (){

        FILE *ptr ; 
        char name[20], add[50] ;

        printf("Enter your name and adsress : ");
        scanf("%s",name);
        scanf("%s",add);

        ptr = fopen("write.txt","w");
        fprintf(ptr,"%s\n",name);
        fprintf(ptr,"%s\n",add);

        fclose(ptr);
        

        return 0;
    }