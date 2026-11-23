# Stack & Queue**

**1. Stack**

**Definition of Stack**

A Stack is a linear data structure in which insertion and deletion of elements are performed only at one end, called the TOP.

Stack follows the principle of LIFO (Last In, First Out). This means the element inserted last is removed first.

**Example:**
 A stack of plates. The plate placed at the top is removed first.

**Basic Operations of Stack**

| Operation | Description |
|---|---|
| Push | Adds an element to the top of the stack. |
| Pop | Removes the top element from the stack. |
| Top / Peek | Returns the top element without removing it. |
| isEmpty() | Checks whether the stack is empty. |
| isFull() | Checks whether the stack is full. |

**Example:**

```text
       Push or Pop
          ↓   ↑
       ┌────────┐
       │   30   │ ← TOP
       ├────────┤
       │   20   │
       ├────────┤
       │   10   │
       └────────┘
```

**A Stack can be implemented using two methods:**

1. Static Implementation (Stack using Array)
2. Dynamic Implementation (Stack using Linked List)

---

**1.1 Push Operation**

Push is used to insert a new element at the TOP of the stack.

**Algorithm: PUSH**

Step 1: Start

Step 2: If TOP = SIZE - 1 then

           Print "Stack Overflow"
           Go to Step 6

Step 3: Read VALUE

Step 4: TOP = TOP + 1

Step 5: STACK[TOP] = VALUE

Step 6: Stop

**Time Complexity:**

- Best Case: O(1)
- Average Case: O(1)
- Worst Case: O(1)

Big O: O(1) — Constant Time

**1.2 Pop Operation**

Pop is used to remove the top element from the stack.

**Algorithm: POP**

Step 1: Start

Step 2: If TOP = -1 then

           Print "Stack Underflow"
           Go to Step 6

Step 3: ITEM = STACK[TOP]

Step 4: TOP = TOP - 1

Step 5: Print ITEM

Step 6: Stop

**Time Complexity:**

- Best Case: O(1)
- Average Case: O(1)
- Worst Case: O(1)

Big O: O(1) — Constant Time

**1.3 Display Operation**

Display is used to print all the elements present in the stack from TOP to bottom.

**Algorithm: DISPLAY**

Step 1: Start

Step 2: If TOP = -1 then

           Print "Stack is Empty"
           Go to Step 6

Step 3: Set I = TOP

Step 4: Repeat while I >= 0

           Print STACK[I]
           I = I - 1

Step 5: Stop

Step 6: Stop

**Time Complexity:**

- Best Case: O(1) — Empty Stack
- Average Case: O(n)
- Worst Case: O(n) — All elements displayed

Big O: O(n) — Linear Time

---

**1.4 C Program for Stack Using Array**

```c
#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

// Push Operation
void push()
{
    int value;

    if(top == SIZE - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter value: ");
        scanf("%d", &value);

        top++;
        stack[top] = value;

        printf("%d inserted successfully\n", value);
    }
}

// Pop Operation
void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Deleted element: %d\n", stack[top]);
        top--;
    }
}

// Display Operation
void display()
{
    if(top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack elements:\n");

        for(int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}
```

**1.5 Infix to Postfix and Prefix Conversion**

**1. Infix Expression**

An infix expression is an expression in which the operator is placed between the operands.

Example:

```text
A + B
```

Here, A and B are operands, and + is an operator.

**2. Postfix Expression**

A postfix expression is an expression in which the operator is placed after the operands.

It is also known as Reverse Polish Notation (RPN).

Example:

```text
Infix   : A + B
Postfix : AB+
```

**3. Prefix Expression**

A prefix expression is an expression in which the operator is placed before the operands.

It is also known as Polish Notation.

Example:

```text
Infix  : A + B
Prefix : +AB
```

**Example of Conversion:**

```text
Infix   : (A + B) * C
Postfix : AB+C*
Prefix  : *+ABC
```

**1.6 Stack Using Recursion – Theory**

**Definition**

Recursion is a programming technique in which a function calls itself repeatedly to solve a problem.

In recursion, the system uses a stack data structure called the Call Stack to manage function calls.

Whenever a recursive function is called, its information is stored in the stack. When the function completes its execution, the information is removed from the stack.

