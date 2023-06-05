#include <iostream>

using namespace std;

// Function declarations
int* mergeSortInt(int*, int);
int* merge(int*, int, int*, int);

int main() {
    int nilai[] = {66, 43, 90, 76, 87, 21};
    int size = sizeof(nilai) / sizeof(nilai[0]);

    int* sortedArray = mergeSortInt(nilai, size);

    // Print the sorted array
    cout << "===SESUDAH===" << endl;
    for (int i = 0; i < size; i++) {
        cout << sortedArray[i] << " ";
    }
    cout << endl;

    // Free the dynamically allocated memory
    delete[] sortedArray;

    return 0;
}

// Merge Sort implementation
int* mergeSortInt(int* numbers, int size) {
    if (size <= 1) {
        // Base case: already sorted or empty
        return numbers;
    }

    // Find the middle index
    int mid = size / 2;

    // Divide the array into two halves
    int* left = numbers;
    int leftSize = mid;
    int* right = numbers + mid;
    int rightSize = size - mid;

    // Recursively sort the two halves
    int* sortedLeft = mergeSortInt(left, leftSize);
    int* sortedRight = mergeSortInt(right, rightSize);

    // Merge the sorted halves
    int* merged = merge(sortedLeft, leftSize, sortedRight, rightSize);

    // Free the dynamically allocated memory
    delete[] sortedLeft;
    delete[] sortedRight;

    return merged;
}

// Merge two sorted arrays into one
int* merge(int* left, int leftSize, int* right, int rightSize) {
    int* merged = new int[leftSize + rightSize];
    int i = 0, j = 0, k = 0;

    // Compare elements from both arrays and merge
    while (i < leftSize && j < rightSize) {
        if (left[i] < right[j]) {
            merged[k] = left[i];
            i++;
        } else {
            merged[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements from left (if any)
    while (i < leftSize) {
        merged[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements from right (if any)
    while (j < rightSize) {
        merged[k] = right[j];
        j++;
        k++;
    }

    return merged;
}
