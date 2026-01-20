//Pseudo Code

// InsertionSort(A, n)
// FOR i = 1 TO n-1
//     key = A[i]
//     j = i - 1
//     WHILE j >= 0 AND A[j] > key
//         A[j+1] = A[j]
//         j = j - 1
//     ENDWHILE
//     A[j+1] = key
// ENDFOR

//Real Code

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    int arr[SIZE];
    srand(time(0));

    for(int i = 0; i < SIZE; i++)
        arr[i] = rand() % 1000;

    printf("Before Sorting:\n");
    for(int i = 0; i < 50; i++)
        printf("%d ", arr[i]);

    insertionSort(arr, SIZE);

    printf("\n\nAfter Insertion Sort:\n");
    for(int i = 0; i < 50; i++)
        printf("%d ", arr[i]);

    return 0;
}
