//(Apply bubble sort, selection sort, insertion sort & quick sort algorithms). 
#include<stdio.h>
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high], i = low - 1;
    for(int j = low; j < high; j++)
        if(arr[j] <= pivot)
            swap(&arr[++i], &arr[j]);
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void sortArray(int arr[], int n, int choice) {
    int i, j, key;
    switch(choice) {
        case 1: // Bubble Sort
            for(i = 0; i < n-1; i++)
                for(j = 0; j < n-i-1; j++)
                    if(arr[j] > arr[j+1])
                        swap(&arr[j], &arr[j+1]);
            break;
        case 2: // Selection Sort
            for(i = 0; i < n-1; i++) {
                key = i;
                for(j = i+1; j < n; j++)
                    if(arr[j] < arr[key])
                        key = j;
                swap(&arr[i], &arr[key]);
            }
            break;
        case 3: // Insertion Sort
            for(i = 1; i < n; i++) {
                key = arr[i];
                for(j = i-1; j >= 0 && arr[j] > key; j--)
                    arr[j+1] = arr[j];
                arr[j+1] = key;
            }
            break;
        case 4: // Quick Sort
            quickSort(arr, 0, n-1);
    }
}

int main() {
    int n, choice, arr[100], temp[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("\n1:Bubble 2:Selection 3:Insertion 4:Quick\nEnter sorting choice: ");
    scanf("%d", &choice);
    
    for(int i = 0; i < n; i++) temp[i] = arr[i];
    sortArray(temp, n, choice);
    printf("Sorted array: ");
    for(int i = 0; i < n; i++) printf("%d ", temp[i]);
    return 0;
}