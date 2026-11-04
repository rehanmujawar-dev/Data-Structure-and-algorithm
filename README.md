# Data-Structure-and-algorithm

What is a Data Structure?
Definition:A data structure is a way of organizing, storing, and managing data in a computer so that it can be accessed and modified efficiently.

Common Data Structures and Their Uses
Data Structure	Use
Array	Store multiple elements of the same type
Linked List	Store connected nodes of data
Stack	Undo operations, function calls
Queue	Scheduling and waiting lists
Tree	File systems and hierarchical data
Graph	Maps and social networks
Hash Table	Fast searching using keys.


Types of DS :-
                    Data Structures
                           |
              -------------------------
              |                       |
         Primitive               Non-Primitive
              |                       |
      ----------------        -------------------
      |      |      |          |               |
     int    char   float      Linear        Non-Linear
                    double       |               |
                          ----------------   -----------
                          |   |   |   |      |         |
                        Array Stack Queue Linked   Tree Graph
                                      List


1. Time Complexity:-

Definition: Time complexity is the amount of time an algorithm takes to execute as the size of the input increases.

It is expressed using Big O notation, such as \(O(1)\), \(O(n)\), and \(O(n^2\).

for (int i = 0; i < n; i++) {
    printf("%d", i);
}

The loop executes n times, so the time complexity is \(O(n)\).

2. Space Complexity:-
Definition: Space complexity is the total amount of memory required by an algorithm during its execution, depending on the input size.

Example:
int a = 10;
int b = 20;
int sum = a + b;

The algorithm uses a fixed amount of extra memory, so its auxiliary space complexity is \(O(1)\).

Example of space complexity that grows with input size:
int arr[n];
The array stores n elements, so its space complexity is \(O(n)\).

3. Cases of an Algorithm
There are three main cases used to analyze an algorithm.

A. Best Case
The minimum time taken by an algorithm for any input of a given size.
Example: In linear search, the required element is at the first position.
Time complexity: \(O(1)\)

B. Average Case
The expected time taken by an algorithm for a typical input of a given size.
Example: In linear search, the required element is somewhere in the middle of the array.
Time complexity: \(O(n)\)

C. Worst Case
The maximum time taken by an algorithm for any input of a given size.
Example: In linear search, the required element is at the last position or is not present.
Time complexity: \(O(n)\)

4. Analysis of an Algorithm

Definition: Analysis of an algorithm is the process of determining the time and space required by an algorithm to solve a problem.
Steps in algorithm analysis
1. Identify the input size, usually represented by n.
2. Count the basic operations performed.
3. Determine how the number of operations grows with input size.
4. Calculate the time complexity.
5. Calculate the space complexity.
6. Evaluate the best, average, and worst cases when relevant.

