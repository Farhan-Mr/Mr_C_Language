// WAP to find NCR with the help of Function . 

#include<stdio.h>                   // Header Folder

int fact ( int x );             // Function Declearation

int main (){                        // Main Function 

int n,r;
printf("Enter n -- ");
scanf("%d",&n);

printf("Enter r -- ");
scanf("%d",&r);

if(n>r){
int nfact = fact(n);                // Function Calling
int rfact = fact(r);                // Function Calling
int nrfact = fact(n-r);             // Function Calling

    int ncr = nfact / ( rfact * nrfact );
    printf("NCR is - %d ",ncr);
}
else{
    printf("n is smaller than r \n Which is invalid");
}
    return 0;
}
int fact ( int x )
{

    int a=1;
    for( int i=1; i<=x; i++ )
    {
        a *= i;
    }
    return a;
}