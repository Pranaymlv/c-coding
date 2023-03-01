#include<stdio.h>

int main()
{
     int a[100],i,n,b[100],c[100],max1=0,max2=0,d[100],len1=0,len2=0;
     printf("Enter no. of rounds: \n");
     scanf("%d",&n);
     printf("Enter the score of player 1:\n" );
    for ( i = 0; i < n; i++)
    {
        printf("Enter score of round %d : ",i+1);
        scanf("%d",&a[i]);
    }
     printf("Enter the score of player 2:\n" );
    for ( i = 0; i < n; i++)
    {
        printf("Enter score of round %d : ",i+1);
        scanf("%d",&b[i]);
    }
    for ( i = 1; i < n; i++)
    {
        a[i]=a[i-1]+a[i];
    }
    for ( i = 1; i < n; i++)
    {
        b[i]=b[i-1]+b[i];
    }
    for ( i = 0; i < n; i++)
    {
        if (a[i]>b[i])
        {   
            c[i]=a[i]-b[i] ;
            printf("player 1 wins with alead of %d\n",c[i]);
            
        }
        else if(a[i]<b[i])
        {
            d[i]=b[i]-a[i] ;
            printf("player 2 wins with a lead of %d\n",d[i]);
            
        }
    }
}    