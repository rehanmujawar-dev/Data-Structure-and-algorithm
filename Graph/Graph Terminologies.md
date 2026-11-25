# GRAPH 

## 1. What is a Graph?

A **Graph** is a non-linear data structure consisting of a set of **Vertices (Nodes)** and **Edges (Connections)** between them.

**Mathematical Representation:**

`G = (V, E)`

- **V:** Set of Vertices (Nodes).
- **E:** Set of Edges (Connections).

**Example:**

```text
      A -------- B
      |          |
      |          |
      C -------- D
```

## 2. Graph Terminologies

### 1. Vertex (Node)
- A **Vertex** is a fundamental unit of a graph.
- It represents a point or object in a graph.
- Example: A, B, C, D are vertices.

### 2. Edge
- An **Edge** is a connection between two vertices.
- Example: A — B represents an edge between A and B.

### 3. Directed Graph (Digraph)
- A **Directed Graph** is a graph in which edges have a specific direction.
- Example: A → B.

```text
A ----> B
|       |
v       v
C ----> D
```

### 4. Undirected Graph
- An **Undirected Graph** is a graph in which edges do not have any direction.
- The connection works in both directions.

```text
A ------ B
|        |
|        |
C ------ D
```

### 5. Weighted Graph
- A **Weighted Graph** is a graph in which every edge has a weight or cost.
- Example: Distance between two cities.

```text
A --5-- B
|       |
3       7
|       |
C --4-- D
```

### 6. Unweighted Graph
- An **Unweighted Graph** is a graph in which edges do not have any weights or costs.

### 7. Adjacent Vertices
- Two vertices are called **Adjacent Vertices** if there is an edge connecting them.
- Example: If A — B, then A and B are adjacent vertices.

### 8. Incident Edge
- An **Incident Edge** is an edge connected to a particular vertex.
- Example: Edge (A, B) is incident on both A and B.

### 9. Degree of a Vertex
- The **Degree** of a vertex is the total number of edges connected to that vertex in an undirected graph.

**Example:**

```text
      B
      |
C --- A --- D
      |
      E
```

**Degree(A) = 4**

**Types of Degree:**

- **In-Degree:** Number of incoming edges to a vertex.
- **Out-Degree:** Number of outgoing edges from a vertex.

### 10. Path
- A **Path** is a sequence of vertices in which each consecutive pair is connected by an edge.

**Example:**

```text
A ---- B ---- C ---- D
```

Path: A → B → C → D

### 11. Path Length
- **Path Length** is the total number of edges present in a path.
- Example: A → B → C → D
- Path Length = 3.

### 12. Simple Path
- A **Simple Path** is a path in which no vertex is repeated.

### 13. Cycle
- A **Cycle** is a path that starts and ends at the same vertex.

**Example:**

```text
     A
    / \
   B---C
```

Cycle: A → B → C → A

### 14. Cyclic Graph
- A **Cyclic Graph** is a graph that contains at least one cycle.

### 15. Acyclic Graph
- An **Acyclic Graph** is a graph that does not contain any cycle.

### 16. Connected Graph
- A **Connected Graph** is an undirected graph in which there is a path between every pair of vertices.

### 17. Disconnected Graph
- A **Disconnected Graph** is a graph in which at least one pair of vertices has no path connecting them.

### 18. Complete Graph
- A **Complete Graph** is a graph in which every vertex is directly connected to every other vertex.

**Formula:**

```text
E = V * (V - 1) / 2
```

Where:
- **V** = Number of Vertices.
- **E** = Number of Edges.

### 19. Subgraph
- A **Subgraph** is a graph formed using a subset of vertices and edges of another graph.

### 20. Loop (Self-loop)
- A **Loop** is an edge that connects a vertex to itself.

```text
A ↺
```

### 21. Parallel Edges
- **Parallel Edges** are two or more edges connecting the same pair of vertices.

### 22. Isolated Vertex
- An **Isolated Vertex** is a vertex that has no edges connected to it.
- Degree = 0.

### 23. Pendant Vertex
- A **Pendant Vertex** is a vertex that has exactly one edge connected to it.
- Degree = 1.

### 24. Tree
- A **Tree** is a connected, undirected graph that does not contain any cycle.
- A tree with V vertices contains exactly V - 1 edges.

### 25. Forest
- A **Forest** is an undirected graph that does not contain any cycles.
- It consists of one or more disconnected trees.

### 26. Spanning Tree
- A **Spanning Tree** is a subgraph that connects all vertices of a connected graph without forming any cycle.
- It contains exactly V - 1 edges.

### 27. Bridge
- A **Bridge** is an edge whose removal increases the number of connected components in a graph.

### 28. Articulation Point
- An **Articulation Point** is a vertex whose removal increases the number of connected components in a graph.

### 29. Bipartite Graph
- A **Bipartite Graph** is a graph whose vertices can be divided into two separate sets such that no two vertices in the same set are adjacent.

### 30. Sparse Graph
- A **Sparse Graph** is a graph that contains very few edges compared to the maximum possible number of edges