#include <stdio.h>

int main() {
    int arr[100], n;
    int i;
    int totalSum = 0, leftSum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];
    }

    for(i = 0; i < n; i++) {
        totalSum -= arr[i];   // Right sum

        if(leftSum == totalSum) {
            printf("Partition point found at position %d\n", i + 1);
            printf("Element = %d\n", arr[i]);
            return 0;
        }

        leftSum += arr[i];
    }

    printf("No partition point found.\n");

    return 0;
}