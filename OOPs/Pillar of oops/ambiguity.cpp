#include<iostream>
using namespace std;
class A {
    public:
    void function() {
        cout << "Function A called" << endl;
    }
};
class B {
    public:
    void function() {
        cout << "Function B called" << endl;
    }
};
class C : public A, public B {
    public:
    void function() {
        cout << "Function C called" << endl;
    }
};
int main() {
    C obj;
    obj.A::function(); // Calls function from class A
    obj.B::function(); // Calls function from class B
    // Ambiguity example
    // obj.function(); // This will cause ambiguity if both A and B have a function with the same name

    return 0;
}