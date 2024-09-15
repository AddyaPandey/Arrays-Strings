#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int d, x;
    scanf("%d %d", &d, &x);
    int countEven = 0, countOdd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            countEven++;
        else
            countOdd++;
    }
    if (d % 2 != 0) { if (countEven == 0)
            printf("0\n");
        else
            printf("%d\n", countEven * x);
    } else {
        if (countOdd == 0)
            printf("0\n");
        else
            printf("%d\n", countOdd * x);
    }
    return 0;
}