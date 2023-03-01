#include <stdio.h>
#define MAX 20
#include<stdlib.h>
int queue_array[MAX];
int rear = - 1;
int front = - 1;
void insert()
{
      int add_item;
      if (rear == MAX - 1)
            printf("Queue Overflow \n");
      else
      {
            if (front == - 1)
                front = 0;
            printf("\nEnter Vehicle : ");
            scanf("%d", &add_item);
            if(queue_array[rear]==add_item){
            	printf("Vehicle should not be %d\n",add_item);
            	return 0;
			}
            printf("\n%d is inserted in queue\n",add_item);
            printf("------------------------------\n");
            rear = rear + 1;
            queue_array[rear] = add_item;
      }
}
void display()
{
      int i;
      if (front == - 1)
            printf("Queue is empty \n");
      else
      {
            printf("\nVehicles are : ");
            for (i = front; i <= rear; i++)
                  printf("%d ", queue_array[i]);
            printf("\n------------------------------");
            printf("\n");
      }
}
int main()
{
      printf("****Welcome to Petrol Pump****\n");
      printf("1. Insert Vehicle (2 or 4) \n");
      printf("2. Display queue\n");
      printf("3. Exit\n");
      printf("------------------------------\n");
      int ch;
      while (1)
      {
            printf("Choose operation : ");
            scanf("%d", &ch);
            switch(ch)
            {
                  case 1:
                        insert();
                        break;
                  case 2:
                        display();
                        break;
                  case 3:
                        exit(1);
                  default:
                        printf("Invalid operation \n");
            }
      }
      return 0;
}