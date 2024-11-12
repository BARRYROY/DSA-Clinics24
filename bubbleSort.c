#include <stdio.h>

#ifdef swap
#undef swap
#endif

#define min(a, b) ((a) < (b) ? (a) : (b)) 

void swap(int* a, int* b);  
void bubbleSort(int A[], int n, void (*swapFunc)(int*, int*)); 

int main() {
    int a = 5;
    int b = 6;
    swap(&a, &b);
    printf("a: %d\nb: %d\n", a, b);

    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n, swap);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int A[], int n, void (*swapFunc)(int*, int*)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                swapFunc(&A[j], &A[j + 1]); 
            }
        }
    }

    // Example use of min to demonstrate its functionality
    int smallest = A[0];
    for (int i = 1; i < n; i++) {
        smallest = min(smallest, A[i]);
    }
    printf("Smallest element in array: %d\n", smallest);
}
