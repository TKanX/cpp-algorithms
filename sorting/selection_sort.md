# Selection Sort

## Introduction

Selection Sort is a simple comparison-based sorting algorithm. It works by repeatedly selecting the smallest (or largest, depending on sorting order) element from the unsorted portion of the list and moving it to the beginning. Despite its simplicity, Selection Sort is inefficient on large lists, making it mainly useful for educational purposes.

## Algorithm Explanation

The Selection Sort algorithm divides the input list into two parts: a sorted part at the front and an unsorted part at the back. It repeatedly selects the smallest element from the unsorted part and swaps it with the first element of the unsorted part, thereby growing the sorted part by one element at each step.

### Visualization

![Selection Sort Animation](/images/selection_sort.gif)

### Steps of the Algorithm

1. Start with the first element of the array.
2. Find the smallest element in the unsorted portion of the array.
3. Swap this smallest element with the first element of the unsorted portion.
4. Move the boundary of the sorted and unsorted portions one element forward.
5. Repeat the process for the next unsorted element until the entire array is sorted.

## Time and Space Complexity

- **Time Complexity**:

  - **Best Case**: O(n²)
  - **Average Case**: O(n²)
  - **Worst Case**: O(n²)

- **Space Complexity**: O(1) [In-place sorting]

## When to Use Selection Sort

Selection Sort is generally not used in practice due to its inefficiency with large datasets. However, it can be useful in the following scenarios:

- When memory space is limited, as Selection Sort requires a constant amount of extra space.
- For small datasets where its simplicity outweighs its inefficiency.
- For educational purposes to illustrate the concept of in-place sorting algorithms.

## Example Walkthrough

Consider the following array: `[64, 25, 12, 22, 11]`.

- **First Pass**:

  - Find the smallest element in the entire array (`11`), and swap it with the first element.
  - Array becomes: `[11, 25, 12, 22, 64]`.

- **Second Pass**:

  - Find the smallest element in the remaining unsorted array (`12`), and swap it with the second element.
  - Array becomes: `[11, 12, 25, 22, 64]`.

- **Subsequent Passes**:
  - Continue this process until the entire array is sorted.

After all passes, the sorted array will be: `[11, 12, 22, 25, 64]`.

## Conclusion

Selection Sort is a straightforward but inefficient sorting algorithm. It is useful primarily for its educational value and its simplicity in implementation. Due to its O(n²) time complexity, it is not suitable for large datasets but can be effective in scenarios where memory usage is a concern.

---

For the implementation details, refer to the `selection_sort.cpp` file in this repository.
