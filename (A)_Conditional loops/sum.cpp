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
        sum += i;//sum all the the value from 1 to n
        i++;
    }
    cout << "the value of sum is " << sum;//print the sum 
}