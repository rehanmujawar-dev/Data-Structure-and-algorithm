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