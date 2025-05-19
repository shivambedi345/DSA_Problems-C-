#include<iostream>
using namespace std;

class Hero {
    // properties
public:
    int health;
    char level;

    // Default constructor
    Hero() {
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor (1 param)
    Hero(int health) {
        this->health = health;
        this->level = 'A'; // Default level
    }

    // Parameterized constructor (2 params)
    Hero(int health, char level) {
        this->health = health;
        this->level = level;
    }

    // Copy constructor
    Hero(const Hero &temp) {
        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print() {
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
    }

    // Destructor
    ~Hero() {
        cout << "Destructor called" << endl;
    }

    // Member functions
    void setHealth(int h) {
        health = h;
    }

    void setLevel(char l) {
        level = l;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }
};

int main() {
    Hero s(70, 'C');  // Corrected: second argument should be a char, not string
    cout << "Level of Suresh is: " << s.getLevel() << endl;
    cout << "Health of Suresh is: " << s.getHealth() << endl;

    Hero R(s); // Copy constructor
    cout << "Level of Ramesh is: " << R.getLevel() << endl;
    cout << "Health of Ramesh is: " << R.getHealth() << endl;

    return 0;
}
