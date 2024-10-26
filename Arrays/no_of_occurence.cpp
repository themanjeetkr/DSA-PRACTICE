#include <iostream>
using namespace std;

int firstocc(int arr[], int n, int key)
{

    int start, end, mid;
    start = 0;
    end = n - 1;
    mid = start + (end - start) / 2;
    int ans = 0;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key < mid)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastocc(int arr[], int n, int key)
{

    int start, end, mid;
    start = 0;
    end = n - 1;
    mid = start + (end - start) / 2;
    int ans = 0;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key < mid)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 2, 2, 3, 4};
    int first = firstocc(arr, 5, 2);
    int last = lastocc(arr, 5, 2);
    
    // formula of no of occurence
    int occur = (last - first) + 1;
    cout<<"the no of occurence of 2: "<<occur;
}