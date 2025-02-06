#include <iostream>
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
    hero ramesh;

    // Getting value of data member before setting it (will show garbage value)
    cout << "Ramesh's initial health is: " << ramesh.gethealth() << endl;

    // Setting health properly
    ramesh.sethealth(70);
    cout << "Ramesh's health is: " << ramesh.gethealth() << endl;

    // Setting level properly
    ramesh.setlevel('A');
    cout << "Ramesh's level is: " << ramesh.getlevel() << endl;

    return 0;
}
