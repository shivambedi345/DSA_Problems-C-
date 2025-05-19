#include<iostream> 

//#include"rat.cpp"
using namespace std;
// empty class
class Animal{
    int height;
    int weight;
    public:
        // constructor
        Animal(){
            height = 0;
            weight = 0;
        }
        // destructor
        ~Animal(){
            cout<<"destructor called"<<endl;
        }
        // member function
        void setHeight(int h){
            height = h;
        }
        void setWeight(int w){
            weight = w;
        }
        int getHeight(){
            return height;
        }
        int getWeight(){
            return weight;
        }

};
int main(){
    // creating object of class
    Animal dog;
    // size of object
    cout<<"size:"<<sizeof(dog)<<endl; // 1 byte
    // size of class

    cout<<sizeof(Animal)<<endl; // 1 byte

   // cout<<"size of rat :"<<sizeof(rat)<<endl; // 1 byte

   
    return 0; 

}