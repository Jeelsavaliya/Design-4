/*
1
12
123
1234
   .
   .
   .
*/



#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the char:");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}