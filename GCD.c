#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter smaller integer: \n");
    scanf("%d ", &n1);
    printf("Enter greater integer: \n");
    scanf("%d",&n2);

    for(i=1; i <= n2; ++i)
    {
        
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D  is %d", gcd);

    return 0;
}