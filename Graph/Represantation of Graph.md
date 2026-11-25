# Graph Representation in DSA (C)

A **Graph Representation** is a way of storing vertices and edges of a graph in computer memory.

There are two main methods of graph representation:

1. **Sequential Representation (Adjacency Matrix)**
2. **Linked List Representation (Adjacency List)**

---

## 1. Sequential Representation (Adjacency Matrix)

- **Sequential Representation** is also known as **Adjacency Matrix Representation**.
- It uses a **2D Array** to represent a graph.
- Rows and columns represent the vertices of the graph.
- If an edge exists between two vertices, we store `1`; otherwise, we store `0`.

### Example Graph

```text
       A
      / \
     /   \
    B --- C
         /
        D
```

### Adjacency Matrix

```text
     A  B  C  D
   -------------
A |  0  1  1  0
B |  1  0  1  0
C |  1  1  0  1
D |  0  0  1  0
```

### C Program: Adjacency Matrix

```c
#include <stdio.h>

int main()
{
    int graph[4][4] = {
        {0, 1, 1, 0},
        {1, 0, 1, 0},
        {1, 1, 0, 1},
        {0, 0, 1, 0}
    };

    int i, j;

    printf("Adjacency Matrix:\n");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

### Advantages

- Easy to implement using a 2D array.
- Checking whether an edge exists takes **O(1)** time.
- Suitable for dense graphs.

### Disadvantages

- Requires more memory for sparse graphs.
- Space complexity is **O(V²)**.
- Adding or deleting a vertex is costly.

### Time and Space Complexity

| Operation | Complexity |
|---|---|
| Check edge | O(1) |
| Add edge | O(1) |
| Remove edge | O(1) |
| Space Complexity | O(V²) |

---

## 2. Linked List Representation (Adjacency List)

- **Linked List Representation** is also known as **Adjacency List Representation**.
- It uses an **Array of Linked Lists** to represent a graph.
- Each vertex has a linked list containing all its adjacent vertices.
- It is suitable for sparse graphs.

### Example Graph

```text
       A
      / \
     /   \
    B --- C
         /
        D
```

### Adjacency List

```text
A ---> B ---> C ---> NULL

B ---> A ---> C ---> NULL

C ---> A ---> B ---> D ---> NULL

D ---> C ---> NULL
```

### C Program: Adjacency List

```c
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int vertex;
    struct Node *next;
};

struct Node *adj[4] = {NULL, NULL, NULL, NULL};

void addEdge(int u, int v)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->vertex = v;
    newNode->next = adj[u];
    adj[u] = newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->vertex = u;
    newNode->next = adj[v];
    adj[v] = newNode;
}

void display()
{
    int i;
    struct Node *temp;

    for(i = 0; i < 4; i++)
    {
        printf("%d -> ", i);

        temp = adj[i];

        while(temp != NULL)
        {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }

        printf("NULL\n");
    }
}

int main()
{
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 2);
    addEdge(2, 3);

    printf("Adjacency List:\n");

    display();

    return 0;
}
```

**Note:** Here, vertices are represented by numbers:

- 0 = A
- 1 = B
- 2 = C
- 3 = D

### Advantages

- Requires less memory for sparse graphs.
- Easy to add an edge.
- Space-efficient compared to an adjacency matrix for sparse graphs.

### Disadvantages

- Checking whether an edge exists is slower.
- Implementation is more complex than an adjacency matrix.
- Requires extra memory for pointers.

### Time and Space Complexity

| Operation | Complexity |
|---|---|
| Add edge | O(1) |
| Check edge | O(degree(V)) |
| Traverse adjacent vertices | O(degree(V)) |
| Space Complexity | O(V + E) |

---

## 3. Difference Between Adjacency Matrix and Adjacency List

| Adjacency Matrix | Adjacency List |
|---|---|
| Uses a 2D Array. | Uses an Array of Linked Lists. |
| Requires O(V²) space. | Requires O(V + E) space. |
| Suitable for dense graphs. | Suitable for sparse graphs. |
| Edge checking takes O(1). | Edge checking takes O(degree(V)). |
| Easy to implement. | Comparatively complex to implement. |
| Uses more memory for sparse graphs. | Uses less memory for sparse graphs. |


