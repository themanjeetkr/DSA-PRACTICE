#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>&nums,int k){
    vector<int>temp(4);
    for (int i = 0; i <nums.size(); i++)
    {
        temp[(i+k)%nums.size()]=nums[i];
        
    }
    nums=temp;
    
    
}




int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    rotate(v,2);
     for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    return 0;

}