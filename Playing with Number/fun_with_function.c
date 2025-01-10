
// Method 2: 
#include<stdio.h>
void add ()                         // Deffination 
{                                   // Deffination 
    int i,n,a;
    printf("\nIt's Time to sum - ");
    printf("\nEnter 1st no. :- ");
    scanf("%d",&i);
    printf("Enter 2nd no. :- ");
    scanf("%d",&n);

    a=i+n;
    printf("Sum is %d\n",a);
printf("Thanku for Come here --- \n\n");
}
void sub ()
{
    int i,n,S;
    printf("Welcome to find Difference - \n");
    printf("Enter 1st no. :- ");
    scanf("%d",&i);
    printf("Enter 2nd no. :- ");
    scanf("%d",&n);

    S=i-n;
    printf("Difference is %d\n",S);
printf("Thanku to Come here ---\n");
}
int main (){                                        // Main Function 
printf("Welcome it's time to Fun - \n");            
    add();                                          //Calling 
    sub();                                          //Calling 
printf("\nHave a Nice Day | Evening --- ");
    return 0;
}