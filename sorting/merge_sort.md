# Merge Sort

## Introduction

Merge Sort is a classic divide-and-conquer algorithm used for sorting. It is known for its efficiency and stable sorting nature. Merge Sort is particularly effective on large datasets and is often used as a standard algorithm in many applications.

## Algorithm Explanation

Merge Sort works by dividing the array into two halves, recursively sorting each half, and then merging the two sorted halves back together. The key to its efficiency is the merging process, which allows it to handle large arrays with relative ease.

### Visualization

![Merge Sort Animation](/images/merge_sort.gif)

### Steps of the Algorithm

1. **Divide**: Split the array into two halves until each subarray contains only one element.
2. **Conquer**: Recursively sort each subarray.
3. **Merge**: Combine the sorted subarrays back into a single sorted array by comparing elements from each subarray and placing them in the correct order.

### Detailed Process

- If the array has more than one element, split it into two subarrays.
- Recursively apply Merge Sort to both subarrays.
- Merge the two sorted subarrays into one sorted array.

## Time and Space Complexity

- **Time Complexity**:

  - **Best Case**: O(n log n)
  - **Average Case**: O(n log n)
  - **Worst Case**: O(n log n)

- **Space Complexity**: O(n) [Due to the temporary arrays used for merging]

## When to Use Merge Sort

Merge Sort is particularly useful in the following scenarios:

- When dealing with large datasets where O(n log n) complexity is required.
- When stability is important (Merge Sort is a stable sort).
- When working with linked lists, as Merge Sort can be efficiently implemented on them without requiring additional space.

## Example Walkthrough

Consider the following array: `[12, 11, 13, 5, 6, 7]`.

- **First Split**:

  - Divide the array into two halves: `[12, 11, 13]` and `[5, 6, 7]`.

- **Recursively Split**:

  - Further divide `[12, 11, 13]` into `[12]` and `[11, 13]`, and `[5, 6, 7]` into `[5, 6]` and `[7]`.

- **Merge and Sort**:
  - Merge `[11, 13]` and `[12]` to form `[11, 12, 13]`.
  - Merge `[5, 6]` and `[7]` to form `[5, 6, 7]`.
  - Finally, merge `[11, 12, 13]` and `[5, 6, 7]` to get the sorted array: `[5, 6, 7, 11, 12, 13]`.

## Conclusion

Merge Sort is an efficient and reliable sorting algorithm that performs well on large datasets. Its divide-and-conquer approach ensures that it maintains a consistent O(n log n) time complexity. Though it requires additional space for merging, its stability and efficiency make it a preferred choice in many applications.

---

For the implementation details, refer to the `merge_sort.cpp` file in this repository.
