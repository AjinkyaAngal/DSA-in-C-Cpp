//Pseudo Code

// MergeSort(A, left, right)
// IF left < right
//     mid = (left + right) / 2
//     MergeSort(A, left, mid)
//     MergeSort(A, mid+1, right)
//     Merge(A, left, mid, right)
// ENDIF

// Merge(A, left, mid, right)
// Create arrays L and R

// Copy left half to L
// Copy right half to R

// i = 0, j = 0, k = left

// WHILE i < size(L) AND j < size(R)
//     IF L[i] <= R[j]
//         A[k] = L[i]
//         i++
//     ELSE
//         A[k] = R[j]
//         j++
//     ENDIF
//     k++
// ENDWHILE

// Copy remaining elements of L
// Copy remaining elements of R

//Real code

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for(int i = 0; i < n1; i++)
        L[i] = arr[l + i];

    for(int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    while(i < n1 && j < n2) {
        if(L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while(i < n1)
        arr[k++] = L[i++];

    while(j < n2)
        arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int r) {
    if(l < r) {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
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

    mergeSort(arr, 0, SIZE-1);

    printf("\n\nAfter Merge Sort :\n");
    for(int i = 0; i < 50; i++)
        printf("%d ", arr[i]);

    return 0;
}

