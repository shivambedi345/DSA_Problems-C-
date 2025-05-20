#include<iostream>
using namespace std;
class Human{
    public:
        int height;
        int weight;
        int age;
    public:
         int getage(){
            return this->age;
        }
        void setweight(int w){
            this-> weight = w;
        }
};
class male: public Human{
    public:
        string color;
        void sleep(){
            cout<< " human is sleeping"<<endl;
        }
};
int main(){
    male object1;
    object1.setweight(75);
    object1.age = 45;
    cout <<"age:"<< object1.age << endl;
    cout <<"weight:"<< object1.weight << endl;;
    object1.sleep();
    cout<<endl;
    cout<< "sab theek hai"<<endl;
    return 0;
}