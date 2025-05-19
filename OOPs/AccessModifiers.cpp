#include<iostream>
using namespace std;
// empty class
class Human{
    int height;
    int weight;
    public:
        // constructor
        Human(){
            height = 0;
            weight = 0;
        }
        // destructor
        ~Human(){
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
    Human Ram,Shyam;
    Ram.setHeight(5);
    Ram.setWeight(60);
    cout<<"height of ram:"<<Ram.getHeight()<<endl;
    cout<<"weight of ram:"<<Ram.getWeight()<<endl;
    Shyam.setHeight(7);
    Shyam.setWeight(80);
    cout<<"height of ram:"<<Shyam.getHeight()<<endl;
    cout<<"weight of ram:"<<Shyam.getWeight()<<endl;
    // creating object of class
    

}
/* three types of access modifiers
1. public
2. private
3. protected
public: members are accessible from outside the class
private: members are not accessible from outside the class
protected: members are accessible from the derived class
*/
