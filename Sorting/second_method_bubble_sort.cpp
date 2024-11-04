#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) { // Start from the second element
        int key = arr[i]; // Element to be inserted
        int j = i - 1;

        // Move elements that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Place the key in its correct position
    }

    // Print the sorted array
    for (int a = 0; a < n; a++) {
        cout << arr[a] << " "; // Print each element with a space
    }
    cout << endl; // Newline for better output
}

int main() {
    int arr[4] = {2, 1, 4, 3};
    insertion_sort(arr, 4);
    return 0; // Return statement for main
}
