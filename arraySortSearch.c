#include<stdio.h>

int main()
{
    int i,n,a[100],temp,j,x,f,low=0,hi,mid;
    
    printf("enter no. of elements\n");
    scanf("%d",&n);
    hi=n-1;
    for ( i = 0; i < n; i++)
    {
        printf("enter the elements\n");
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    printf("sorted elements:\n");
    for ( i = 0; i < n; i++)
    {
        printf(" %d\n",a[i]);
    }
    printf("enter the number to find\n");
   scanf("%d",&f);
    
       while (low=hi)
 {
    
     mid=(low+hi)/2;
    if (a[mid]==f)
       {
           printf("%d is present at index %d",f,mid);
           break;
       }
 else if (a[mid]<f)
   {
       low=mid+1;
  }
else if (a[mid]>f)
 {
     hi=mid-1;
 }
  else
 {
     printf("%d is not present in array");
   }
    
 }

    return 0;
}
    