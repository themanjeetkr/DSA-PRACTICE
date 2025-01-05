#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // Creating a 2D array 
    int **arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }
    // Creation done

    // Taking input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Printing the 2D array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Cleaning up memory
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
