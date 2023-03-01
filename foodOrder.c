#include <stdio.h>
#include <string.h>
char s[50];
char user[50] = "pranaymlv";
int b = 895688, c = 0, pass;
int total = 0;

void login()
{
    char p = 'y';
    printf("\n\n******************  Login to continue  ******************\n\n");
    do
    {
        printf("\t User name:\t");
        scanf("%s", s);
        printf("\t password:\t");
        scanf("%d", &pass);
        int value1 = strcmp(user, s);
        if (value1 == 0 && pass == b)
        {
            hotel();
        }
        else
        {
            printf("\nIncorrect Email id or Password\n");
            printf("Do you want to continue (press y or n)...");
            scanf("%c", &p);
        }
    } while (p == 'y');
}
void hotel()
{
    int n;
    printf("\n\nWelcome %s, ", user);
    printf("Your are successfully ");
    printf("logged in\n\n ");
    printf("In which hotel would you like to eat...\n");
    printf("1.Aarya_Bhavan\n");
    printf("2.Banu_Hotel\n");
    printf("3.SR_Bhavan\n");
    printf("4.Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        Aarya_Bhavan();
        break;

    case 2:
        Banu_Hotel();
        break;
    case 3:
        SR_Bhavan();
        break;
    case 4:
        main();

        break;

    default:
        printf("Invalid key\n");
        break;
    }
}

void Aarya_Bhavan()
{
    struct food
    {
        char item[20];
        int rate;
    } f[5];

    int n;
    strcpy(f[0].item ,"Sandwich");
    strcpy(f[1].item ,"Pizza");
    strcpy(f[2].item ,"Fried Rice");
    strcpy(f[3].item ,"Ice-Cream");
    strcpy(f[4].item ,"Noodles");
    f[0].rate = 70;
    f[1].rate = 140;
    f[2].rate = 80;
    f[3].rate = 40;
    f[4].rate = 90;
    char x=NULL;
    int t, i;

    do
    {
        printf("\t\t\t*****  Menu  *****\n\n\n");

        for (i = 0; i < 5; i++)
        {
            printf("%d. %s   -   %d \n", i + 1, f[i].item, f[i].rate);
        }

        printf("Enter your Choice: ");
        scanf("%d", &n);
        switch (n)
        {

        case 1:
        {
            printf("Enter the no of count: ");
            scanf("%d", &t);
            total = total + t * f[0].rate;
            break;
        }
        case 2:
        {
            printf("Enter the no of count: ");
            scanf("%d", &t);
            total = total + t * f[1].rate;
            break;
        }
        case 3:
        {
            printf("Enter the no of count: ");
            scanf("%d", &t);
            total = total + t * f[2].rate;
            break;
        }
        case 4:
        {
            printf("Enter the no of count: ");
            scanf("%d", &t);
            total = total + t * f[3].rate;
            break;
        }
        case 5:
        {
            printf("Enter the no of count: ");
            scanf("%d", &t);
            total = total + t * f[4].rate;
            break;
        }
        default:
            printf("Enter the valid character.\n");
        }
        printf("For adding more items press 'Y' else press 'N' ");
        scanf("%c", &x);

    } while (x == 'Y' || x == 'y');

    printf("Your order is in progress \n\n");
    printf("You have to pay on delivery\n");
    printf("Your total  bill is %d rs\n\n\n", total);
    printf("Thank you for ordering\n");
    printf("\t\t********Visit again********\n");
}

