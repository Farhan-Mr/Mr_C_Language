#include<stdio.h>
int main (){

int n;
printf("Enter no --");
scanf("%d",&n);

    for( int i=1; i<=n; i++ )
    {
        int a=1;
        for( int j=1; j<=i; j++ )
        {
            int z = a+64;
            char ch = (char)z;
            printf("%c",ch);
            a++;
        }
        printf("\n");

    }

    return 0;
}