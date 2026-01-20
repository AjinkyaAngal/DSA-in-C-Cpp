//Pseudo Code

// QuickSort(A, low, high)
// IF low < high
//     p = Partition(A, low, high)
//     QuickSort(A, low, p-1)
//     QuickSort(A, p+1, high)
// ENDIF

// Partition(A, low, high) //Partition Function
// pivot = A[high]
// i = low - 1

// FOR j = low TO high-1
//     IF A[j] < pivot
//         i = i + 1
//         SWAP A[i] and A[j]
//     ENDIF
// ENDFOR

// SWAP A[i+1] and A[high]
// RETURN i+1

//Real Code

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            int t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }

    int t = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = t;

    return i+1;
}

void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int p = partition(arr, low, high);
        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
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

    quickSort(arr, 0, SIZE-1);

    printf("\n\nAfter Quick Sort:\n");
    for(int i = 0; i < 50; i++)
        printf("%d ", arr[i]);

    return 0;
}

