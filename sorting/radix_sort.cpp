#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Utility function to get the digit at a given place value
int getDigit(int num, int place)
{
    return (num / place) % 10;
}

// Utility function to perform counting sort based on a specific digit
void countingSortByDigit(vector<int> &arr, int place)
{
    const int base = 10;
    vector<int> output(arr.size()); // Output array
    vector<int> count(base, 0);     // Count array

    // Store the count of occurrences of each digit
    for (int num : arr)
    {
        int digit = getDigit(num, place);
        count[digit]++;
    }

    // Update the count array to contain the actual position of this digit in the output array
    for (int i = 1; i < base; i++)
    {
        count[i] += count[i - 1];
    }

    // Build the output array
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        int num = arr[i];
        int digit = getDigit(num, place);
        output[count[digit] - 1] = num;
        count[digit]--;
    }

    // Copy the output array to arr, so that arr contains sorted numbers according to the current digit
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = output[i];
    }
}

// Main radix sort function
void radixSort(vector<int> &arr)
{
    // Find the maximum number to determine the number of digits
    int maxNum = *max_element(arr.begin(), arr.end());

    // Perform counting sort for each digit place value
    for (int place = 1; maxNum / place > 0; place *= 10)
    {
        countingSortByDigit(arr, place);
    }
}

void printArray(const vector<int> &arr)
{
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

int main()
{
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};

    cout << "Unsorted array: ";
    printArray(arr);

    radixSort(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
