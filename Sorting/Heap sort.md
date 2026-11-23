# Heap Sort
**Definition**
```
Heap Sort is a comparison-based sorting algorithm that uses a Binary Heap data structure to sort elements.
It first converts the given array into a Max Heap and then repeatedly removes the largest element and places it at the end of the array.
```
`
Heap Sort arranges elements in either Ascending Order or Descending Order.
- Ascending Order: Uses Max Heap.
- Descending Order: Uses Min Heap.
`
**Theory of Heap Sort**
```
Heap Sort works using a special binary tree structure called a Heap.
A Heap is a Complete Binary Tree that follows a specific property.
```
**Types of Heap:**
```
1. Max Heap: The parent node is always greater than or equal to its child nodes.
2. Min Heap: The parent node is always smaller than or equal to its child nodes.
Working of Heap Sort:
1. First, convert the given array into a Max Heap.
2. The largest element will be at the root node.
3. Swap the root element with the last element.
4. Reduce the heap size by one.
5. Apply Heapify to maintain the Max Heap property.
6. Repeat the process until all elements are sorted.
3. Heap Structure Example
```
**Max Heap:**
```        50
          /  \
        30    40
       / \    /
      10 20  35
```

```
Here:
- 50 is the root node.
- Parent nodes are greater than their child nodes.
- The largest element is always at the root.
Array Representation:
arr[] = {50, 30, 40, 10, 20, 35};
```

**Heap Sort Algorithm**
```
Algorithm: Heap Sort
1. Start.
2. Read the number of elements n.
3. Read array elements.
4. Build a Max Heap using the given array.
5. Repeat from i = n-1 to 1:
   - Swap arr[0] with arr[i].
   - Reduce the heap size by one.
   - Apply Heapify to maintain the Max Heap property.
6. Display the sorted array.
7. Stop.
```
**Algorithm: Heapify**
```
1. Start.
2. Assume the current node is the largest.
3. Calculate the left child index: 2*i + 1.
4. Calculate the right child index: 2*i + 2.
5. Compare the current node with its left and right children.
6. If any child is greater, update the largest index.
7. If the largest index changes, swap the elements.
8. Recursively apply Heapify to the affected subtree.
9. Stop.
```
**Heap Sort Example**
```
Consider the following array:
arr[] = {4, 10, 3, 5, 1};


Step 1: Build Max Heap
Convert the array into a Max Heap.
           10
          /  \
         5    3
        / \
       4   1


Array representation:
{10, 5, 3, 4, 1}


Step 2: Swap Root with Last Element

Swap 10 with 1.
{1, 5, 3, 4, 10}


Apply Heapify to the remaining heap.
{5, 4, 3, 1, 10}


Step 3: Swap Root with Last Unsorted Element

Swap 5 with 1.
{1, 4, 3, 5, 10}


Apply Heapify.
{4, 1, 3, 5, 10}


Step 4: Swap Root with Last Unsorted Element

Swap 4 with 3.
{3, 1, 4, 5, 10}


Step 5: Final Swap

Swap 3 with 1.
{1, 3, 4, 5, 10}


Final Sorted Array
{1, 3, 4, 5, 10}

```
**Heap Sort Program in C**

*Program: Heap Sort in Ascending Order*
```
#include <stdio.h>

// Heapify Function
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int temp;

    // Compare left child
    if(left < n && arr[left] > arr[largest])
    {
        largest = left;
    }

    // Compare right child
    if(right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    // Swap if largest is not root
    if(largest != i)
    {
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest);
    }
}

// Heap Sort Function
void heapSort(int arr[], int n)
{
    int i, temp;

    // Build Max Heap
    for(i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    // Extract elements from heap
    for(i = n - 1; i > 0; i--)
    {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }
}

// Main Function
int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    heapSort(arr, n);

    printf("Sorted Array: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

```
**Output**
```
Enter number of elements: 5
Enter array elements:
4 10 3 5 1
Sorted Array:
1 3 4 5 10
```

**Time Complexity Analysis**
```
Time complexity describes how the execution time of an algorithm increases with the input size.
Case	Time Complexity	Explanation
Best Case	O(n log n)	Heap construction and extraction
Average Case	O(n log n)	Repeated heap operations
Worst Case	O(n log n)	Heap operations maintain logarithmic height
```
**Space Complexity:**
```
- Space Complexity: O(1) auxiliary space for the iterative version of Heapify.
- The recursive Heapify implementation above uses up to O(log n) call stack space in the worst case.
```
**Advantages of Heap Sort**
```
1. Efficient for large datasets.
2. Best, average and worst-case time complexity is O(n log n).
3. Requires less additional memory.
4. It is an in-place sorting algorithm.
5. Does not require additional arrays.
6. Provides predictable performance.
10. Disadvantages of Heap Sort
1. More difficult to understand and implement than Bubble Sort.
2. Not a stable sorting algorithm.
3. Usually slower in practice than Quick Sort.
4. Requires knowledge of Binary Heap data structures.
5. Recursive Heapify requires additional stack memory.
```
**Applications of Heap Sort**
```
1. Sorting large datasets.
2. Implementing Priority Queues.
3. Finding the Kth largest or smallest element.
4. Scheduling tasks based on priority.
5. Used in operating systems and algorithmic applications.
```