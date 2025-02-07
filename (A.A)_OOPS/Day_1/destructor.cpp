#include<iostream>
using namespace std;


class hero {

private:
    int health;

public:
    char level;
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
int main(){
//     hero suresh(10,'a');
// //     suresh.sethealth(10);
// //     suresh.setlevel('a');
//    cout<<"the suresh's health :"<<suresh.gethealth()<<endl;
//    cout<<"the level of suresh :"<<suresh.getlevel();
//    hero s(20,'c');
//    s.print(); 
//    hero r(s);
//    r.print();

//    s=r;
//    s.print();
//    r.print();
//statically
hero a;

//dynamically
hero *b=new hero();
delete b;

   

 }