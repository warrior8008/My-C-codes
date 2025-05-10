#include <stdio.h>

int linearSearch(int *arr, int size, int key) {
    int *ptr = arr;  // pointer to the beginning of array

    for (int i = 0; i < size; i++) {
        if (*(ptr + i) == key) {
            return i;  // element found at index i
        }
    }

    return -1;  // element not found
}

int main() {
    int arr[100], n, key, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    result = linearSearch(arr, n, key);

    if (result != -1) {
        printf("Element found at index %d (position %d)\n", result, result + 1);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
