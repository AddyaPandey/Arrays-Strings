#include <iostream>
using namespace std;

double findMedian(int array[], int size) {
    int i, j, temp;
    // Sort the array using bubble sort
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp=array[j];
                array[j]=array[j + 1];
                array[j+1]=temp;
            }
        }
    }

    // Calculate the median
    if (size % 2 == 0) {
        return (array[size / 2 - 1] + array[size / 2]) / 2.0;
    } else {
        return array[size / 2];
    }
}

int main() {
    const int MAX_SIZE = 100;
    int size, i;
    int arr[MAX_SIZE];
    double median;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (i = 0; i < size; i++) {
        cin >> arr[i];
    }

    median = findMedian(arr, size);

    cout << "The median of the array is: " << median;

    return 0;
}