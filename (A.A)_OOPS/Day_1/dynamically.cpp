#include<iostream>
using namespace std;


class hero {

private:
    int health;

public:
    char level;

    int gethealth() {
        return health;
    }

    char getlevel() {  // Fix: Changed return type to char
        return level;
    }

    void sethealth(int h) {
        health = h;
    }

    void setlevel(char ch) {
        level = ch;
    }
};

int main() {
    //static allocation
    hero a;
    a.sethealth(80);
    a.setlevel('b');
    cout<<"level is "<<a.level<<endl;
    cout<<"health is "<<a.gethealth()<<endl;
    
    //dynamically
    hero *b=new hero;
    b->setlevel('a');
    b->sethealth(70);
    cout<<"level is "<<(*b).level<<endl;
    cout<<"health is "<<(*b).gethealth()<<endl;
}