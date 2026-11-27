# Warshall's Algorithm in Graph (DSA in C)

## 1. What is Warshall's Algorithm?

**Warshall's Algorithm** is a graph algorithm used to find the **Transitive Closure** of a directed graph.

It determines whether a path exists between every pair of vertices in a graph.

- It works on a **Directed Graph**.
- It uses an **Adjacency Matrix**.
- It uses the **Dynamic Programming** approach.
- It determines the reachability between vertices.

## 2. What is Transitive Closure?

**Transitive Closure** is a matrix that represents whether a vertex can reach another vertex directly or indirectly.

- `1` means a path exists.
- `0` means no path exists.

## 3. Working of Warshall's Algorithm

Warshall's Algorithm checks whether a path exists between two vertices using an intermediate vertex.

**Formula:**

```c
R[i][j] = R[i][j] || (R[i][k] && R[k][j]);
```

**Explanation:**

- `R[i][j]` checks whether a path already exists from vertex `i` to vertex `j`.
- `R[i][k]` checks whether vertex `i` can reach vertex `k`.
- `R[k][j]` checks whether vertex `k` can reach vertex `j`.
- If both conditions are true, a path exists from `i` to `j` through `k`.

## 4. Algorithm

**Step 1:** Start.

**Step 2:** Read the number of vertices `n`.

**Step 3:** Read the adjacency matrix `A[n][n]`.

**Step 4:** Initialize the reachability matrix `R` using the adjacency matrix.

**Step 5:** Repeat the following operations using three nested loops:

```c
for (k = 0; k < n; k++)
{
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            R[i][j] = R[i][j] || (R[i][k] && R[k][j]);
        }
    }
}
```

**Step 6:** Display the transitive closure matrix.

**Step 7:** Stop.

## 5. C Program for Warshall's Algorithm

```c
#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter adjacency matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Warshall's Algorithm

    for(k = 0; k < n; k++)
    {
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                a[i][j] = a[i][j] || (a[i][k] && a[k][j]);
            }
        }
    }

    // Display Transitive Closure

    printf("\nTransitive Closure Matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}
```

## 6. Example

**Input:**

Number of vertices:

```text
3
```

Adjacency Matrix:

```text
0 1 0
0 0 1
0 0 0
```

**Graph Representation:**

```text
A ----> B ----> C
```

**Output:**

Transitive Closure Matrix:

```text
0 1 1
0 0 1
0 0 0
```

**Explanation:**

- A can reach B directly.
- B can reach C directly.
- A can reach C indirectly through B.
- C cannot reach A or B.

Therefore, the transitive closure matrix is:

```text
0 1 1
0 0 1
0 0 0
```

## 7. Time and Space Complexity

| Complexity | Value | Explanation |
|---|---|---|
| Best Case | O(n³) | Three nested loops |
| Average Case | O(n³) | Three nested loops |
| Worst Case | O(n³) | Three nested loops |
| Space Complexity | O(n²) | Adjacency matrix |

Where `n` represents the number of vertices.

## 8. Applications of Warshall's Algorithm

1. Finding reachability between vertices.
2. Finding the transitive closure of a directed graph.
3. Network connectivity analysis.
4. Dependency checking.
5. Finding indirect relationships between objects.
6. Database relationship analysis.

## 9. Advantages

- Easy to implement using an adjacency matrix.
- Finds direct and indirect connectivity.
- Works for directed graphs.
- Uses a simple Dynamic Programming approach.

## 10. Disadvantages

- Time complexity is O(n³).
- Requires O(n²) space.
- Not efficient for very large sparse graphs.

## 11. Important Points

- **Algorithm:** Warshall's Algorithm.
- **Technique:** Dynamic Programming.
- **Representation:** Adjacency Matrix.
- **Purpose:** Finding Transitive Closure.
- **Time Complexity:** O(n³).
- **Space Complexity:** O(n²).

## Conclusion

**Warshall's Algorithm** is used in graph theory to find the transitive closure of a directed graph. It determines whether a path exists between every pair of vertices using an adjacency matrix and three nested loops.