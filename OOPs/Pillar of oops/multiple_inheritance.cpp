#include<iostream>
using namespace std;

class animal{
    public:
        int age;
        int weight;
        void speak(){
            cout<< "animal is speaking"<<endl;
        }
};

class human{
    public:
    string color;
    void speak(){
        cout<< "human is speaking"<<endl;
    }
};

class hybrid: public animal, public human{
    public:
        string breed;
        void run(){
            cout<< "dog is running"<<endl;
        }
};

int main(){
   hybrid obj1;
   obj1.speak(); // Calls the speak method from the animal class
    obj1.human::speak(); // Calls the speak method from the human class
}