#include<stdio.h>
#include<string.h>
void intToRoman(int x)
{
    char s[20];
    
    while(x!=0)
    {
        if (x>=1000)
        {
            printf("M");
            x=x-1000;
            
        }
        else if (x<1000 && x>=500)
        {
            printf("D");
            x=x-500;
            
        }
        else if (x<500 && x>=100)
        {
             printf("C");
            x=x-100;
            
        }
        else if (x<100 && x>=50)
        {
             printf("L");
            x=x-50;

        }
        else if(x==9)
        {
            printf("IX");
            x=x-9;
        }
        else if (x<50 && x>=10)
        {
         printf("X");
            x=x-10;
           
        }
        else if (x==4)
        {
            printf("IV");
        }
        else if (x<10 && x>=5)
        {
            printf("V");
            x=x-5;
            
        }
        else if(x<5 && x>=1)
        {
            printf("I");
            x=x-1;
           
        }
    }
       
}
int main()
{
    int x;
    printf("Enter the integer:  ");
    scanf("%d",&x);
    intToRoman(x);
        
return 0;
}