#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    int sum = 0;
    while (i < n)  //looping for sum of n number

    {
        sum += i;
        i++;
    }
    cout << "the value of sum is " << sum;
}