# Hashing in Data Structure (C)

**1. What is Hashing?**

Hashing is a technique used in Data Structures to store and retrieve data quickly.
It converts a given key into an index of an array using a special function called a **Hash Function**.
The index is used to store or search the data in a Hash Table.

**Example:**

Suppose we have the following keys:

```
10, 20, 30, 40, 50
```

We use this hash function:

```
Hash Function: h(key) = key % 10
```

Calculation:

```
h(10) = 10 % 10 = 0
h(20) = 20 % 10 = 0
h(30) = 30 % 10 = 0
h(40) = 40 % 10 = 0
h(50) = 50 % 10 = 0
```

All keys get the same index. This situation is called a **Collision**.

---

**2. What is a Hash Table?**

A Hash Table is a data structure that stores data in an array format.

It uses a hash function to calculate the index where a key should be stored.

**Example:**

```
Hash Table:

Index     Value
  0        10
  1        25
  2        32
  3        43
  4        54
```

---

**3. What is a Hash Function?**

A Hash Function is a function that converts a key into an array index.

It helps to determine where the data should be stored in a Hash Table.

**Formula:**

```
h(key) = key % table_size
```

**Example:**

```
Key = 25
Table Size = 10

h(25) = 25 % 10
h(25) = 5
```

Therefore, key 25 is stored at index 5.

---

**4. What is Collision in Hashing?**

A Collision occurs when two or more keys generate the same index using a hash function.

**Example:**

```
Hash Function: h(key) = key % 10

h(15) = 15 % 10 = 5
h(25) = 25 % 10 = 5
```

Both keys generate index 5.

This situation is called a Collision.

---

**5. Collision Resolution Techniques**

Collision resolution techniques are used to handle collisions in a Hash Table.

There are mainly two categories:

**1. Separate Chaining**

In Separate Chaining, each index of the Hash Table contains a linked list.

If multiple keys generate the same index, they are stored in that index's linked list.

**Example:**

```
Hash Function: h(key) = key % 10

Keys: 15, 25, 35

All keys generate index 5.

Index 5 → 15 → 25 → 35 → NULL
```

**2. Open Addressing**

In Open Addressing, all keys are stored directly inside the Hash Table.

If a collision occurs, another empty index is searched.

Types of Open Addressing:

**A. Linear Probing**

In Linear Probing, if the calculated index is occupied, the next index is checked until an empty position is found.

**Formula:**

```
h(key, i) = (h(key) + i) % table_size
```

**Example:**

```
Table Size = 10
Hash Function = key % 10

Keys: 15, 25, 35

15 % 10 = 5  → Store at index 5
25 % 10 = 5  → Index 5 occupied, store at index 6
35 % 10 = 5  → Index 5 and 6 occupied, store at index 7
```

**B. Quadratic Probing**

In Quadratic Probing, if a collision occurs, the next position is calculated using a square of the attempt number.

**Formula:**

```
h(key, i) = (h(key) + i * i) % table_size
```

**Example:**

```
Hash Function = key % 10

Key = 25
Initial Index = 5

First attempt:  (5 + 1*1) % 10 = 6
Second attempt: (5 + 2*2) % 10 = 9
Third attempt:  (5 + 3*3) % 10 = 4
```

**C. Double Hashing**

In Double Hashing, two different hash functions are used to find the next available position.

**Formula:**

```
h(key, i) = (h1(key) + i * h2(key)) % table_size
```

---

**6. Operations of Hashing**

The main operations of Hashing are:

**1. Insertion**

Insertion is used to add a new key into the Hash Table.

**2. Searching**

Searching is used to find whether a particular key is present in the Hash Table.

**3. Deletion**

Deletion is used to remove a key from the Hash Table.

---

**7. C Program for Hashing Using Linear Probing**

```c
#include <stdio.h>

#define SIZE 10

int hashTable[SIZE];

// Initialize Hash Table
void initialize()
{
    for(int i = 0; i < SIZE; i++)
    {
        hashTable[i] = -1;
    }
}

// Insert Operation
void insert(int key)
{
    int index = key % SIZE;
    int start = index;

    while(hashTable[index] != -1)
    {
        index = (index + 1) % SIZE;

        if(index == start)
        {
            printf("Hash Table is Full\n");
            return;
        }
    }

    hashTable[index] = key;
    printf("%d inserted successfully\n", key);
}

// Search Operation
void search(int key)
{
    int index = key % SIZE;
    int start = index;

    while(hashTable[index] != -1)
    {
        if(hashTable[index] == key)
        {
            printf("%d found at index %d\n", key, index);
            return;
        }

        index = (index + 1) % SIZE;

        if(index == start)
        {
            break;
        }
    }

    printf("%d not found\n", key);
}

// Display Operation
void display()
{
    printf("\nHash Table:\n");

    for(int i = 0; i < SIZE; i++)
    {
        printf("Index %d : %d\n", i, hashTable[i]);
    }
}

int main()
{
    initialize();

    insert(15);
    insert(25);
    insert(35);
    insert(45);

    display();

    search(25);
    search(50);

    return 0;
}
```

**Output:**

```
15 inserted successfully
25 inserted successfully
35 inserted successfully
45 inserted successfully

Hash Table:
Index 0 : -1
Index 1 : -1
Index 2 : -1
Index 3 : -1
Index 4 : -1
Index 5 : 15
Index 6 : 25
Index 7 : 35
Index 8 : 45
Index 9 : -1

25 found at index 6
50 not found
```

**Note:** This simple program uses `-1` to represent an empty position, so it does not support inserting `-1` as a key. It also demonstrates insertion and searching, but not deletion.

---

**8. Time Complexity of Hashing**

| Operation | Average Case | Worst Case |
|---|---|---|
| Insertion | O(1) | O(n) |
| Searching | O(1) | O(n) |
| Deletion | O(1) | O(n) |

**Explanation:**

- **Best/Average Case – O(1):** Data can be accessed directly using the calculated index.
- **Worst Case – O(n):** Many collisions can force us to check multiple positions.

Here, `n` represents the number of keys stored in the Hash Table.

---

**9. Advantages of Hashing**

1. Fast searching of data.
2. Fast insertion and deletion on average.
3. Efficient data storage and retrieval.
4. Reduces the time required to find elements.
5. Useful for implementing dictionaries and sets.

**10. Disadvantages of Hashing**

1. Collisions can occur.
2. A good hash function is required.
3. Worst-case performance can be O(n).
4. Hash Tables may require extra memory.
5. Data is not stored in sorted order.

---

**11. Applications of Hashing**

1. Database indexing.
2. Password verification and storage.
3. Dictionaries and sets.
4. Caching systems.
5. Symbol tables in compilers.
6. Duplicate detection.
7. Fast searching in large datasets.

---

