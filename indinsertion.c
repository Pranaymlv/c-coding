#include<stdio.h>
void display(int a[], int size)
{
     for ( int i = 0; i < size; i++)
     {
          printf("element %d\n",i+1);
          printf("%d\n",a[i]);
     }
     

}
int indinsertion(int size,int capacity,int x ,int a[], int f )
{
     if (size>=capacity)
     {
          return -1;
     }
     else
     {
          for ( int i = size-1; i >= f; i--)
          {
               a[i+1]=a[i];
          }
          a[f]=x;
     }
     return 1;
     
}
int main()
{
     int size,i,capacity=100,a[100],x,f;
     printf("enter the number of elements\n");
     scanf("%d",&size);
     
     for ( i = 0; i < size; i++)
     {
          printf("enter element %d\n",i+1);
          scanf("%d",& a[i]);
     }
     display(a,size);
     printf("enter the element to insert\n");
     scanf("%d",&x);
     printf("enter the index\n");
     scanf("%d",&f);
     indinsertion(size,100,x,a,f);
     size=size+1;
     display(a,size);
     
     

        
return 0;
}