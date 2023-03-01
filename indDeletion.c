#include<stdio.h>
void display(int a[], int size)
{
     for ( int i = 0; i < size; i++)
     {
          printf("element %d\n",i+1);
          printf("%d\n",a[i]);
     }
}

int deletion(int arr[],int size, int f )
{
    for (int i = f; i < size ; i++)
    {
        arr[i]=arr[i+1];
    }
    
}
int main()
{
    int arr[100],size,i,f;
    printf("enter the no of elements\n");
    scanf("%d",&size);
    for ( i = 0; i < size; i++)
    {
        printf("enter the element %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    display(arr,size);
    printf("enter the index of elements which to be deleted\n");
    scanf("%d",&f);
    deletion(arr,size,f);
    size=size-1;
    display(arr,size);

return 0;
}