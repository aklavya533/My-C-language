//Using dynamic array sort in ascending and descending order.
#include<stdio.h>
#include<stdlib.h>
int main() {
    int n, i, j, temp;
    int *arr;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nDescending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}