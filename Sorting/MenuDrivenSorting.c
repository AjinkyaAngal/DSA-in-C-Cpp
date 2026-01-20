#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 500

void generateArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        arr[i] = rand() % 1000;
}

void copyArray(int src[], int dest[], int n) {
    for(int i = 0; i < n; i++)
        dest[i] = src[i];
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++)
        for(int j = 0; j < n-1-i; j++)
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int min = i;
        for(int j = i+1; j < n; j++)
            if(arr[j] < arr[min])
                min = j;
        swap(&arr[i], &arr[min]);
    }
}

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i], j = i-1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int p = partition(arr, low, high);
        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
    }
}

void merge(int arr[], int l, int m, int r) {
    int n1 = m-l+1, n2 = r-m;
    int L[n1], R[n2];

    for(int i = 0; i < n1; i++) L[i] = arr[l+i];
    for(int j = 0; j < n2; j++) R[j] = arr[m+1+j];

    int i=0, j=0, k=l;

    while(i<n1 && j<n2)
        arr[k++] = (L[i]<=R[j]) ? L[i++] : R[j++];

    while(i<n1) arr[k++] = L[i++];
    while(j<n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int r) {
    if(l < r) {
        int m = (l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

void menu() {
    printf("=================================\n");
    printf("   SORTING ALGORITHMS MENU\n");
    printf("=================================\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("4. Quick Sort\n");
    printf("5. Merge Sort\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int original[SIZE], arr[SIZE];
    int choice;

    srand(time(0));
    generateArray(original, SIZE);

    do {
        menu();
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 5) {
            copyArray(original, arr, SIZE);

            printf("\nOriginal Array:\n");
            printArray(arr, 500);

            switch(choice) {
                case 1: bubbleSort(arr, SIZE); break;
                case 2: selectionSort(arr, SIZE); break;
                case 3: insertionSort(arr, SIZE); break;
                case 4: quickSort(arr, 0, SIZE-1); break;
                case 5: mergeSort(arr, 0, SIZE-1); break;
            }

            printf("Sorted Array:\n");
            printArray(arr,500);
        }

        else if(choice != 6)
            printf("Invalid choice! Try again.\n");

    } while(choice != 6);

    printf("Program terminated.\n");
    return 0;
}
