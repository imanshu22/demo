#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int lower, upper;
    printf("Enter the lower bound for random numbers: ");
    scanf("%d", &lower);
    printf("Enter the upper bound for random numbers: ");
    scanf("%d", &upper);
    int arr[n];
    for (i = 0; i < n; i++) 
	{
        arr[i] = (rand() % (upper - lower + 1)) + lower;
    }
    printf("Generated Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int smallest, second_smallest, largest, second_largest;
    smallest = second_smallest = arr[0];
    largest = second_largest = arr[0];
    for (i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < second_smallest && arr[i] > smallest) {
            second_smallest = arr[i];
        }

        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }
    printf("Second Smallest Element: %d\n", second_smallest);
    printf("Second Largest Element: %d\n", second_largest);
    return 0;
}