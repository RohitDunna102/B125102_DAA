#include <stdio.h>

int main() {
    int arr[100], n;
    int i, j;
    int unique = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                unique = 0;
                break;
            }
        }
        if(unique == 0)
            break;
    }

    if(unique)
        printf("All elements are unique.\n");
    else
        printf("Duplicate element found: %d\n", arr[i]);

    return 0;
}