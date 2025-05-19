#include<iostream>
using namespace std;
class Hero{
    // properties
    private:
        int health;
        
    public:
    
        int level;  

        // constructor
        Hero(){
            cout<<"constructor called"<<endl;
        }

        // parameterized constructor
        Hero(int health){
            cout << "this ->" << this << endl;
            this->health = health;
            
        }
        Hero (int health, int level){
            this->health = health;
            this->level = level;
        }
        // destructor
        ~Hero(){
            cout<<"destructor called"<<endl;
        }
        // member function
        void setHealth(int h){
            health = h;
        }
        void setLevel(char l){
            level = l;
        }
        int getHealth(){
            return health;
        }
        char getLevel(){
            return level;
        }
};
int main(){
    /*
    // ststic allocation
    Hero a;
    a.setHealth(70);
    a.setLevel('A');
    cout<< "level of a is:"<<a.level<<endl;
    cout<< "health of a is:"<<a.getHealth()<<endl;
    cout<<endl;
    // dynamic allocation
    Hero *b = new Hero;
    b->setHealth(90);
    b->setLevel('B');
    cout<< "level of a is:"<<(*b).level<<endl;
    cout<< "health of a is:"<<(*b).getHealth()<<endl;

    cout<<endl;
    b->setHealth(80);
    b->setLevel('c');
    cout<< "level of a is:"<<b->level<<endl;
    cout<< "health of a is:"<<b->getHealth()<<endl;
    */





    // Hero ramesh(10);
    // dynamically
    // Hero *ram = new Hero();
    // cout<< " adresss of ramesh is:"<<&ramesh<<endl;
    // Hero* ram1 = new Hero();
    // cout<< " adresss of ram is:"<<ram<<endl;
    // ram1->print();

    Hero kajal(22,"b");
    cout<< " adresss of kajal is:"<<&kajal<<endl;
    kajal.print();
    // delete the object
    

}