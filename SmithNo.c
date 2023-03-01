#include<stdio.h>

int sumOfDigit(int n)
{
    int temp,sum;
    while (n!=0)
    {
        temp=n%10;
        sum = sum + temp*10;
        n=n/10;
    }
    return sum;
}

 int fact(int n,int i)
{
    while(n%i!=0)
        {
            n=n/i;

         return 1;
        }
    
}

int main()
{
     int n,fac[50],j=0,temp;
     printf("enter the number\n");
     scanf("%d",&n);
     for (int i = 2; i <= n/2; i++)
     {
        if (fact(n,i)==1)
        {
            fac[j]=i;
            j++;
        }
     }
     for ( int i = 0; i <= 2; i++)
     {
        printf("%d\n",fac[i]);
        
     }
     
     

return 0;
}