The stack follows the LIFO (Last In, First Out) principle.

**Working of Stack in Recursion**

1. When a function calls itself, a new stack frame is created.
2. The stack frame stores local variables, parameters, and the return address.
3. Each recursive call is pushed onto the call stack.
4. When the base condition is reached, recursion stops making new calls.
5. The functions return in reverse order of their calls.
6. Each completed function call is removed from the stack.

**Example: Factorial Using Recursion**

```c
#include <stdio.h>

int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    int n = 5;

    printf("Factorial = %d", factorial(n));

    return 0;
}
```

**Output:**

```text
Factorial = 120
```

**1.7 Time Complexity of Stack**

| Operation | Best Case | Average Case | Worst Case |
|---|---|---|---|
| Push | O(1) | O(1) | O(1) |
| Pop | O(1) | O(1) | O(1) |
| Peek | O(1) | O(1) | O(1) |
| Display | O(1) | O(n) | O(n) |

**1.8 Advantages of Stack**

1. Easy to implement.
2. Fast insertion and deletion.
3. Uses the LIFO principle.
4. Useful in recursion and function calls.
5. Helps in expression conversion and evaluation.

**1.9 Disadvantages of Stack**

1. Only the top element can be accessed directly.
2. Fixed-size array implementation has limited capacity.
3. Stack Overflow can occur when the stack is full.
4. Stack Underflow can occur when the stack is empty.

**1.10 Applications of Stack**

1. Function calls and recursion.
2. Infix to Postfix conversion.
3. Infix to Prefix conversion.
4. Expression evaluation.
5. Undo and Redo operations.
6. Parentheses matching.
7. Browser history.

---

# 2. Queue

**Definition of Queue**

A Queue is a linear data structure in which insertion and deletion of elements are performed at different ends.
Queue follows the principle of FIFO (First In, First Out). This means the element inserted first is removed first.

**Example:** A line of people waiting at a ticket counter. The person who comes first gets the ticket first.

**Basic Operations of Queue**

| Operation | Description |
|---|---|
| Enqueue | Adds an element at the REAR end of the queue. |
| Dequeue | Removes an element from the FRONT end of the queue. |
| Front / Peek | Returns the first element without removing it. |
| Rear | Returns the last element of the queue. |
| isEmpty() | Checks whether the queue is empty. |
| isFull() | Checks whether the queue is full. |

**Example:**

```text
       Enqueue                 Dequeue
          ↓                       ↑
FRONT  ┌────┬────┬────┬────┐  REAR
       │ 10 │ 20 │ 30 │ 40 │
       └────┴────┴────┴────┘
```

**A Queue can be implemented using two methods:**

1. Static Implementation (Queue using Array)
2. Dynamic Implementation (Queue using Linked List)

---

**2.1 Types of Queue**

There are mainly four types of Queue:

**1. Simple Queue (Linear Queue)**

A Simple Queue follows the FIFO principle. Insertion is performed at the REAR end, and deletion is performed at the FRONT end.

Example:

```text
FRONT                   REAR
  ↓                       ↓
┌────┬────┬────┬────┐
│ 10 │ 20 │ 30 │ 40 │
└────┴────┴────┴────┘
```

**2. Circular Queue**

A Circular Queue is a type of queue in which the last position is connected to the first position.

It efficiently uses the empty spaces created after deletion.

Example:

```text
       ┌────┬────┬────┐
       │ 10 │ 20 │ 30 │
       └────┴────┴────┘
         ↑           ↓
         └───────────┘
```

**3. Priority Queue**

A Priority Queue is a type of queue in which each element is assigned a priority.

Elements are removed according to their priority instead of only following the FIFO principle.

Example:

```text
Element    Priority
  10          3
  20          1
  30          2

Element 20 is removed first because it has the highest priority.
```

**4. Deque (Double Ended Queue)**

A Deque is a type of queue in which insertion and deletion can be performed from both ends.

Example:

```text
       FRONT                 REAR
         ↕                     ↕
       ┌────┬────┬────┬────┐
       │ 10 │ 20 │ 30 │ 40 │
       └────┴────┴────┴────┘
```

---

**2.2 Enqueue Operation**

