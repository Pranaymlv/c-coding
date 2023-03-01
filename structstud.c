#include<stdio.h>
#include<stdlib.h>
struct students
{
    int roll_no;
    int id;
    char name[15];
    float total;
}stud[5];
int main()
{
    int i, n, ch,flg=0;
    char res;
    int target_id,max=0;
    char newname;
   do
   {
    printf("\n1.creation\n2.display\n3.search\n4. update\n5.Maximum marks\n6.exit");
    printf("\n Enter your choice:\t");
    scanf("%d",&ch);
switch(ch)
{
case 1:
   
    printf("\nEnter no of students:\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter roll_no:\t");
        scanf("%d",&stud[i].roll_no);
        printf("\n Enter id :\t");
        scanf("%d",&stud[i].id);
        printf("\n Enter student name:\t");
        scanf("%s",stud[i].name);
        printf("\n Enter total marks:\t");
        scanf("%f",&stud[i].total);
    }
    break;
    case 2:
   
    printf("\nroll_no Id\tid\tStudent Name\tTotal\n");
    printf("\n---------------------------------------------");
    for(i=0; i<n; i++){

        printf("\n%d\t", stud[i].roll_no);

        printf("%d\t",stud[i].id);

        printf("%s\t",stud[i].name);

        printf("%f\t",stud[i].total);
    }

    break;
    case 3:
   

    printf("\nEnter the target id: ");
    scanf("%d",&target_id);

    for(i=0; i<n; i++){
        if(stud[i].roll_no==target_id){
        printf("%d\t",stud[i].roll_no);

        printf("%d\t",stud[i].id);

        printf("%s\t",stud[i].name);

        printf("%f\t",stud[i].total);
        flg=1;
        break;
        }

    }
    if(flg==0)
        printf("\nRecord not found");
    break;
case 4:
   
    printf("\n Enter roll_no whose name is to be modified\t");
    scanf("%d",&target_id);
    printf("\nEnter the new name\t");
    scanf("%d",&newname);
    for(i=0;i<n;i++)
    {
        if(target_id==stud[i].name)
        {
           stud[i].id=newname;
           break;
        }
    }
    break;
case 5:
        for(i=0;i<n;i++)
       { 
            if(stud[i].total>max)
            {
                max=stud[i].total;
            }
       }
       for ( i = 0; i < n; i++)
       {
            if (max==stud[i].total)
            {
                printf("Roll no : %d\n",stud[i].roll_no);
                printf("ID : %d\n",stud[i].id);
                printf("Name : %s\n",stud[i].name);
                printf("Marks : %f\n",stud[i].total);
            }
            
       }
       break;
       
    default:
    exit(0);

}
printf("\nWant to continue...\t");
scanf(" %c",&res);
   }while(res =='y');
}
