//Pseudo Code

// BubbleSort(A, n)
// FOR i = 0 TO n-2
//     FOR j = 0 TO n-2-i
//         IF A[j] > A[j+1]
//             SWAP A[j] and A[j+1]
//         ENDIF
//     ENDFOR
// ENDFOR

//Real Code

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++)
        for(int j = 0; j < n-1-i; j++)
            if(arr[j] > arr[j+1]) {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
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

    bubbleSort(arr, SIZE);

    printf("\n\nAfter Bubble Sort:\n");
    for(int i = 0; i < 50; i++)
        printf("%d ", arr[i]);

    return 0;
}

