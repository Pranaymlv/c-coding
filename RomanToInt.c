#include <stdio.h>


int romanToInt(char s[])
{
    int i = 0, total = 0;
    while (s[i] != '\0')
    {
        if (s[i] == 'I')
        {
            total = total + 1;
        }
        else if (s[i] == 'V')
        {
            total = total + 5;
        }
        else if (s[i] == 'X')
        {
            total = total + 10;
        }
        else if (s[i] == 'L')
        {
            total = total + 50;
        }
        else if (s[i] == 'C')
        {
            total = total + 100;
        }
        else if (s[i] == 'D')
        {
            total = total + 500;
        }
        else if (s[i] == 'M')
        {
            total = total + 1000;
        }
        else
        {
            printf("incorrect value");
        }
        i++;
    }
    return total;
}
int main()
{
    char s[10];
    int n, total;
    printf("Enter the roman number\n");
    gets(s);
    total = romanToInt(s);
    printf("%d", total);

    return 0;
}