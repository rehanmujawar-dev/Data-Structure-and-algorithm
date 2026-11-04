#include<stdio.h>
int arr[100],size,top=-1;
//Push operation
void push(){
    int value;
    if(top==size-1)
    {
        printf("Stack is Full");
    }
    else
    {
        printf("Enter the new element : ");
        scanf("%d",&value);
        top++;
        arr[top]=value;
    }
}
//Pop Operation
void pop(){
    int item;
    if (top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        item=arr[top];
        top--;
        printf("Deleted element id %d",item);
    }
}
//Display
void display(){
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        for(int i=0;i<=top;i++)
            {
                printf("%d\t",arr[i]);
            }
    }
}
//Main program
int main(){
    int ch;
    printf("Enter the size of stack : ");
    scanf("%d",&size);
    while(ch!=4){
    printf("\nEnter the choice : \n");
    printf("1.Push\t 2.Pop\t 3.Display\t 4.Exit\n");
    scanf("%d",&ch);
   
        switch(ch)
        {
            case 1:push();
                    break;
            case 2:pop();
                    break;
            case 3:display();
                    break;
            case 4:printf("Exit");
                    break;
            default :printf("Enter the valid number");
        }
    }
}

/*
Algorithm: Stack_Implementation

Step 1: Start
Step 2: Initialize top = -1
Step 3: Read the size of stack
Step 4: Repeat the following steps until choice = 4
        Display menu:
        1. Push
        2. Pop
        3. Display
        4. Exit
        Read choice
Step 5: If choice = 1 then
        a. If top = size - 1
              Print "Stack is Full"
        b. Otherwise
              Read value
              top = top + 1
              arr[top] = value
Step 6: If choice = 2 then
        a. If top = -1
              Print "Stack is Empty"
        b. Otherwise
              item = arr[top]
              top = top - 1
              Print deleted item
Step 7: If choice = 3 then
        a. If top = -1
              Print "Stack is Empty"
        b. Otherwise
              Repeat for i = top to 0
              Print arr[i]
Step 8: If choice = 4 then
        Print "Exit"
Step 9: Stop
*/