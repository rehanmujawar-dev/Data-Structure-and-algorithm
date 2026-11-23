# Quick Sort

**Definition**
```
Quick Sort is a comparison-based sorting algorithm that follows the
Divide and Conquer technique.

It selects an element called a Pivot and partitions the array into
two parts. Elements smaller than the Pivot are placed on the left side,
and elements greater than the Pivot are placed on the right side.

This process is repeated recursively until the entire array is sorted.
```

**Theory of Quick Sort**
```
Quick Sort works on the Divide and Conquer technique.

It divides the array into smaller parts using a Pivot element.

The Pivot is placed in its correct position in the sorted array.

Quick Sort mainly works in three steps:

1. Pivot Selection: Select an element as the Pivot.
2. Partitioning: Place smaller elements on the left side and greater
   elements on the right side of the Pivot.
3. Recursion: Apply Quick Sort to the left and right subarrays.

This process continues until the entire array becomes sorted.
```

**Types of Pivot Selection**
```
1. First Element: Select the first element as Pivot.
2. Last Element: Select the last element as Pivot.
3. Middle Element: Select the middle element as Pivot.
4. Random Element: Select a random element as Pivot.
```

**Working of Quick Sort**
```
1. Start.
2. Read the number of elements n.
3. Read array elements.
4. Select a Pivot element.
5. Partition the array around the Pivot.
6. Place smaller elements before the Pivot.
7. Place greater elements after the Pivot.
8. Apply Quick Sort recursively to the left subarray.
9. Apply Quick Sort recursively to the right subarray.
10. Display the sorted array.
11. Stop.
```

**Quick Sort Example**
```
Consider the following array:

arr[] = {6, 3, 8, 5, 2, 7, 4, 1};

Step 1: Select Pivot

Select the last element as Pivot.

Pivot = 1

Step 2: Partition the Array

Elements smaller than Pivot are placed on the left.
Elements greater than Pivot are placed on the right.

{1, 3, 8, 5, 2, 7, 4, 6}

Pivot 1 is now in its correct position.

Step 3: Select Pivot Again

Consider the remaining right subarray:

{3, 8, 5, 2, 7, 4, 6}

Pivot = 6

After partitioning:

{3, 5, 2, 4, 6, 7, 8}

Pivot 6 is now in its correct position.

Step 4: Apply Quick Sort to Left Subarray

{3, 5, 2, 4}

Pivot = 4

After partitioning:

{3, 2, 4, 5}

Step 5: Apply Quick Sort to Remaining Subarrays

Left subarray:
{3, 2}

Pivot = 2

After partitioning:
{2, 3}

Right subarray:
{5}

Already sorted.

Final Sorted Array:

{1, 2, 3, 4, 5, 6, 7, 8}
```

**Quick Sort Algorithm**
```
Algorithm: Quick Sort

1. Start.
2. Read the number of elements n.
3. Read array elements.
4. Call quickSort(arr, 0, n-1).
5. If low < high:
   - Call partition() to find the correct Pivot position.
   - Apply Quick Sort to the left subarray.
   - Apply Quick Sort to the right subarray.
6. Display the sorted array.
7. Stop.
```

**Algorithm: Partition**
```
1. Start.
2. Select the last element as Pivot.
3. Initialize i = low - 1.
4. Repeat j from low to high - 1.
5. If arr[j] <= Pivot:
   - Increment i.
   - Swap arr[i] and arr[j].
6. Swap arr[i+1] with the Pivot element.
7. Return i+1 as the Pivot position.
8. Stop.
```

**Quick Sort Program in C**

**Program: Quick Sort in Ascending Order**
```c
#include <stdio.h>

// Swap Function
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition Function
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    int j;

    for(j = low; j < high; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);

    return i + 1;
}

// Quick Sort Function
void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr, low, high);

        // Sort left subarray
        quickSort(arr, low, pi - 1);

        // Sort right subarray
        quickSort(arr, pi + 1, high);
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

    quickSort(arr, 0, n - 1);

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
6 3 8 5 2 7 4 1

Sorted Array:
1 2 3 4 5 6 7 8
```

**Time Complexity Analysis**
```
Time complexity describes how the execution time of an algorithm
increases with the input size.

Case          Time Complexity    Explanation

Best Case     O(n log n)          Pivot divides array into equal halves.
Average Case  O(n log n)          Pivot creates reasonably balanced parts.
Worst Case    O(n^2)              Pivot creates highly unbalanced parts.
```

**Space Complexity:**
```
- Average Space Complexity: O(log n) due to recursive calls.
- Worst-case Space Complexity: O(n) due to recursive calls.
- Quick Sort is generally an in-place sorting algorithm.
- It does not require an additional temporary array for partitioning.
```

**Advantages of Quick Sort**
```
1. Very efficient for large datasets in average cases.
2. Average-case time complexity is O(n log n).
3. Requires less additional memory compared to Merge Sort.
4. Works efficiently with arrays.
5. It is generally an in-place sorting algorithm.
6. Good cache performance in practical implementations.
```

**Disadvantages of Quick Sort**
```
1. Worst-case time complexity is O(n^2).
2. Not a stable sorting algorithm.
3. Performance depends on Pivot selection.
4. Recursive calls require stack memory.
5. Can become inefficient if partitions are highly unbalanced.
```

**Applications of Quick Sort**
```
1. Sorting large arrays.
2. General-purpose sorting applications.
3. Sorting numerical datasets.
4. Used in programming and algorithmic problems.
5. Useful when average-case performance is important.
6. Used in various library sorting implementations and variants.
```

