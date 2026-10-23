Searching: Searching is the process of finding a specific element or key in a collection of data.

Types of Searching:-

There are two main types of searching techniques:

1. Linear Search: It checks each element one by one until the required element is found or the list ends.

2. Binary Search: It repeatedly divides a sorted list into two halves to find the required element.

Other searching techniques include:
- Jump Search
- Interpolation Search
- Exponential Search
- Hashing

1. Linear Search
Theory
Linear Search is a searching technique in which each element of a list is checked one by one until the required element (key) is found or the list ends. It works on both sorted and unsorted arrays.


Time Complexity Analysis
Case	Time Complexity
Best Case	O(1)
Average Case	O(n)
Worst Case	O(n)
Space Complexity	O(1)

- Best case: The element is at the first position.
- Average case: Several elements must be checked.
- Worst case: The element is at the last position or is absent.

Advantages
1. Simple and easy to implement.
2. Works on sorted and unsorted arrays.
3. Does not require extra memory.
4. Suitable for small datasets.

Limitations
1. Slow for large datasets.
2. May need to check every element.
3. Less efficient than binary search for large, sorted arrays.

2. Binary Search
Theory
Binary Search is a searching technique in which the sorted array is repeatedly divided into two halves. The middle element is compared with the key, and the search continues in the appropriate half until the element is found or the search range becomes empty.

Important: Binary Search requires the data to be sorted.

Example: Array = [10, 20, 30, 40, 50], Key = 40
- Middle element = 30 → Key is greater than 30.
- Search the right half: [40, 50].
- Middle element of the remaining range = 40 → Element found.

Time Complexity Analysis
Case	Time Complexity
Best Case	O(1)
Average Case	O(log n)
Worst Case	O(log n)
Space Complexity (iterative)	O(1)

- Best case: The key is the middle element in the first comparison.
- Average case: The search range is repeatedly halved.
- Worst case: The algorithm continues halving the range until the element is found or the range becomes empty.
Advantages
1. Faster than linear search for large, sorted datasets.
2. Requires fewer comparisons.
3. Efficient for searching in sorted arrays.
4. Iterative implementation uses constant extra space.

Limitations
1. Requires sorted data.
2. Sorting an unsorted array first can add extra time.
3. Less suitable for linked lists because accessing the middle element is not efficient.
4. Implementation is slightly more complex than linear search.
