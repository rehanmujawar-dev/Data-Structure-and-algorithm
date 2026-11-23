
# Insertion Sort

**Definition**
```
Insertion Sort is a simple comparison-based sorting algorithm that builds
the sorted array one element at a time.

It works by taking one element from the unsorted part and inserting it
into its correct position in the sorted part of the array.
```

**Theory of Insertion Sort**
```
Insertion Sort works similarly to arranging playing cards in your hand.

Initially, the first element is considered sorted.
Then, each remaining element is compared with the elements before it.

If the previous element is greater than the current element,
it is shifted one position to the right.

The current element is inserted into its correct position.

This process continues until all elements are sorted.
```

**Working of Insertion Sort**
```
1. Consider the first element as a sorted element.
2. Select the next element as the key.
3. Compare the key with the previous elements.
4. If the previous element is greater than the key, shift it to the right.
5. Insert the key into its correct position.
6. Repeat the process until all elements are sorted.
```

**Insertion Sort Example**
```
Consider the following array:

arr[] = {5, 3, 8, 4, 2};

Initially:
{5, 3, 8, 4, 2}

Pass 1:

Key = 3

Compare 3 with 5.
Since 5 > 3, shift 5 to the right.

{3, 5, 8, 4, 2}

Pass 2:

Key = 8

Compare 8 with 5.
Since 5 < 8, no shifting is required.

{3, 5, 8, 4, 2}

Pass 3:

Key = 4

Compare 4 with 8.
Since 8 > 4, shift 8 to the right.

Compare 4 with 5.
Since 5 > 4, shift 5 to the right.

Insert 4 at its correct position.

{3, 4, 5, 8, 2}

Pass 4:

Key = 2

Compare 2 with 8, 5, 4 and 3.
Shift all these elements one position to the right.

Insert 2 at the beginning.

{2, 3, 4, 5, 8}

Final Sorted Array:

{2, 3, 4, 5, 8}
```

**Insertion Sort Algorithm**
```
Algorithm: Insertion Sort

1. Start.
2. Read the number of elements n.
3. Read array elements.
4. Repeat from i = 1 to n-1.
5. Store arr[i] in a variable called key.
6. Set j = i-1.
7. Repeat while j >= 0 and arr[j] > key:
   - Shift arr[j] one position to the right.
   - Decrement j by 1.
8. Insert key at arr[j+1].
9. Display the sorted array.
10. Stop.
```

**Insertion Sort Program in C**

**\*Program: Insertion Sort in Ascending Order\***
```c
#include <stdio.h>

int main()
{
    int arr[100], n, i, j, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Insertion Sort
    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
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
5 3 8 4 2

Sorted Array:
2 3 4 5 8
```

**Time Complexity Analysis**
```
Time complexity describes how the execution time of an algorithm
increases with the input size.

Case          Time Complexity    Explanation

Best Case     O(n)               Array is already sorted.
Average Case  O(n^2)             Elements require shifting.
Worst Case    O(n^2)             Array is sorted in reverse order.
```

**Space Complexity:**
```
- Space Complexity: O(1).
- Insertion Sort is an in-place sorting algorithm.
- It requires only a constant amount of extra memory.
```

**Advantages of Insertion Sort**
```
1. Easy to understand and implement.
2. Works efficiently for small datasets.
3. Requires very little extra memory.
4. It is an in-place sorting algorithm.
5. It is a stable sorting algorithm.
6. Efficient for nearly sorted arrays.
7. Best-case time complexity is O(n).
```

**Disadvantages of Insertion Sort**
```
1. Not suitable for large datasets.
2. Average-case time complexity is O(n^2).
3. Worst-case time complexity is O(n^2).
4. Requires many shifting operations.
5. Less efficient than Merge Sort and Quick Sort for large datasets.
```

**Applications of Insertion Sort**
```
1. Sorting small datasets.
2. Sorting nearly sorted arrays.
3. Online sorting when elements arrive one by one.
4. Used in hybrid sorting algorithms.
5. Sorting playing cards.
6. Useful when the number of elements is small.
```

