#include<stdio.h>
int fibonacci(int n)
{
    int i,n2=1,n3,n1=0;
    printf("%d,%d",n1,n2);
    for ( i = 3; i <= n; i++)
    {
        n3=n2+n1;
        n1=n2;
        n2=n3;
        printf(",%d",n3);
    }   
}
int main()
{
    int n,n1=0,n2=1;
    printf("enter the no of terms of fibonacci series have to print: \n");
    scanf("%d",&n);
    fibonacci(n);
}