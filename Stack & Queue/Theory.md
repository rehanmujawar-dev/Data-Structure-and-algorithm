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