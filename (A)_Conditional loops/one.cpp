#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long maxEvenLengthOR(vector<long long>& arr) {
    long long max_or = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            max_or = max(max_or, arr[i] | arr[j]);
        }
    }

    return max_or;
}

int main() {
    int n;
    cin >> n;
    vector<long long>arr(n);

    for (int i = 0; i < n; i++) {
  cin >> arr[i];
    }

cout << maxEvenLengthOR(arr) << endl; //print the maxlength

    return 0;
}
