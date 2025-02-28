#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="themanjeetkr";
    stack<char>s;
    for (int  i = 0; i < str.length(); i++)
    {
    char ch=str[i];
    s.push(ch);
    }
    // empty string
    string ans=" "; 
    while (!s.empty())
    {
        /* code */
        char ch=s.top();
        ans.push_back(ch);
        //  remove top element
        s.pop();
    }
    cout<<"the answer is "<<ans<<endl;
    
    
}
