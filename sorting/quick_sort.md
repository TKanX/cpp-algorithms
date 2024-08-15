# Quick Sort

## Introduction

Quick Sort is one of the most efficient and widely used sorting algorithms. It employs a divide-and-conquer strategy to sort elements by partitioning the array into two subarrays, then recursively sorting the subarrays. Quick Sort is known for its speed and is often the go-to choice for sorting in many practical scenarios.

## Algorithm Explanation

Quick Sort works by selecting a "pivot" element from the array and partitioning the other elements into two subarrays according to whether they are less than or greater than the pivot. The pivot is then placed in its correct position, and the process is recursively applied to the subarrays.

### Visualization

![Quick Sort Animation](/images/quick_sort.gif)

### Steps of the Algorithm

1. **Choose a Pivot**: Select a pivot element from the array (commonly the last element).
2. **Partition the Array**: Rearrange the array so that elements less than the pivot are on the left, and elements greater than the pivot are on the right.
3. **Recursively Sort the Subarrays**: Apply the same process to the left and right subarrays.

### Detailed Process

- Start by selecting the pivot, typically the last element of the array.
- Partition the array so that all elements less than the pivot come before it, and all elements greater than the pivot come after it.
- Recursively apply the same logic to the subarrays until the entire array is sorted.

## Time and Space Complexity

- **Time Complexity**:

  - **Best Case**: O(n log n)
  - **Average Case**: O(n log n)
  - **Worst Case**: O(n²) [Occurs when the smallest or largest element is always chosen as the pivot]

- **Space Complexity**: O(log n) [Due to the stack space used by recursion]

## When to Use Quick Sort

Quick Sort is highly effective in the following scenarios:

- When you need a fast sorting algorithm with average O(n log n) performance.
- When memory is a concern, as Quick Sort has a low overhead.
- When sorting large datasets, as Quick Sort is efficient and can be optimized further with techniques like choosing a good pivot.

## Example Walkthrough

Consider the following array: `[10, 7, 8, 9, 1, 5]`.

- **Initial Array**:

  - The array is `[10, 7, 8, 9, 1, 5]`.

- **First Partition**:

  - Choose `5` as the pivot.
  - Rearrange elements around `5`, resulting in `[1, 5, 8, 9, 10, 7]`.

- **Recursive Sort**:
  - Recursively apply Quick Sort to the subarrays `[1]` and `[8, 9, 10, 7]`.
  - After recursive sorting, the final sorted array is `[1, 5, 7, 8, 9, 10]`.

## Conclusion

Quick Sort is a powerful sorting algorithm with a good average-case time complexity. Its efficiency and relatively low memory usage make it an excellent choice for many practical applications. However, care must be taken with pivot selection to avoid the worst-case scenario.

---

For the implementation details, refer to the `quick_sort.cpp` file in this repository.
