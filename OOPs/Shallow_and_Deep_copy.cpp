#include <iostream>
#include <cstring>  // For strcpy
using namespace std;

class Hero {
public:
    int health;
    char level;
    char *name;

    // Default constructor
    Hero() {
        cout << "Default constructor called" << endl;
        name = new char[100];  // Allocate memory
    }

    // Parameterized constructor
    Hero(int health, char level) {
        this->health = health;
        this->level = level;
        name = new char[100];  // Always allocate memory
    }

    // Copy constructor with deep copy
    Hero(const Hero &temp) {
        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
        this->name = new char[strlen(temp.name) + 1];  // allocate only needed memory
        strcpy(this->name, temp.name);
    }

    void print() {
        cout << "Name: " << name << endl;
        cout << "Health: " << health << endl;
        cout << "Level: " << level << endl;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char l) {
        level = l;
    }

    void setName(const char *name) {
        strcpy(this->name, name);
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    // Destructor to deallocate memory
    ~Hero() {
        cout << "Destructor called" << endl;
        delete[] name;
    }
};

int main() {
    Hero hero1;
    hero1.setHealth(70);
    hero1.setLevel('A');
    hero1.setName("Shivam");

    cout << "Hero 1: " << endl;
    hero1.print();

    // Let's test the copy constructor
    Hero hero2(hero1);
    cout << "\nHero 2 (Copy of Hero 1): " << endl;
    hero2.print();

    return 0;
}
  
