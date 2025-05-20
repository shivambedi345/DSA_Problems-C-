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
class dog: public animal{
    public:
        string color;
        void bark(){
            cout<< "dog is barking"<<endl;
        }
};
int main(){
    dog dog1;
    dog1.bark();
    dog1.speak();
    dog1.age = 5;
    cout<< "age:"<< dog1.age << endl;
    cout<< "sab theek hai"<<endl;
    return 0;
}