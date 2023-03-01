#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node*prev;
    int data;
    struct node*next;
};
struct node*start=NULL;
struct node*temp;
void create(int ele)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node*));
    newnode->prev=NULL;
    newnode->data=ele;
    newnode->next=NULL;
     
    if(start==NULL)
    {
        start=newnode;
        temp=start;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    
}
    void display()
    {
        struct node*current=start;
        if(start==NULL)
        {
            printf("list is not created\n");
        }
        else
        {
            printf("dll elements are: \n");
            while(current!=NULL)
            {
                printf("%d\n",current->data);
                current=current->next;
            }
        }
    }
    void insert(int pos,int ele)
    {
        struct node*current;
        struct node*newnode;
        newnode=(struct node*)malloc(sizeof(struct node*));
        int i;
        newnode->prev=NULL;
        newnode->data=ele;
        newnode->next=NULL;
        if (pos==1)
        {
            start->prev=newnode;
            newnode->next=start;
            start=newnode;
        }
        else 
        {
            current=start;
            for(i=0;i<=pos-2;i++)
            {
                current=current->next;
            }
            if (current->next==NULL)
            {
                current->next=newnode;
                newnode->prev=current;
            }
            else
            {
                newnode->next=current->next;
                current->next->prev=newnode;
                newnode->prev=current;
                current->next=newnode;
            }
            
        }
        

    }


int main()
{
    create(25);
    create(55);
    create(65);
    create(75);
    display();
    insert(3,45);
    display();
    
        
return 0;
}