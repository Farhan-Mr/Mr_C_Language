/* WAP to count series 1 + 2 + 3 + 4 + 5 ....  up to n number  */

#include<stdio.h>
int main ()
{
    int n;
    printf("\nEnter number : ");
    scanf("%d",&n);

    int add = 0;
    for(int i=0; i<=n; i++)
    {
        add = add + i;
    }
    printf("Sum is %d",add);
    return 0;
}