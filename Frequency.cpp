#include <iostream>
using namespace std;

void findFrequency(int array[], int size) {
    const int MAX_SIZE = 100;
    int frequencies[MAX_SIZE] = {0};
    int i;

    // Calculate the frequency of each element
    for (i = 0; i < size; i++) {
        frequencies[array[i]]++;
    }

    // Print the frequency of each element
    cout << "Element\tFrequency" << std::endl;
    for (i = 0; i < MAX_SIZE; i++) {
        if (frequencies[i] > 0) {
            cout << i << "\t" << frequencies[i] << endl;
        }
    }
}

int main() {
    const int MAX_SIZE = 100;
    int size, i;
    int arr[MAX_SIZE];

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (i = 0; i < size; i++) {
        cin >> arr[i];
    }

    findFrequency(arr, size);

    return 0;
}