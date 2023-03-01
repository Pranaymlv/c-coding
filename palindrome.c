#include<stdio.h>
int palindrome(int n)
{
    int r,rev=0;
    if(n!=0)
    {
    r=n%10;
    rev=rev*10+r;
    palindrome(n/10);
    }
    else{
        return rev;
    }

}
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    if (n==palindrome(n))
    {
        printf("no. is palindrome");
    }
    else{
        printf("no. is not a palindrome");
    }
    

return 0;
}