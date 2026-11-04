# Stack & Queue 

# 1.Stack :-
Definition of Stack
A Stack is a linear data structure in which insertion and deletion of elements are performed only at one end, called the TOP.
Stack follows the principle of LIFO (Last In, First Out). This means the element inserted last is removed first.
Example: A stack of plates. The plate placed at the top is removed first.

Basic Operations of Stack

The following operations are performed on a stack:

Operation	Description
Push	Adds an element to the top of the stack.
Pop	    Removes the top element from the stack.After every pop operation top is decremented by one.
Top	    Returns the top element without removing it.
isEmpty()	Checks whether the stack is empty.
isFull()	Checks whether the stack is full.

E.g
      Push or pop
        |   ^
        ▼   |
    ┌────────┐
    │   30   │ <--Top
    ├────────┤
    │   20   │
    ├────────┤
    │   10   │
    └────────┘

# A stack can be implemented using two methods:
1. Static Implementation (Stack using Array)
2. Dynamic Implementation (Stack using Linked List)

1.Push Operation :-

Algorithm: PUSH

Step 1: Start
Step 2: If TOP = SIZE - 1 then
            Print "Stack Overflow"
            Go to Step 6
Step 3: Read VALUE
Step 4: TOP = TOP + 1
Step 5: STACK[TOP] = VALUE
Step 6: Stop

Time Complexity:
- Best Case: O(1)
- Average Case: O(1)
- Worst Case: O(1)
Big O: O(1) — Constant Time

2.Pop Operaton :-

Algorithm: POP

Step 1: Start
Step 2: If TOP = -1 then
            Print "Stack Underflow"
            Go to Step 6
Step 3: ITEM = STACK[TOP]
Step 4: TOP = TOP - 1
Step 5: Print ITEM
Step 6: Stop

Time Complexity:
- Best Case: O(1)
- Average Case: O(1)
- Worst Case: O(1)
Big O: O(1) — Constant Time

3.Display :-

Algorithm: DISPLAY

Step 1: Start
Step 2: If TOP = -1 then
            Print "Stack is Empty"
            Go to Step 6
Step 3: Set I = TOP
Step 4: Repeat while I >= 0
            Print STACK[I]
            I = I - 1
Step 5: Stop


Time Complexity:
- Best Case: O(1) — Empty Stack
- Average Case: O(n)
- Worst Case: O(n) — All elements displayed
Big O: O(n) — Linear Time

Infix to Postfix and Prefix Conversion:-

1. Infix Expression
An infix expression is an expression in which the operator is placed between the operands.

Example:
A + B
Here, A and B are operands, and + is an operator.

2. Postfix Expression
A postfix expression is an expression in which the operator is placed after the operands.
It is also known as Reverse Polish Notation (RPN).

Example:
Infix   : A + B
Postfix : AB+

3. Prefix Expression
A prefix expression is an expression in which the operator is placed before the operands.
It is also known as Polish Notation.

Example:
Infix   : A + B
Prefix  : +AB