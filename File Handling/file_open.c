#include<stdio.h>
int main (){

    FILE * fileptr ;
    
     fileptr = fopen("work.txt","w");

    char str[120] = "Hello\nApple iphone 16";
     fputs(str,fileptr);
     fclose(fileptr);

    return 0;
}