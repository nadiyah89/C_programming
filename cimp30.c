#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array in reverse order are: ");
    for (int j = n - 1; j >= 0; j--) {
        printf("%d ", arr[j]);
    }

    return 0;
}