#include<stdio.h>
int main()
{
    int sum=0,i,n;
    printf("enter the no. of terms\n");
   scanf("%d",&n);
   /* for ( i = 2; i <= n; i+2)
    {
        sum=sum+i;
    } */
   sum = (n)*(n+2)/4;

   printf("sum of even numbers upto %d is %d",n,sum);
   

return 0;

}
