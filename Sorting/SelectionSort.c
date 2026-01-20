//Pseudo Code

// SelectionSort(A, n)
// FOR i = 0 TO n-2
//     min = i
//     FOR j = i+1 TO n-1
//         IF A[j] < A[min]
//             min = j
//         ENDIF
//     ENDFOR
//     SWAP A[i] and A[min]
// ENDFOR

//Real Code

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int min = i;
        for(int j = i+1; j < n; j++)
            if(arr[j] < arr[min])
                min = j;

        int t = arr[i];
        arr[i] = arr[min];
        arr[min] = t;
    }
}

int main() {
    int arr[SIZE];
    srand(time(0));

    for(int i = 0; i < SIZE; i++)
        arr[i] = rand() % 1000;

    printf("Before Sorting :\n");
    for(int i = 0; i < 50; i++)
        printf("%d ", arr[i]);

    selectionSort(arr, SIZE);

    printf("\n\nAfter Selection Sort :\n");
    for(int i = 0; i < 50; i++)
        printf("%d ", arr[i]);

    return 0;
}