Enqueue is the operation used to insert a new element at the REAR end of the queue.

**Algorithm: ENQUEUE**

Step 1: Start

Step 2: If REAR = SIZE - 1 then

           Print "Queue Overflow"
           Go to Step 7

Step 3: Read VALUE

Step 4: If FRONT = -1 then

           FRONT = 0

Step 5: REAR = REAR + 1

Step 6: QUEUE[REAR] = VALUE

Step 7: Stop

**Time Complexity:**

- Best Case: O(1)
- Average Case: O(1)
- Worst Case: O(1)

Big O: O(1) — Constant Time

**2.3 Dequeue Operation**

Dequeue is the operation used to remove an element from the FRONT end of the queue.

**Algorithm: DEQUEUE**

Step 1: Start

Step 2: If FRONT = -1 OR FRONT > REAR then

           Print "Queue Underflow"
           Go to Step 7

Step 3: ITEM = QUEUE[FRONT]

Step 4: If FRONT = REAR then

           FRONT = -1
           REAR = -1

Step 5: Else

           FRONT = FRONT + 1

Step 6: Print ITEM

Step 7: Stop

**Time Complexity:**

- Best Case: O(1)
- Average Case: O(1)
- Worst Case: O(1)

Big O: O(1) — Constant Time

**2.4 Display Operation**

Display is used to print all the elements present in the queue from FRONT to REAR.

**Algorithm: DISPLAY**

Step 1: Start

Step 2: If FRONT = -1 then

           Print "Queue is Empty"
           Go to Step 6

Step 3: Set I = FRONT

Step 4: Repeat while I <= REAR

           Print QUEUE[I]
           I = I + 1

Step 5: Stop

Step 6: Stop

**Time Complexity:**

- Best Case: O(1) — Empty Queue
- Average Case: O(n)
- Worst Case: O(n) — All elements displayed

Big O: O(n) — Linear Time

---

**2.5 C Program for Queue Using Array**

```c
#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Enqueue Operation
void enqueue()
{
    int value;

    if(rear == SIZE - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        printf("Enter value: ");
        scanf("%d", &value);

        if(front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = value;

        printf("%d inserted successfully\n", value);
    }
}

// Dequeue Operation
void dequeue()
{
    if(front == -1)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Deleted element: %d\n", queue[front]);

        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
    }
}

// Display Operation
void display()
{
    if(front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue elements: ");

        for(int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}
```

**Note:** This is a Linear Queue implementation. After deletion, empty positions at the beginning cannot be reused. A Circular Queue solves this limitation.

**2.6 Time Complexity of Queue**

| Operation | Best Case | Average Case | Worst Case |
|---|---|---|---|
| Enqueue | O(1) | O(1) | O(1) |
| Dequeue | O(1) | O(1) | O(1) |
| Front / Peek | O(1) | O(1) | O(1) |
| Display | O(1) | O(n) | O(n) |

Here, n represents the number of elements in the queue.

**2.7 Advantages of Queue**

1. Follows the FIFO principle.
2. Efficient insertion and deletion operations.
3. Useful for managing tasks in order.
4. Helps in CPU scheduling.
5. Used in data transmission and buffering.

**2.8 Disadvantages of Queue**

1. A Linear Queue may waste memory spaces after deletion.
2. Searching an element takes O(n) time.
3. A fixed-size array queue has limited capacity.
4. Insertion and deletion are restricted to specific ends.

**2.9 Applications of Queue**

1. CPU Scheduling.
2. Printer Queue Management.
3. Keyboard and Network Buffers.
4. Breadth First Search (BFS) in Graphs.
5. Call Center Systems.
6. Ticket Booking Systems.
7. Operating System Task Scheduling.

---

**Difference Between Stack and Queue**

| Stack | Queue |
|---|---|
| Follows LIFO principle. | Follows FIFO principle. |
| Insertion is called Push. | Insertion is called Enqueue. |
| Deletion is called Pop. | Deletion is called Dequeue. |
| Insertion and deletion happen at TOP. | Insertion happens at REAR and deletion at FRONT. |
| Example: Stack of plates. | Example: Line of people. |
| Used in recursion and expression evaluation. | Used in scheduling and BFS. |

---

