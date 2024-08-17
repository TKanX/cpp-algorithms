# Radix Sort

## Introduction

Radix Sort is a non-comparison-based sorting algorithm that works by sorting numbers based on their digits. It processes each digit of the numbers individually, starting from the least significant digit to the most significant digit. Radix Sort is particularly efficient for sorting integers and can achieve linear time complexity in certain conditions.

## Algorithm Explanation

Radix Sort works by distributing the numbers into buckets based on each digit's value and then gathering them back in the sorted order. This process is repeated for each digit place value, starting from the least significant digit and moving towards the most significant digit.

### Visualization

![Radix Sort Animation](/images/radix_sort.gif)

### Steps of the Algorithm

1. **Find the Maximum Number**: Determine the maximum value in the array to figure out the number of digits in the largest number.
2. **Sorting by Each Digit**: Perform counting sort for each digit place value. Start from the least significant digit and proceed to the most significant digit.
3. **Update the Array**: After each pass of counting sort, the array will be partially sorted based on the current digit.

### Detailed Process

- **Counting Sort by Digit**: For each digit place (units, tens, hundreds, etc.), use counting sort to sort the array elements based on that digit.
- **Digit Extraction**: Extract digits from numbers using modular arithmetic to determine their position in the count array.
- **Bucket Sorting**: Place elements into buckets according to their digit values and then gather them in sorted order.

## Time and Space Complexity

- **Time Complexity**:

  - **Best Case**: O(n \* k) [where `n` is the number of elements and `k` is the number of digits in the largest number]
  - **Average Case**: O(n \* k)
  - **Worst Case**: O(n \* k)

- **Space Complexity**: O(n + k) [where `n` is the number of elements and `k` is the range of digit values (0 to 9)]

## When to Use Radix Sort

Radix Sort is particularly useful in the following scenarios:

- When sorting large datasets of integers with a fixed number of digits.
- When the range of values is not excessively large compared to the number of elements.
- When you need a linear time sorting algorithm for integers.

## Example Walkthrough

Consider the following array: `[170, 45, 75, 90, 802, 24, 2, 66]`.

- **Initial Array**:

  - The array is `[170, 45, 75, 90, 802, 24, 2, 66]`.

- **Digit by Digit Sorting**:
  - **Units Place**: Sorting based on the units place results in `[802, 2, 24, 45, 66, 75, 90, 170]`.
  - **Tens Place**: Sorting based on the tens place results in `[2, 24, 45, 66, 75, 90, 170, 802]`.
  - **Hundreds Place**: Final sorting based on the hundreds place keeps the array as `[2, 24, 45, 66, 75, 90, 170, 802]`.

## Conclusion

Radix Sort is an efficient sorting algorithm for integers when the number of digits is relatively small compared to the number of elements. Its linear time complexity makes it a suitable choice for specific applications, though it may not be as effective for datasets with a large range of values.

---

For the implementation details, refer to the `radix_sort.cpp` file in this repository.
