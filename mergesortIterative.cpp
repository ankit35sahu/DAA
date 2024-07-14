#include <iostream> // Use only iostream for C++ input/output

using namespace std;

int binarySearch(int arr[], int size, int element) // Corrected function name
{
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Corrected middle element calculation to avoid overflow

        if (arr[mid] == element) {
            return mid;
        } else if (arr[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // Element not found
}

int main() {
    int arr[10], size, i, element;

    cout << "Enter the size of the array: ";
    cin >> size;

    if (size > 10) { // Handle case where size exceeds array capacity
        cout << "Error: Array size cannot be greater than 10." << endl;
        return 1; // Indicate error
    }

    cout << "Enter the elements in sorted order: ";
    for (i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> element;

    int index = binarySearch(arr, size, element);

    if (index == -1) {
        cout << "Element is not found." << endl;
    } else {
        cout << "Element is found at index " << index << endl;
    }

    return 0;
}