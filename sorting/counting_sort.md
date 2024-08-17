# Counting Sort

## Introduction

Counting Sort is a non-comparison-based sorting algorithm that works well when the range of input values is known and not too large. It is particularly effective for sorting integers within a limited range and is known for its linear time complexity under these conditions.

## Algorithm Explanation

Counting Sort works by counting the occurrences of each distinct element in the input array and using this count to determine the position of each element in the sorted array. This approach eliminates the need for comparisons between elements, making it very efficient for specific types of data.

### Visualization

![Counting Sort Animation](/images/counting_sort.gif)

### Steps of the Algorithm

1. **Find the Maximum Value**: Determine the maximum value in the input array to define the size of the count array.
2. **Count Occurrences**: Create a count array where the index represents the element value and the value at each index represents the number of occurrences of that element.
3. **Build the Sorted Array**: Use the count array to place elements in their correct positions in the output array.

### Detailed Process

- **Count Array Creation**: Create a count array with a size equal to the maximum value in the input array plus one. Initialize all elements to 0.
- **Count Elements**: Traverse the input array and increment the corresponding index in the count array.
- **Build Output Array**: Traverse the count array and construct the sorted array by adding each element according to its frequency.

## Time and Space Complexity

- **Time Complexity**:

  - **Best Case**: O(n + k)
  - **Average Case**: O(n + k)
  - **Worst Case**: O(n + k)
  - Here, `n` is the number of elements in the input array, and `k` is the range of the input values (i.e., the difference between the maximum and minimum values plus one).

- **Space Complexity**: O(k) [where `k` is the range of the input values]

## When to Use Counting Sort

Counting Sort is particularly useful in the following scenarios:

- When dealing with integers within a known and limited range.
- When sorting large datasets where the range of the input values is not significantly larger than the number of elements.
- When the data has discrete values and a stable sorting algorithm is preferred.

## Example Walkthrough

Consider the following array: `[4, 2, 2, 8, 3, 3, 1]`.

- **Initial Array**:

  - The array is `[4, 2, 2, 8, 3, 3, 1]`.

- **Count Array**:

  - Maximum value = 8, so the count array size will be 9. Count occurrences: `[0, 1, 2, 2, 1, 0, 0, 0, 1]`.

- **Sorted Array**:
  - Build the sorted array using the count array: `[1, 2, 2, 3, 3, 4, 8]`.

## Conclusion

Counting Sort is an efficient algorithm for sorting integers when the range of possible values is known and not excessively large. Its linear time complexity and stable nature make it a valuable tool for specific applications, though it is less effective for data with a large range of values.

---

For the implementation details, refer to the `counting_sort.cpp` file in this repository.
