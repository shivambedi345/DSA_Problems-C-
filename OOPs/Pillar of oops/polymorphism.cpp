#include<iostream>
using namespace std;
// exixting in multiple forms
// two types 1> compile time polymorphism 2> run time polymorphism
// compile -> 1>function overloading 2> operator overloading
class A{
    public:
        void display(){
            cout<< "display function of class A"<<endl;
        }
        void display(string name){
            cout<< "display function of class A with name"<< name <<endl;
        }
    
};
int main(){
    A obj;
    obj.display(); // Calls the display function of class A
    // obj.display(); // Calls the display function of class A
    cout<< "sab theek hai"<<endl;
    return 0;
}