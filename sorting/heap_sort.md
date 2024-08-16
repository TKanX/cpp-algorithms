# Heap Sort

## Introduction

Heap Sort is a comparison-based sorting algorithm that utilizes the heap data structure, which is a specialized binary tree. This algorithm is known for its efficiency and in-place sorting, making it a popular choice when working with large datasets.

## Algorithm Explanation

Heap Sort first transforms the input array into a heap, a complete binary tree where each parent node is greater than or equal to its children (for a max heap). The algorithm then repeatedly removes the largest element from the heap (the root) and rebuilds the heap with the remaining elements until the array is sorted.

### Visualization

![Heap Sort Animation](/images/heap_sort.gif)

### Steps of the Algorithm

1. **Build a Max Heap**: Convert the array into a max heap, where the largest element is at the root.
2. **Extract Elements**: Swap the root element with the last element of the heap and reduce the heap size. Rebuild the heap for the remaining elements.
3. **Repeat**: Continue the process until the entire array is sorted.

### Detailed Process

- **Heapify**: Ensure the subtree rooted at a given index satisfies the heap property. This involves comparing the parent node with its children and swapping if necessary, then recursively applying the process to the affected subtree.
- **Build Heap**: Start from the last non-leaf node and apply heapify to construct the heap.
- **Sort**: Swap the root of the heap with the last element, reduce the heap size by one, and heapify the root again. Repeat until the heap is empty.

## Time and Space Complexity

- **Time Complexity**:

  - **Best Case**: O(n log n)
  - **Average Case**: O(n log n)
  - **Worst Case**: O(n log n)

- **Space Complexity**: O(1) [Heap Sort is an in-place sorting algorithm]

## When to Use Heap Sort

Heap Sort is particularly useful in the following scenarios:

- When you need an in-place sorting algorithm with O(n log n) complexity.
- When stability is not a requirement (Heap Sort is not a stable sort).
- When you have limited memory available, as Heap Sort uses a constant amount of additional space.

## Example Walkthrough

Consider the following array: `[12, 11, 13, 5, 6, 7]`.

- **Initial Array**:

  - The array is `[12, 11, 13, 5, 6, 7]`.

- **Build Max Heap**:

  - Convert the array into a max heap: `[13, 11, 12, 5, 6, 7]`.

- **Sort the Array**:
  - Swap the root (13) with the last element (7), reduce the heap size, and heapify: `[12, 11, 7, 5, 6, 13]`.
  - Repeat the process until the array is fully sorted: `[5, 6, 7, 11, 12, 13]`.

## Conclusion

Heap Sort is an efficient and robust sorting algorithm with consistent O(n log n) performance. It is well-suited for situations where in-place sorting is required, though it is not stable. Its versatility and efficiency make it a valuable tool in a variety of applications.

---

For the implementation details, refer to the `heap_sort.cpp` file in this repository.
