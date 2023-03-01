/*                                                                                                               
you are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a single digit.
Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node*prev;
    int ele;
    struct node*next;
};

struct node*start1=NULL;
struct node*start2=NULL;
struct node*temp1;
struct node*temp2;

void l1(int ele)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node*));
    printf("entered create1\n");
    newnode->prev=NULL;
    newnode->ele=ele;
    newnode->next=NULL;
    if(start1==NULL)
    {
        start1=newnode;
        temp1=newnode;
    }
    else
    {
        temp1->next=newnode;
        newnode->prev=temp1;
        temp1=newnode;
    }
}

void l2(int ele)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node*));
    newnode->prev=NULL;
    newnode->ele=ele;
    newnode->next=NULL;
    printf("entered l2 \n");
    if(start2==NULL)
    {
        start2=newnode;
        temp2=newnode;
    }
    else
    {
        temp2->next=newnode;
        newnode->prev=temp2;
        temp2=newnode;
    }
}

void display(struct node*start);


/* void reverse(int x)
{
    int rev=0,i,rem=0;
    printf("[ ");
    while(x!=0)
    {
        rem=x%10;
        printf("%d ",rem);
        x=x/10;
    }
    printf("]");

}

void add()
{
    int x=0;
    printf("addition is\n");
    
    while(temp1->prev!=NULL && temp2->prev!=NULL)
    {
       x = x*10+(temp1->ele)+(temp2->ele); 
       temp1=temp1->prev;
       temp2=temp2->prev;
    }
    reverse(x);
}
*/
void main()
{
     l1(5);
     l1(6);
     l1(7);
     display(start1);
     
     l2(7);
     l2(8);
     l2(9);
     display(start2);
}

void display(struct node*start) 
{
    struct node*current=start;
    printf("enter display\n");
    if(start==NULL)
    {
        printf("no linked list found\n");
    }
    
    else
    {
        printf("\nElements are :[ ");
        while(current!=NULL)
        {
        printf("%d ",current->ele);
        current = current->next;
        }
        printf("]");
    }
}