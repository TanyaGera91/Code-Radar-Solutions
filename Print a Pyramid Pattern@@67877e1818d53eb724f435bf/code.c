#include<stdio.h>
int main()
{
/*
***
**
*
*/
int N, i,j;
scanf("%d",&N);
for(i=1;i<=N;i++)
{
    for(j=1;j<= 2*N-1;j++)
    {
        if(j>=N-(i-1) && j<= N-(i+1))        
        printf("* ");
        else
        printf(" ");
    }
    printf("\n");
}
return 0;
}