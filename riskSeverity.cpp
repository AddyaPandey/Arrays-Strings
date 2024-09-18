
#include<stdio.h> 
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[], int size) {
    int low = 0, mid = 0, high = size - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(&arr[low], &arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
               swap(&arr[mid], &arr[high]);
            high--;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    sortArray(a, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
     return 0;
}