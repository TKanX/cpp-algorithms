# Bubble Sort

## Introduction

Bubble Sort is a simple comparison-based sorting algorithm. It is one of the most basic and straightforward sorting techniques but is generally not suitable for large datasets due to its O(n²) time complexity.

## Algorithm Explanation

The Bubble Sort algorithm repeatedly steps through the list to be sorted, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted. The algorithm gets its name because smaller elements "bubble" to the top of the list as the sorting progresses.

### Visualization

![Bubble Sort Animation](bubble_sort.gif)

### Steps of the Algorithm

1. Start from the first element in the array.
2. Compare the current element with the next element.
3. If the current element is greater than the next element, swap them.
4. Move to the next pair of elements and repeat the process until the end of the array.
5. At the end of each pass, the largest element will have moved to its correct position.
6. Repeat the process for the remaining elements, excluding the last sorted element.
7. Continue until no more swaps are needed, indicating that the array is sorted.

## Time and Space Complexity

- **Time Complexity**:

  - **Best Case**: O(n) [When the array is already sorted]
  - **Average Case**: O(n²)
  - **Worst Case**: O(n²)

- **Space Complexity**: O(1) [In-place sorting]

## When to Use Bubble Sort

Bubble Sort is rarely used in practice due to its inefficiency with large datasets. However, it can be useful in the following scenarios:

- When the dataset is small.
- When the dataset is nearly sorted, as Bubble Sort can identify an already sorted list quickly.
- For educational purposes, to help understand the basics of sorting algorithms.

## Example Walkthrough

Consider the following array: `[64, 34, 25, 12, 22, 11, 90]`.

- **First Pass**:

  - Compare `64` and `34`, swap them to get `[34, 64, 25, 12, 22, 11, 90]`.
  - Compare `64` and `25`, swap them to get `[34, 25, 64, 12, 22, 11, 90]`.
  - Continue this process until the largest element `90` is at the end.

- **Subsequent Passes**:
  - Continue the same process for the rest of the array until the entire array is sorted.

After all passes, the sorted array will be: `[11, 12, 22, 25, 34, 64, 90]`.

## Conclusion

Bubble Sort is a fundamental sorting algorithm that serves as a great introduction to sorting techniques. Despite its simplicity, its quadratic time complexity makes it impractical for large datasets. However, it is still a valuable tool for understanding the principles of sorting.

---

For the implementation details, refer to the `bubble_sort.cpp` file in this repository.
