//Using static array sort in ascending and descending order.
#include<stdio.h>
int main(){
    int arr[5] = {34, 12, 9, 56, 27};
    int n = 5, i, j, temp;
    for ( i = 0; i < n-1; i++ ) {
        for ( j = 0; j < n-i-1; j++ ) {
            if ( arr[j] > arr[j+1] ) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Ascending order: ");
    for ( i = 0; i < n; i++ ) {
        printf("%d ", arr[i]);
    }
    for ( i = 0; i < n-1; i++ ) {
        for ( j = 0; j < n-i-1; j++ ) {
            if ( arr[j] < arr[j+1] ) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nDescending order: ");
    for ( i = 0; i < n; i++ ) {
        printf("%d ", arr[i]);
    }
    return 0;
}