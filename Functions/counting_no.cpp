#include<iostream>
using namespace std;

void counting_no(int num) {
    // Declare 'i' before using it in the loop
    for (int i = 0; i <= num; i++) {
        cout << i << endl;
    }
}

int main() {
    int n;
    cin >> n;
    // Function call
    counting_no(n);
}
