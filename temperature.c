/*Given an array of integers temperatures represents the daily temperatures, 
return an array answer such that answer[i] is the number of days 
you have to wait after the ith day to get a warmer temperature. 
If there is no future day for which this is possible, keep answer[i] == 0 instead.
Example 1:

Input: temperatures = [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]*/


#include<stdio.h>

void difference(int a[],int n)
{
    int b[100],i,j,k=0;
    for(i=0;i<n;i++)
    {
        j=i+1;
        while (j!=n)
        {
            
            if(a[j]>a[i])
            {
                b[k]=(j-i);
                break;
            }
            j++;
        }
        if (b[k]>(n-1))
        {
            b[k]=0;
        }
        k++;        
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",b[i]);
    }
    
}
void create()
{
    int a[100],n,i;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the temperature %d: ",i+1);
        scanf("%d",&a[i]);
    }
    difference(a,n);
    
}

int main()
{
    create();
        
return 0;
}