# Merge Sort

**Definition**
```
Merge Sort is a comparison-based sorting algorithm that follows the
Divide and Conquer technique.

It divides the given array into smaller subarrays until each subarray
contains only one element.

Then, it repeatedly merges these subarrays in sorted order to produce
a final sorted array.
```

**Theory of Merge Sort**
```
Merge Sort works on the Divide and Conquer technique.

It divides a large problem into smaller subproblems, solves each
subproblem separately, and combines their results.

Merge Sort mainly works in three steps:

1. Divide: Divide the array into two halves.
2. Conquer: Recursively sort both halves.
3. Combine: Merge the sorted halves into one sorted array.

This process continues until the entire array becomes sorted.
```

**Working of Merge Sort**
```
1. Start.
2. Divide the array into two halves.
3. Apply Merge Sort recursively to the left half.
4. Apply Merge Sort recursively to the right half.
5. Merge both sorted halves into a single sorted array.
6. Repeat until the complete array is sorted.
7. Display the sorted array.
8. Stop.
```

**Merge Sort Example**
```
Consider the following array:

arr[] = {8, 3, 5, 4, 7, 6, 1, 2};

Step 1: Divide the Array

Divide the array into two halves.

{8, 3, 5, 4}       {7, 6, 1, 2}

Step 2: Divide Again

{8, 3} {5, 4}      {7, 6} {1, 2}

Step 3: Divide into Single Elements

{8} {3} {5} {4}    {7} {6} {1} {2}

Step 4: Merge and Sort

{3, 8}   {4, 5}    {6, 7}   {1, 2}

Step 5: Merge Again

{3, 4, 5, 8}       {1, 2, 6, 7}

Step 6: Final Merge

{1, 2, 3, 4, 5, 6, 7, 8}

Final Sorted Array:

{1, 2, 3, 4, 5, 6, 7, 8}
```

**Merge Sort Algorithm**
```
Algorithm: Merge Sort

1. Start.
2. Read the number of elements n.
3. Read array elements.
4. Call mergeSort(arr, 0, n-1).
5. If first < last:
   - Find the middle position.
   - Divide the array into two halves.
   - Apply Merge Sort to the left half.
   - Apply Merge Sort to the right half.
   - Merge both sorted halves.
6. Display the sorted array.
7. Stop.
```

**Algorithm: Merge**
```
1. Start.
2. Create temporary arrays for the left and right halves.
3. Compare the elements of both arrays.
4. Insert the smaller element into the original array.
5. Repeat until one temporary array becomes empty.
6. Copy the remaining elements into the original array.
7. Stop.
```

**Merge Sort Program in C**

**\*Program: Merge Sort in Ascending Order\***
```c
#include <stdio.h>

// Merge Function
void merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int temp[100];

    // Compare and merge elements
    while(i <= mid && j <= high)
    {
        if(arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy remaining left elements
    while(i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining right elements
    while(j <= high)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy temporary array into original array
    for(i = low; i <= high; i++)
    {
        arr[i] = temp[i];
    }
}

// Merge Sort Function
void mergeSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int mid = (low + high) / 2;

        // Divide left half
        mergeSort(arr, low, mid);

        // Divide right half
        mergeSort(arr, mid + 1, high);

        // Merge both halves
        merge(arr, low, mid, high);
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

    mergeSort(arr, 0, n - 1);

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
Enter number of elements: 8

Enter array elements:
8 3 5 4 7 6 1 2

Sorted Array:
1 2 3 4 5 6 7 8
```

**Time Complexity Analysis**
```
Time complexity describes how the execution time of an algorithm
increases with the input size.

Case          Time Complexity    Explanation

Best Case     O(n log n)          Array is divided and merged.
Average Case  O(n log n)          Repeated dividing and merging.
Worst Case    O(n log n)          Same number of dividing levels.
```

**Space Complexity:**
```
- Space Complexity: O(n).
- Merge Sort requires an additional temporary array.
- Recursive calls require O(log n) stack space.
- It is not an in-place sorting algorithm in this implementation.
```

**Advantages of Merge Sort**
```
1. Efficient for large datasets.
2. Best, average and worst-case time complexity is O(n log n).
3. It is a stable sorting algorithm.
4. Works efficiently with linked lists.
5. Follows the Divide and Conquer technique.
6. Provides predictable performance.
7. Suitable for sorting large amounts of data.
```

**Disadvantages of Merge Sort**
```
1. Requires additional memory of O(n).
2. More difficult to implement than Bubble Sort.
3. Recursive calls require additional stack memory.
4. Not an in-place sorting algorithm for arrays.
5. May be slower than Quick Sort for some in-memory datasets.
```

**Applications of Merge Sort**
```
1. Sorting large datasets.
2. External sorting.
3. Sorting linked lists.
4. Inversion counting problems.
5. Merging multiple sorted arrays.
6. Used in database sorting operations.
7. Useful when stable sorting is required.
```