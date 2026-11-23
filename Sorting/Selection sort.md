# Selection Sort

**Definition**
```
Selection Sort is a simple comparison-based sorting algorithm that
repeatedly selects the smallest element from the unsorted part of
the array and places it at the beginning.

It divides the array into two parts: a sorted part and an unsorted part.
This process continues until the entire array becomes sorted.
```

**Theory of Selection Sort**
```
Selection Sort works by repeatedly finding the minimum element
from the unsorted portion of the array.

Initially, the entire array is considered unsorted.

In every pass:
- Find the smallest element from the unsorted array.
- Swap it with the first element of the unsorted portion.
- Move the boundary of the sorted portion one position forward.

This process continues until all elements are sorted.
```

**Working of Selection Sort**
```
1. Start.
2. Read the number of elements n.
3. Read array elements.
4. Assume the first element is the minimum.
5. Compare it with all remaining unsorted elements.
6. Find the smallest element.
7. Swap the smallest element with the first unsorted element.
8. Repeat the process for the remaining unsorted elements.
9. Display the sorted array.
10. Stop.
```

**Selection Sort Example**
```
Consider the following array:

arr[] = {64, 25, 12, 22, 11};

Initially:
{64, 25, 12, 22, 11}

Pass 1:

Find the smallest element.
Minimum = 11
Swap 11 with 64.
{11, 25, 12, 22, 64}

Pass 2:

Find the smallest element from the remaining array.
Minimum = 12
Swap 12 with 25.
{11, 12, 25, 22, 64}

Pass 3:

Find the smallest element from the remaining array.
Minimum = 22
Swap 22 with 25.
{11, 12, 22, 25, 64}

Pass 4:

Find the smallest element from the remaining array.
Minimum = 25
No swapping is required.
{11, 12, 22, 25, 64}

Final Sorted Array:

{11, 12, 22, 25, 64}
```


**Selection Sort Algorithm**
```
Algorithm: Selection Sort

1. Start.
2. Read the number of elements n.
3. Read array elements.
4. Repeat from i = 0 to n-2.
5. Assume min = i.
6. Compare arr[min] with the remaining elements.
7. If arr[j] < arr[min]:
   - Update min = j.
8. After finding the minimum element:
   - Swap arr[i] with arr[min].
9. Repeat until all elements are sorted.
10. Display the sorted array.
11. Stop.
```

**Selection Sort Program in C**

**Program: Selection Sort in Ascending Order**
```c
#include <stdio.h>

int main()
{
    int arr[100], n, i, j, min, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Selection Sort
    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }

        // Swap minimum element
        if(min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
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
Enter number of elements: 5

Enter array elements:
64 25 12 22 11

Sorted Array:
11 12 22 25 64
```

**Time Complexity Analysis**
```
Time complexity describes how the execution time of an algorithm
increases with the input size.

Case          Time Complexity    Explanation

Best Case     O(n^2)              All elements are compared.
Average Case  O(n^2)              Repeated minimum element searching.
Worst Case    O(n^2)              All elements are compared.
```

**Space Complexity:**
```
- Space Complexity: O(1).
- Selection Sort is an in-place sorting algorithm.
- It requires only a constant amount of extra memory.
- It performs at most O(n) swaps.
```

**Advantages of Selection Sort**
```
1. Easy to understand and implement.
2. Requires very little extra memory.
3. It is an in-place sorting algorithm.
4. Performs fewer swaps compared to Bubble Sort.
5. Suitable for small datasets.
6. Simple approach for learning sorting concepts.
```

**Disadvantages of Selection Sort**
```
1. Not suitable for large datasets.
2. Best, average and worst-case time complexity is O(n^2).
3. Not a stable sorting algorithm in its standard implementation.
4. Does not work efficiently for nearly sorted arrays.
5. Performs repeated comparisons even if the array is already sorted.
```

**Applications of Selection Sort**
```
1. Sorting small datasets.
2. Useful when memory space is limited.
3. Used when the number of swaps should be minimized.
4. Educational purposes for understanding sorting algorithms.
5. Useful for sorting data stored in arrays.
```
