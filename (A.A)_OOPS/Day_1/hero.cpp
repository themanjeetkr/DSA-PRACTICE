#include<iostream>
using namespace std;
class hero{
    public:
    int health;
    char level;
};

int main(){
    hero ramesh;

    //value of data member
    ramesh.health=70;
    ramesh.level='A';
    cout<<"health is:"<<ramesh.health<<endl;
    cout<<"level is :"<<ramesh.level<<endl;

}