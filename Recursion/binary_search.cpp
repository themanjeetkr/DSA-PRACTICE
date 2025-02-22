#include<iostream>
using namespace std;

bool binarysearch(int *arr, int s, int e, int k) {
    if (s > e)
        return false;
    
    int mid = s + (e - s) / 2;     //mid value of index
    
    if (arr[mid] == k)
        return true;
    
    if (arr[mid] < k) {
       bool right = binarysearch(arr, mid + 1, e, k);
        return right;
    } else {
        // left binary search 
        bool left = binarysearch(arr, s, mid - 1, k);          //return binarysearch(arr, s, mid - 1, k);
        return left; 
    }
}

int main() {
    int arr[] = {2, 3, 4, 5, 5};
    int size = 5;
    int key = 2;
    //binary search
    if (binarysearch(arr, 0, size - 1, key))
        cout << "Key found" << endl;
    else
        cout << "Key not found" << endl;
        

    return 0;
}
