/*Given an array of integers nums and an integer target,
 return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution,
 and you may not use the same element twice.
*/
#include<stdio.h>
int main()
{
     int i,j,a[100],n,q,x;
     printf("Enter the number of elements\n");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
        printf("Enter element %d : ",i+1);
        scanf("%d",&a[i]);
     }
     printf("Enter the sum required : ");
     scanf("%d",&x);
     for(i=0;i<n;i++)
     {
        for(j=0;j<i;j++)
        {
            if ((a[i]+a[j])==x)
            {
                printf("[%d,%d]\n",i,j);
            }
        }
     }

return 0;
}