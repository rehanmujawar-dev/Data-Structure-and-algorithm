# Graph Traversal and Tree Traversal in DSA using C

# PART 1: GRAPH TRAVERSAL

## 1. What is Graph Traversal?

**Graph Traversal** is the process of visiting all vertices (nodes) of a graph systematically.

Graph traversal is used to explore vertices and edges of a graph.

There are two main graph traversal techniques:

1. **BFS (Breadth First Search)**
2. **DFS (Depth First Search)**

---

## 2. Breadth First Search (BFS)

### What is BFS?

**BFS (Breadth First Search)** is a graph traversal algorithm that visits vertices level by level.

It first visits the starting vertex, then all its adjacent vertices, and continues to the next level.

**BFS uses a Queue data structure (FIFO).**

FIFO = First In First Out.

### Working of BFS

1. Start from a selected vertex.
2. Mark the starting vertex as visited.
3. Insert the starting vertex into the queue.
4. Remove a vertex from the queue.
5. Visit all its unvisited adjacent vertices.
6. Mark those vertices as visited and insert them into the queue.
7. Repeat until the queue becomes empty.

### Example of BFS

**Graph:**

```text
          A
        /   \
       B     C
      / \   / \
     D   E F   G
```

**BFS Traversal:**

```text
A → B → C → D → E → F → G
```

**Explanation:**

| Step | Visited Vertex | Queue |
|---|---|---|
| 1 | A | B, C |
| 2 | B | C, D, E |
| 3 | C | D, E, F, G |
| 4 | D | E, F, G |
| 5 | E | F, G |
| 6 | F | G |
| 7 | G | Empty |

### Algorithm of BFS

```text
BFS(Graph, Start):

1. Initialize all vertices as unvisited.
2. Create an empty queue.
3. Mark Start as visited.
4. Insert Start into the queue.

5. While queue is not empty:

      a. Delete a vertex from the queue.
      b. Display the deleted vertex.

      c. For every adjacent vertex:
             If it is not visited:
                  Mark it as visited.
                  Insert it into the queue.

6. Stop.
```

### C Program for BFS

**Using Adjacency Matrix and Queue:**

```c
#include <stdio.h>

int main()
{
    int n, i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int a[n][n], visited[n];
    int queue[n], front = 0, rear = -1;

    printf("Enter adjacency matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    printf("Enter starting vertex (0 to %d): ", n-1);
    scanf("%d", &start);

    // Insert starting vertex
    visited[start] = 1;
    queue[++rear] = start;

    printf("BFS Traversal: ");

    while(front <= rear)
    {
        int current = queue[front++];

        printf("%d ", current);

        for(i = 0; i < n; i++)
        {
            if(a[current][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
    }

    return 0;
}
```

### Time and Space Complexity of BFS

| Representation | Time Complexity |
|---|---|
| Adjacency Matrix | O(V²) |
| Adjacency List | O(V + E) |

**Space Complexity:** O(V) for the queue and visited array, excluding graph storage.

Where:

- V = Number of vertices.
- E = Number of edges.

### Applications of BFS

1. Finding the shortest path in an unweighted graph.
2. Social networking applications.
3. Web crawling.
4. GPS navigation.
5. Finding connected components.
6. Level-order traversal of trees.

### Advantages of BFS

- Finds the shortest path in an unweighted graph.
- Visits vertices level by level.
- Useful for finding nearby nodes.

### Disadvantages of BFS

- Requires extra memory for the queue.
- Can consume more memory for graphs with many vertices.

---

## 3. Depth First Search (DFS)

### What is DFS?

**DFS (Depth First Search)** is a graph traversal algorithm that explores as far as possible along one path before backtracking.

It visits a vertex and then explores its unvisited adjacent vertices deeply.

**DFS uses a Stack data structure (LIFO) or Recursion.**

LIFO = Last In First Out.

### Working of DFS

1. Start from a selected vertex.
2. Mark the starting vertex as visited.
3. Visit an unvisited adjacent vertex.
4. Continue exploring deeply.
5. If no unvisited adjacent vertex is available, backtrack.
6. Repeat until all reachable vertices are visited.

### Example of DFS

**Graph:**

```text
          A
        /   \
       B     C
      / \   / \
     D   E F   G
```

**DFS Traversal (left-to-right):**

```text
A → B → D → E → C → F → G
```

**Explanation:**

- Start from A.
- Visit B.
- Visit D.
- D has no unvisited adjacent vertex, so backtrack to B.
- Visit E.
- Backtrack to A.
- Visit C.
- Visit F and then G.

### Algorithm of DFS

```text
DFS(Graph, Vertex):

1. Mark Vertex as visited.
2. Display Vertex.

3. For every adjacent vertex:

      If it is not visited:
           DFS(Graph, adjacent vertex).

4. Stop.
```

### C Program for DFS

**Using Adjacency Matrix and Recursion:**

```c
#include <stdio.h>

int a[20][20], visited[20], n;

void DFS(int v)
{
    int i;

    visited[v] = 1;

    printf("%d ", v);

    for(i = 0; i < n; i++)
    {
        if(a[v][i] == 1 && visited[i] == 0)
        {
            DFS(i);
        }
    }
}

int main()
{
    int i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    printf("Enter starting vertex (0 to %d): ", n-1);
    scanf("%d", &start);

    printf("DFS Traversal: ");

    DFS(start);

    return 0;
}
```

### Time and Space Complexity of DFS

| Representation | Time Complexity |
|---|---|
| Adjacency Matrix | O(V²) |
| Adjacency List | O(V + E) |

**Space Complexity:** O(V) for the visited array and recursion stack, excluding graph storage.

### Applications of DFS

1. Detecting cycles in graphs.
2. Finding connected components.
3. Topological sorting.
4. Maze solving.
5. Path finding.
6. Detecting whether a path exists between two vertices.

### Advantages of DFS

- Requires less memory than BFS in some graph structures.
- Useful for cycle detection.
- Useful for solving maze problems.

### Disadvantages of DFS

- Does not guarantee the shortest path.
- Recursive DFS can cause stack overflow for very deep graphs.

---

## 4. Difference Between BFS and DFS

| BFS | DFS |
|---|---|
| Breadth First Search | Depth First Search |
| Visits level by level | Visits depth by depth |
| Uses Queue | Uses Stack or Recursion |
| Follows FIFO | Follows LIFO |
| Finds shortest path in an unweighted graph | Does not guarantee shortest path |
| Generally uses more memory for wide graphs | May use less memory for wide graphs |
| Useful for level-wise searching | Useful for cycle detection and backtracking |
