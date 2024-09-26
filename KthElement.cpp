#include <iostream>
using namespace std;

int findKthLargest(int array[], int size, int k) {
    int maxIndex, i, j;
    // Perform k iterations to find the kth largest element
    for (i = 0; i < k; i++) {
        // Find the index of the current maximum element
        maxIndex = 0;
        for (j = 1; j < size; j++) {
            if (array[j] > array[maxIndex]) {
                maxIndex = j;
            }
        }

        // Swap the maximum element with the last element
        swap(array[maxIndex], array[size - 1]);
        size--;
    }

    // Return the kth largest element
    return array[size];
}

int main() {
    const int MAX_SIZE = 100;
    int size, k, i, kthLargest;
    int arr[MAX_SIZE];
    
    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (i = 0; i < size; i++) 
        cin >> arr[i];
    
    cout << "Enter the value of k: ";
    cin >> k;

    kthLargest = findKthLargest(arr, size, k);

    cout << "The " << k << "th largest element in the array is: " << kthLargest << std::endl;

    return 0;
}