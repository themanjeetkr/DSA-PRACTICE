#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    bool isprime = 1;
    for (int i = 2; i < n; i++)

    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
        
        
    }
    if (isprime==0)
        {
            cout<<"is not a prime number"<<endl;

        }
        else{
            cout<<"is a prime number";
        }
}