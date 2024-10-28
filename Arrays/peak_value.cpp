#include <iostream>
using namespace std;

int peak_value(int arr[], int n) {
    int s = 0;
    int e = n - 1; // Initialize 'e' to the last index
    int mid = s + (e - s) / 2; // Calculate mid index

    while (s < e) {
        

        if (arr[mid] < arr[mid + 1]) {
            s = mid + 1; // Move to the right half
        } else {
            e = mid; // Move to the left half   
        }
        int mid = s + (e - s) / 2; // Calculate mid index
    }

    return arr[s]; // Return the peak value

}

int main() {
    int arr[5] = {4, 5, 6, 1, 2};
    int peakvalue = peak_value(arr, 5);
    
    cout << "Peak value: " << peakvalue << endl; // Print the peak value
    return 0;
}
