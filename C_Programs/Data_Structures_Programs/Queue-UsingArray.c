//A C program demonstrating queue operations using array.                      © Ishav Verma Jun/2021
#include<stdio.h>
#include<stdlib.h>

void enQueue(int);
void deQueue();
void display();
int SIZE, queue[100], front = -1, rear = -1;

int main()
{
    printf("Enter size of queue: ");
    scanf("%d", &SIZE);
   int value, choice;
   do{
      printf("\n1.EnQueue\n2.DeQueue\n3.Display\n4.Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
     case 1: 
         enQueue(value);
         break;
     case 2: deQueue();
         break;
     case 3: display();
         break;
     case 4: exit(0);
     default: printf("\nError! Please input values correctly.");
      }
   }    while(choice!=4);
return 0;
}
void enQueue(int value){
   if(rear == SIZE-1)
      printf("\nQueue is full!");
   else{
    printf("Enter the value to be insert: ");
    scanf("%d",&value);
      if(front == -1)
      //front = 0;
      rear++;
      queue[rear] = value;
   }
}
void deQueue(){
   if(front == rear)
      printf("\nQueue is empty!");
   else{
      printf("\nDeleted element is: %d", queue[front]);
      front++;
   }
}
void display(){
   if(rear == -1)
      printf("\nQueue is empty!");
   else{
      int i;
      printf("\nElements in queue are: ");
      for(i=front; i<=rear; i++)
      printf("%d ",queue[i]);
   }
}