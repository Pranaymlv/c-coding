#include<stdio.h>

    void main()
    {
        int x, i, j=1;
        int factors[101];
    

        printf("Enter a number: ");
        scanf("%d", &x);
        factors[0]=1;

        for(i=2;i<=x;i++)
        {
            if(x%i==0)
            {
                factors[j]=i;
                j++;
                
                i--;
                
            }
        }
         for(i=0;i<=x;i++)
         {
            printf("%d\n",factors[i]);
         }

        
         
    
    }