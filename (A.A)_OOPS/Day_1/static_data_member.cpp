#include<iostream>
using namespace std;


class hero {

private:
    int health;

public:
    char level;


    static int timetocomplete;                       //static data member
    //copy constructor built up
    hero(hero &temp){
        cout<<"copy construction called"<<endl;
        this->health=temp.health;  //copy the health value
        this->level=temp.level;   //copy the level value 
    }

    //constructor
    hero(int health,char level){
        this->health=health;
        cout<<"constructor called"<<endl;
        this->level=level;

    }
    hero(){
        cout<<"simple constructor"<<endl;

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
    void print(){
        cout<<"the health is :"<<this->health<<endl;
        cout<<"the level is :"<<this->level<<endl;
    }
    ~hero(){
        cout<<"destruction bhai called"<<endl;
    }

};
 //value added
int hero ::timetocomplete=5;
int main(){
    cout<<hero::timetocomplete<<endl;


   

 }