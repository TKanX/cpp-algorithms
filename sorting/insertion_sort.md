# Insertion Sort

## Introduction

Insertion Sort is a simple and intuitive comparison-based sorting algorithm. It builds the final sorted array one item at a time, making it efficient for small or partially sorted datasets. The algorithm is similar to the way you might sort playing cards in your hands.

## Algorithm Explanation

Insertion Sort works by taking elements from the unsorted part of the array and inserting them into their correct position in the sorted part. The process involves shifting elements in the sorted part to make room for the element being inserted.

### Visualization

![Insertion Sort Animation](/images/insertion_sort.gif)

### Steps of the Algorithm

1. Start from the second element (index 1) in the array, considering the first element as sorted.
2. Pick the current element and compare it with the elements in the sorted part.
3. Shift all elements that are greater than the current element one position to the right.
4. Insert the current element into its correct position.
5. Repeat the process for all elements in the array until the entire array is sorted.

## Time and Space Complexity

- **Time Complexity**:

  - **Best Case**: O(n) [When the array is already sorted]
  - **Average Case**: O(n²)
  - **Worst Case**: O(n²)

- **Space Complexity**: O(1) [In-place sorting]

## When to Use Insertion Sort

Insertion Sort is most effective in the following scenarios:

- When the dataset is small.
- When the dataset is nearly sorted, as Insertion Sort efficiently handles such cases.
- When stability is a requirement (Insertion Sort is a stable sort).
- For educational purposes, to understand basic sorting mechanisms.

## Example Walkthrough

Consider the following array: `[12, 11, 13, 5, 6]`.

- **First Pass**:

  - The first element `12` is considered sorted. The second element `11` is compared with `12` and inserted before it.
  - Array after first pass: `[11, 12, 13, 5, 6]`.

- **Second Pass**:

  - The third element `13` is already in the correct position, so no changes are made.
  - Array after second pass: `[11, 12, 13, 5, 6]`.

- **Subsequent Passes**:
  - Continue the same process for the rest of the elements until the array is fully sorted.

After all passes, the sorted array will be: `[5, 6, 11, 12, 13]`.

## Conclusion

Insertion Sort is a fundamental sorting algorithm that is easy to understand and implement. While it may not be suitable for large datasets due to its quadratic time complexity, it is highly effective for small or nearly sorted datasets. Its stability and simplicity make it a valuable tool for certain use cases.

---

For the implementation details, refer to the `insertion_sort.cpp` file in this repository.
