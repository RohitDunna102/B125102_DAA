#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int elementUnique(int arr[], int n, int *comparisons)
{
    *comparisons = 0;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            (*comparisons)++;

            if(arr[i] == arr[j])
                return 0;      // Duplicate found
        }
    }

    return 1;                  // All elements are unique
}

int main()
{
    FILE *fp;
    fp = fopen("1.txt","w");

    fprintf(fp,"#n comparisons\n");

    srand(time(NULL));

    for(int n = 10; n <= 100; n += 10)
    {
        int arr[100];

        for(int i = 0; i < n; i++)
            arr[i] = rand() % 1000;

        int comparisons;

        elementUnique(arr, n, &comparisons);

        fprintf(fp,"%d %d\n", n, comparisons);
    }

    fclose(fp);

    printf("Data stored in 1.txt\n");

    return 0;
}