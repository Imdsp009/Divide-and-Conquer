#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int left, int right) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            return binarySearch(arr, target, mid + 1, right);
        else
            return binarySearch(arr, target, left, mid - 1);
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5;
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = binarySearch(arr, target, 0, size - 1);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
