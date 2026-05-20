#include <stdio.h>
int main() {
    int arr[100], n, i;
    int pos, value, search, found = 0;
    // Initial array input
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Display array
    printf("\nArray elements are:\n");
    for(i = 0; i < n; i++) { 
        printf("%d ", arr[i]);  }
    // Insert operation
    printf("\n\nEnter position and value to insert: ");
    scanf("%d %d", &pos, &value);
    for(i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    n++;
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    // Update operation
    printf("\n\nEnter position and new value to update: ");
    scanf("%d %d", &pos, &value);
    arr[pos - 1] = value;
    printf("Array after updation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    // Delete operation
    printf("\n\nEnter position to delete: ");
    scanf("%d", &pos);
    for(i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    // Search operation
    printf("\n\nEnter element to search: ");
    scanf("%d", &search);
    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            found = 1;
            printf("Element found at position %d\n", i + 1);
            break;
        }
    }
    if(found == 0)
        printf("Element not found.\n");
    return 0;    }