void Banu_Hotel()
{
    struct food
    {
        char item[20];
        int rate;
    } f[5];

    int n;
    strcpy(f[0].item , "Paraatha");
    strcpy(f[1].item , "omelette");
    strcpy(f[2].item , "Chicken Rice");
    strcpy(f[3].item , "Butter Chicken");
    strcpy(f[4].item , "Gulab-Jamun");
    f[0].rate = 70;
    f[1].rate = 50;
    f[2].rate = 100;
    f[3].rate = 180;
    f[4].rate = 30;
    char x=NULL;
    int t, i;

    do
    {
        printf("\t\t\t*****  Menu  *****\n\n\n");
        for (i = 0; i < 5; i++)
        {
            printf("%d. %s   -   %d \n", i + 1, f[i].item, f[i].rate);
        }

        printf("Enter your Choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            printf("Enter the no of count: ");
            scanf("%d", &t);
            total = total + t * f[0].rate;
            break;
        }
        case 2:
        {
            printf("Enter the no of count: ");
            scanf("%d", &t);
            total = total + t * f[1].rate;
            break;
        }
        case 3:
        {
            printf("Enter the no of count: ");
            scanf("%d", &t);
            total = total + t * f[2].rate;
            break;
        }
        case 4:
        {
            printf("Enter the no of count: ");
            scanf("%d", &t);
            total = total + t * f[3].rate;
            break;
        }
        case 5:
        {
            printf("Enter the no of count: ");
            scanf("%d", &t);
            total = total + t * f[4].rate;
            break;
        }
        default:
            printf("Enter valid character.");
        }
        printf("For adding more items press 'Y' else press 'N' ");
        scanf("%c", &x);

    } while (x == 'Y' || x == 'y');

    printf("Your order is in progress \n\n");
    printf("You have to pay on delivery\n");
    printf("Your total  bill is %d rs\n\n\n", total);
    printf("Thank you for ordering\n");
    printf("\t\t********Visit again********\n");
}

void SR_Bhavan()
{
    struct food
    {
        char item[20];
        int rate;
    } f[5];

    int n;
    strcpy(f[0].item , "Idli");
    strcpy(f[1].item , "Uttappam");
    strcpy(f[2].item,"Dosa");
    strcpy(f[3].item , "Sambhar-Wada");
    strcpy(f[4].item , "Rasmalai");
    f[0].rate = 40;
    f[1].rate = 80;
    f[2].rate = 60;
    f[3].rate = 50;
    f[4].rate = 30;
    char x=NULL;
    int t, i;

    do
    {
        printf("\t\t\t*****  Menu  *****\n\n\n");
        for (i = 0; i < 5; i++)
        {
            printf("%d. %s   -   %d \n", i + 1, f[i].item, f[i].rate);
        }
        printf("Enter 6 for exit\n");

        printf("Enter your Choice: ");
        scanf("%d", &n);

        switch (n)
        {

        case 1:
        {
            printf("Enter the no of count: ");
            scanf("%d", &t);
            total = total + t * f[0].rate;
            x="y";
            break;
        }
        case 2:
        {
            printf("Enter the no of count: ");
            scanf("%d", &t);
            total = total + t * f[1].rate;
            x="y";
            break;
        }
        case 3:
        {
            printf("Enter the no of count: ");
            scanf("%d", &t);
            total = total + t * f[2].rate;
            x="y";
            break;
        }
        case 4:
        {
            printf("Enter the no of count: ");
            scanf("%d", &t);
            total = total + t * f[3].rate;
            x="y";
            break;
        }
        case 5:
        {
            printf("Enter the no of count: ");
            scanf("%d", &t);
            total = total + t * f[4].rate;
            x="y";
            break;
        }
        case 6:
        {
            x="n";
        }
        default:
            printf("Enter valid character");
        }
        printf("For adding more items press 'Y' else press 'N' ");
        scanf("%c", &x);

    } while (x == 'Y' || x == 'y');

    printf("Your order is in progress \n\n");
    printf("You have to pay on delivery\n");
    printf("Your total  bill is %d rs\n\n\n", total);
    printf("Thank you for ordering\n\n");
    printf("\t\t********Visit again********\n");
}

void main()
{
    int n;
    printf("\n\n**********\t\tWELCOME TO FOOD HOME\t\t**********\n\n");
    login();
}