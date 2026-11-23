
# Data-Structure-and-Algorithm

# 1. What is a Data Structure?

**Definition:**

A Data Structure is a way of organizing, storing, and managing data in a computer so that it can be accessed and modified efficiently.

**Common Data Structures and Their Uses**

| Data Structure | Use |
|---|---|
| Array | Stores multiple elements of the same type. |
| Linked List | Stores connected nodes of data. |
| Stack | Used for undo operations and function calls. |
| Queue | Used for scheduling and waiting lists. |
| Tree | Used for file systems and hierarchical data. |
| Graph | Used for maps and social networks. |
| Hash Table | Provides fast searching using keys. |

---

# **2. Types of Data Structures**

Data Structures are mainly classified into two types:

1. Primitive Data Structures
2. Non-Primitive Data Structures

**Classification of Data Structures**

```text
                    Data Structures
                           |
              -------------------------
              |                       |
          Primitive              Non-Primitive
              |                       |
       ----------------       -------------------
       |      |      |         |               |
      int    char  float     Linear        Non-Linear
                    double      |               |
                          -------------      ---------
                          |    |   |   |      |       |
                         Array Stack Queue Linked  Tree Graph
                                           List
```

**1. Primitive Data Structures**

Primitive Data Structures are the basic data types provided by a programming language.

Examples:

- int
- char
- float
- double

**2. Non-Primitive Data Structures**

Non-Primitive Data Structures are used to store and organize multiple values or complex data.

They are further divided into two types:

**A. Linear Data Structures**

In Linear Data Structures, elements are arranged sequentially, one after another.

Examples:

- Array
- Linked List
- Stack
- Queue

**B. Non-Linear Data Structures**

In Non-Linear Data Structures, elements are not arranged sequentially. They are organized in hierarchical or network-based structures.

Examples:

- Tree
- Graph

---

# **3. Time Complexity**

**Definition:**

Time Complexity is the amount of time an algorithm takes to execute as the size of the input increases.

It is expressed using Big O notation, such as O(1), O(n), and O(n²).

**Example:**

```c
for (int i = 0; i < n; i++)
{
    printf("%d", i);
}
```

**Explanation:**

- The loop starts from 0.
- It executes until i becomes equal to n.
- The loop executes n times.

Therefore, the time complexity is **O(n)**.

**Common Types of Time Complexity**

| Big O Notation | Name | Example |
|---|---|---|
| O(1) | Constant Time | Accessing an array element |
| O(log n) | Logarithmic Time | Binary Search |
| O(n) | Linear Time | Linear Search |
| O(n log n) | Linearithmic Time | Merge Sort |
| O(n²) | Quadratic Time | Bubble Sort |
| O(2ⁿ) | Exponential Time | Recursive Fibonacci (basic version) |
| O(n!) | Factorial Time | Generating all permutations |

---

# **4. Space Complexity**

**Definition:**

Space Complexity is the total amount of memory required by an algorithm during its execution, depending on the input size.

It includes the memory used for input and additional memory used by the algorithm.

**Example 1: Constant Auxiliary Space**

```c
int a = 10;
int b = 20;
int sum = a + b;
```

The algorithm uses a fixed amount of extra memory, so its auxiliary space complexity is **O(1)**.

**Example 2: Linear Space**

```c
int arr[n];
```

The array stores n elements, so its auxiliary space complexity is **O(n)**.

---

# **5. Cases of an Algorithm**

There are three main cases used to analyze an algorithm.

**A. Best Case**

The minimum time taken by an algorithm for any input of a given size.

Example: In Linear Search, the required element is at the first position.

Time Complexity: **O(1)**

**B. Average Case**

The expected time taken by an algorithm for a typical input of a given size.

Example: In Linear Search, the required element is somewhere in the middle of the array.

Time Complexity: **O(n)**

**C. Worst Case**

The maximum time taken by an algorithm for any input of a given size.

Example: In Linear Search, the required element is at the last position or is not present.

Time Complexity: **O(n)**

---

# **6. Analysis of an Algorithm**

**Definition:**

Analysis of an Algorithm is the process of determining the time and space required by an algorithm to solve a problem.

**Steps in Algorithm Analysis**

1. Identify the input size, usually represented by n.
2. Count the basic operations performed.
3. Determine how the number of operations grows with input size.
4. Calculate the time complexity.
5. Calculate the space complexity.
6. Evaluate the best, average, and worst cases when relevant.

---

