#include<iostream>
using namespace std;


class hero {

private:
    int health;

public:
    char level;

    //constructor
    hero(){
        cout<<"constructor called"<<endl;
    }

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
    //statically
    hero ramesh;
    //dynamically
    hero *h=new hero;

}