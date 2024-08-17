# Bucket Sort

## Introduction

Bucket Sort is a distribution-based sorting algorithm that is efficient for sorting a set of floating-point numbers uniformly distributed over a range. The algorithm divides the elements into several buckets, sorts each bucket individually, and then concatenates the sorted buckets to form the final sorted array.

## Algorithm Explanation

Bucket Sort works by distributing the elements of an array into several buckets. Each bucket is then sorted individually, either using a different sorting algorithm or recursively applying Bucket Sort. Finally, the sorted buckets are concatenated to form the sorted array.

### Visualization

![Bucket Sort Animation](/images/bucket_sort.png)

### Steps of the Algorithm

1. **Create Buckets**: Create an array of empty buckets.
2. **Distribute Elements**: Traverse the input array and distribute elements into buckets based on their value.
3. **Sort Buckets**: Sort each bucket individually.
4. **Concatenate Buckets**: Concatenate the elements from all buckets to form the sorted array.

### Detailed Process

- **Bucket Creation**: The number of buckets is typically chosen as the length of the input array. Each element is placed into a bucket based on its value, ensuring that elements with similar values end up in the same bucket.
- **Sorting Each Bucket**: Each bucket is sorted using a simple sorting algorithm like insertion sort or by recursively applying Bucket Sort.
- **Concatenating Buckets**: The final sorted array is obtained by concatenating all the sorted buckets.

## Time and Space Complexity

- **Time Complexity**:

  - **Best Case**: O(n + k)
  - **Average Case**: O(n + k)
  - **Worst Case**: O(n²)
  - Here, `n` is the number of elements in the input array, and `k` is the number of buckets.

- **Space Complexity**: O(n + k) [where `n` is the number of elements and `k` is the number of buckets]

## When to Use Bucket Sort

Bucket Sort is particularly useful in the following scenarios:

- When dealing with uniformly distributed floating-point numbers.
- When a linear time sorting algorithm is needed, and the data is approximately uniformly distributed.
- When sorting a large dataset where a simple comparison-based sorting algorithm would be too slow.

## Example Walkthrough

Consider the following array: `[0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434]`.

- **Initial Array**:

  - The array is `[0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434]`.

- **Bucket Distribution**:

  - Elements are distributed into buckets based on their value, e.g., `[0.1234]`, `[0.3434]`, `[0.565, 0.656, 0.665]`, `[0.897]`.

- **Sorted Buckets**:

  - Each bucket is sorted individually: `[0.1234]`, `[0.3434]`, `[0.565, 0.656, 0.665]`, `[0.897]`.

- **Final Sorted Array**:
  - Concatenating the sorted buckets gives the final sorted array: `[0.1234, 0.3434, 0.565, 0.656, 0.665, 0.897]`.

## Conclusion

Bucket Sort is a powerful sorting algorithm for specific types of data, particularly when dealing with uniformly distributed floating-point numbers. Its efficiency makes it an attractive choice for sorting large datasets under the right conditions, though it may be less effective when the data is not uniformly distributed.

---

For the implementation details, refer to the `bucket_sort.cpp` file in this repository.
