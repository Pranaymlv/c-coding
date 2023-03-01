#include<stdio.h>
int main()
{
    int n=21,i,x,ans1,ans2;
    printf("you have 21 sticks. At one time you can pick upto six sticks and then there is a chance of cpu to pick sticks upto 6 \n ");
    printf("At last who have left with no sticks he will lost\n");

    while (n>0)
    {
        printf("enter no. of sticks you have choosen\n");
        scanf("%d",&x);
        if (x>6 && x<1)
        {
            printf("enter correct value");

        break;
        }
        
        ans1=7-x;
        printf("cpu has choosen %d sticks\n",ans1);
        ans2=n-x-ans1;
        printf("you have remain with %d sticks\n",ans2);
        n=n-x-ans1;

        
    }
    printf("you lost\n");


return 0;
}
