// hierarchical inheritance
// In this type of inheritance, a single base class is inherited by multiple derived classes.
#include <iostream>
using namespace std;
class A {
    public:
        void display() {
            cout << "Class A" << endl;
        }
};
class B : public A {
    public:
        void display() {
            cout << "Class B" << endl;
        }
};
class C : public A {
    public:
        void display() {
            cout << "Class C" << endl;
        }
};
int main() {
    A a;
    B b;
    C c;

    a.display(); // Calls display() from class A
    b.display(); // Calls display() from class B
    c.display(); // Calls display() from class C

    return 0;
}