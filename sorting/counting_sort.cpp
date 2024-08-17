#include <iostream>
#include <vector>
using namespace std;

void countingSort(int arr[], int n)
{
    // Find the maximum value in the array
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    // Create a count array and initialize all elements to 0
    vector<int> count(maxVal + 1, 0);

    // Store the count of each element
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // Update the original array with sorted values
    int index = 0;
    for (int i = 0; i <= maxVal; i++)
    {
        while (count[i] > 0)
        {
            arr[index++] = i;
            count[i]--;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    printArray(arr, n);

    countingSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
