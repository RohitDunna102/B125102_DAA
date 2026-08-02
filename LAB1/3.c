#include <stdio.h>

void bubbleSortNormal(int arr[], int n, int *comparisons) {
    int i, j, temp;
    *comparisons = 0;

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            (*comparisons)++;

            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortOptimized(int arr[], int n, int *comparisons) {
    int i, j, temp, swapped;
    *comparisons = 0;

    for(i = 0; i < n - 1; i++) {
        swapped = 0;

        for(j = 0; j < n - i - 1; j++) {
            (*comparisons)++;

            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        if(swapped == 0)
            break;
    }
}

int main() {
    int n, i;
    int arr1[100], arr2[100];
    int normalComp, optimizedComp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }

    bubbleSortNormal(arr1, n, &normalComp);
    bubbleSortOptimized(arr2, n, &optimizedComp);

    printf("\nSorted Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\n\nComparisons in Normal Bubble Sort = %d", normalComp);
    printf("\nComparisons in Optimized Bubble Sort = %d\n", optimizedComp);

    return 0;
}