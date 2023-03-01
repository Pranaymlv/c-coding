#include <stdio.h>
#include <stdlib.h>
 int total = 0;
typedef struct node {
  int bill;
  struct node *next;
} Node;

typedef struct {
  Node *head;
  int size;
} LinkedList;


void init(LinkedList *ll) {
  ll->head = NULL;
  ll->size = 0;
}


void insert_first(LinkedList *ll, int bill) {
  Node *new_node = (Node *)malloc(sizeof(Node));
  new_node->bill = bill;
  new_node->next = ll->head;
  ll->head = new_node;
  ll->size++;
}


void display_total_sale_day(LinkedList *ll) {
 
  Node *current = ll->head;
  while (current != NULL) {
    total += current->bill;
    current = current->next;
  }
 
}


void display_total_sale_week(LinkedList *ll, int num_days) {
  int total = 0;
  Node *current = ll->head;
  while (current != NULL) {
    total += current->bill;
    current = current->next;
  }
  printf("Total sale for the week: %dRs\n", total * num_days);
}

void display_max_bill(LinkedList *ll) {
  if (ll->size == 0) {
    printf("Error: no bills to display\n");
    return;
  }
}
int main() {
  LinkedList ll;
  init(&ll);
   int i,z,s;
  
  printf("Price of 1 cup of coffee is Rs50\nEnter the number of sales per day\nFor Example day 1: 20\nday 2: 30\n");

  int a,n,arr[7];
  
  for( i=1;i<=7;i++){
    printf("Enter the sales of the day %d: ",i);
    scanf("%d",&a);
    insert_first(&ll, a);
    arr[i]=a;
  }

  
    display_total_sale_week(&ll, 50);
    display_total_sale_day(&ll);
    display_max_bill(&ll);
   
printf("\n\n\n\n");
printf("\nEnter 1. Display total sale of the day.\n 2. Display total sale of the week. \n3. Maximum and minimum bill of the day.\n");
scanf("%d",&n);
switch(n)
{
  case 1: 
  printf("enter the number of day\n");
  scanf("%d",&z);
  for( i=1;i<=7;i++){
      if(i==z){
       s=arr[i];
    
       break;
    }
  }
  printf("total sale of the day %d: %d\n",z,s);
  break;
  case 2: 
  printf("total sale of the week: %d\n", total);
  break;
  case 3:
  printf("Case 3 is not included in program\n");
  break;
  default:
  printf("Enter  correct choice\n");
  

i++;
}while(i>0);

  return 0;
}