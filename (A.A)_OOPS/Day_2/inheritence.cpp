#include<iostream>
using namespace std;
class human{
    public:
    int height;
    int weight;
    int age;
    public:
    int getage(){
        return this->age;

    }
    void setweight(int weight){
        this->weight=weight;
        cout<<weight<<endl;

    }
};
class  male : public human{
    public:
    string color;
    void sleep(){
        cout<<"male sleeping"<<endl;
    }
};

int main(){

    male m1;
    cout<<m1.height<<endl;
    // male object;
    // cout<<object.age<<endl;
    // cout<<object.weight<<endl;
    // cout<<object.color<<endl;
    // // cout<<object.<<endl;
    // object.setweight(65);
    // object.sleep();


}