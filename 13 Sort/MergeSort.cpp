#include<iostream>
using namespace std;

// Function to merge two halves of arr[]
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    int* leftHalf = new int[n1];
    int* rightHalf = new int[n2];

    // Copy data to temporary arrays leftHalf[] and rightHalf[]
    for (int i = 0; i < n1; ++i)
        leftHalf[i] = arr[left + i];
    for (int j = 0; j < n2; ++j)
        rightHalf[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftHalf[i] <= rightHalf[j]) {
            arr[k] = leftHalf[i];
            ++i;
        } else {
            arr[k] = rightHalf[j];
            ++j;
        }
        ++k;
    }

    // Copy the remaining elements of leftHalf[], if there are any
    while (i < n1) {
        arr[k] = leftHalf[i];
        ++i;
        ++k;
    }

    // Copy the remaining elements of rightHalf[], if there are any
    while (j < n2) {
        arr[k] = rightHalf[j];
        ++j;
        ++k;
    }

    // Deallocate memory for temporary arrays
    delete[] leftHalf;
    delete[] rightHalf;
}

// Main function to perform merge sort on the array
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Same as (left+right)/2, but avoids overflow for large left and right
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}


int main() {
    int myArray[] = {5, 9, 10, 7, 6};
    int arrSize = sizeof(myArray) / sizeof(myArray[0]);

    mergeSort(myArray, 0, arrSize - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < arrSize; ++i) {
        cout << myArray[i] << " ";
    }

    return 0;
}

/*
Sorted array: 5 6 7 9 10 
*/