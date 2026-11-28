# Transitive Closure in Graph 

## 1. What is Transitive Closure?

**Transitive Closure** is a matrix representation of a directed graph that shows whether a path exists between every pair of vertices.

It determines whether one vertex can reach another vertex either directly or indirectly.

- `1` = Path exists.
- `0` = Path does not exist.

**Transitive Closure is calculated using Warshall's Algorithm.**

## 2. Example of Transitive Closure

Consider the following directed graph:

```text
A -----> B -----> C
         |
         v
         D
```

**Adjacency Matrix:**

```text
    A B C D
A   0 1 0 0
B   0 0 1 1
C   0 0 0 0
D   0 0 0 0
```

**Transitive Closure Matrix:**

```text
    A B C D
A   0 1 1 1
B   0 0 1 1
C   0 0 0 0
D   0 0 0 0
```

**Explanation:**

- A can reach B directly.
- A can reach C indirectly through B.
- A can reach D indirectly through B.
- B can reach C directly.
- B can reach D directly.
- C and D cannot reach any other vertex.

Therefore, the transitive closure matrix represents all direct and indirect paths.

## 3. Formula of Transitive Closure

**Warshall's Algorithm Formula:**

```c
R[i][j] = R[i][j] || (R[i][k] && R[k][j]);
```

**Explanation:**

- `R[i][j]` = Path from vertex i to vertex j.
- `R[i][k]` = Path from vertex i to vertex k.
- `R[k][j]` = Path from vertex k to vertex j.
- `k` = Intermediate vertex.

If a path exists from `i` to `k` and from `k` to `j`, then a path exists from `i` to `j`.

## 4. Algorithm for Transitive Closure

**Step 1:** Start.

**Step 2:** Read the number of vertices.

**Step 3:** Read the adjacency matrix.

**Step 4:** Copy the adjacency matrix into the reachability matrix.

**Step 5:** Apply three nested loops using vertices `k`, `i`, and `j`.

**Step 6:** Update the matrix using:

```c
R[i][j] = R[i][j] || (R[i][k] && R[k][j]);
```

**Step 7:** Display the transitive closure matrix.

**Step 8:** Stop.

## 5. C Program for Transitive Closure

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
                a[i][j] = a[i][j] ||
                          (a[i][k] && a[k][j]);
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

## 6. Sample Input

```text
Enter number of vertices: 4

Enter adjacency matrix:

0 1 0 0
0 0 1 1
0 0 0 0
0 0 0 0
```

## 7. Output

```text
Transitive Closure Matrix:

0 1 1 1
0 0 1 1
0 0 0 0
0 0 0 0
```

## 8. Time and Space Complexity

| Complexity | Value |
|---|---|
| Best Case | O(V³) |
| Average Case | O(V³) |
| Worst Case | O(V³) |
| Space Complexity | O(V²) |

Where:

- `V` = Number of vertices.
- Three nested loops are used.
- The adjacency matrix requires O(V²) space.

## 9. Applications of Transitive Closure

1. Finding reachability between vertices.
2. Network connectivity analysis.
3. Database relationship management.
4. Dependency checking in software.
5. Finding indirect relationships.
6. Web page link analysis.

## 10. Advantages

1. Finds direct and indirect paths.
2. Easy to implement using an adjacency matrix.
3. Helps identify connectivity between vertices.
4. Useful in directed graph analysis.

## 11. Disadvantages

1. Time complexity is O(V³).
2. Requires O(V²) space.
3. Not efficient for very large sparse graphs.

## 12. Difference Between Adjacency Matrix and Transitive Closure Matrix

| Adjacency Matrix | Transitive Closure Matrix |
|---|---|
| Represents direct edges | Represents direct and indirect reachability |
| Shows immediate connections | Shows whether a path exists |
| Does not include indirect paths unless there is a direct edge | Includes indirect paths |
| Initial graph representation | Result after reachability computation |

## 13. Difference Between Warshall's Algorithm and Transitive Closure

| Warshall's Algorithm | Transitive Closure |
|---|---|
| It is an algorithm | It is the result (reachability relation) |
| Calculates reachability | Represents reachability |
| Uses three nested loops | Stored in a matrix |
| Uses Dynamic Programming | Describes direct and indirect paths |

**Important:** Warshall's Algorithm is the method, and Transitive Closure is the resulting reachability matrix.