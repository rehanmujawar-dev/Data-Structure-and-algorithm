# 1. Sorting

**Definition**
```
Sorting is the process of arranging data elements in a specific order, either Ascending Order or Descending Order.
```

Ascending Order: Arranging elements from smallest to largest.

Descending Order: Arranging elements from largest to smallest.

```
Example:
Unsorted Array:
int arr[] = {5, 2, 8, 1, 3};
Sorted Array (Ascending):
{1, 2, 3, 5, 8}
Sorted Array (Descending):
{8, 5, 3, 2, 1}
```

Types of Sorting
Sorting algorithms are mainly classified into two types:
Internal Sorting: Sorting performed when all data is stored in main memory (RAM).
External Sorting: Sorting performed when data is too large to fit into main memory, so external storage is used.

Common Sorting Algorithms:

Bubble Sort
Selection Sort
Insertion Sort
Merge Sort
Quick Sort
Heap Sort

1. Bubble Sort

**Definition**
Bubble Sort is a simple sorting algorithm that repeatedly compares two adjacent elements and swaps them if they are in the wrong order.
This process continues until the entire array is sorted.
In Bubble Sort, the largest element moves towards the end of the array in each pass. This is why it is called Bubble Sort.

**Theory**
Bubble Sort compares adjacent elements of an array.
If the first element is greater than the second element, they are swapped.
If the elements are already in the correct order, no swapping is required.
After each pass, the largest unsorted element reaches its correct position.
The process continues until the array becomes sorted.


 **Bubble Sort Algorithm**
```
Algorithm: Bubble Sort
Start.
Read the number of elements n.
Read array elements.
Repeat the following steps for i = 0 to n-2.
Compare adjacent elements using another loop from j = 0 to n-i-2.
If arr[j] > arr[j+1], swap both elements.
Repeat until all passes are completed.
Display the sorted array.
Stop.
```

 **Bubble Sort Example**

```
Consider the following array:
arr[] = {5, 3, 8, 2, 1};
Pass 1:
Compare adjacent elements:
5 and 3 → Swap
5 and 8 → No Swap
8 and 2 → Swap
8 and 1 → Swap

Result:
{3, 5, 2, 1, 8}

Pass 2:

3 and 5 → No Swap
5 and 2 → Swap
5 and 1 → Swap

Result:
{3, 2, 1, 5, 8}

Pass 3:

3 and 2 → Swap
3 and 1 → Swap

Result:

{2, 1, 3, 5, 8}

Pass 4:
- 2 and 1 → Swap

Result:

{1, 2, 3, 5, 8}

Final Sorted Array
{1, 2, 3, 5, 8}

```

**Bubble Sort Program in C**

Program: Bubble Sort in Ascending Order

```
#include <stdio.h>
int main()
{
    int arr[100], n, i, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display Sorted Array
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
Enter the number of elements: 5
Enter array elements:
5 3 8 2 1
Sorted Array:
1 2 3 5 8
```
 
**Time Complexity Analysis**
 
Time complexity describes how much time an algorithm takes to execute as the input size increases.

Case
Time Complexity
Explanation
Best Case
O(n²)

Standard Bubble Sort still performs comparisons
Average Case
O(n²)
Elements require multiple comparisons and swaps

Worst Case
O(n²)
Array is sorted in reverse order

Space Complexity:
Space Complexity: O(1)

Bubble Sort is an in-place sorting algorithm.
It does not require an additional array for sorting.

Note: If we use an optimized Bubble Sort with a swapped flag, its best-case time complexity becomes O(n) when the array is already sorted.

**Advantages of Bubble Sort**
```
Easy to understand and implement.
Simple algorithm for beginners.
Requires very little extra memory.
Works well for small datasets.
It is a stable sorting algorithm.
No additional array is required.
```

**Disadvantages of Bubble Sort**
```
Slow for large datasets.
Requires many comparisons.
Performs many swapping operations.
Less efficient than Quick Sort and Merge Sort.
Not suitable for large amounts of data.
Has O(n²) average and worst-case time complexity.
```

**Applications of Bubble Sort**
```
Used for learning basic sorting concepts.
Used for sorting small datasets.
Used for understanding swapping and comparison operations.
Used in educational programming examples.
Useful when the dataset is nearly sorted with an optimized implementation.
```






