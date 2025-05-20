#include<iostream>
using namespace std;
// + used to add two objects
class Complex{
    private:
        int real;
        int imag;
    public:
        Complex(int r = 0, int i = 0){
            real = r;
            imag = i;
        }
        // operator overloading
        Complex operator + (const Complex &obj){
            Complex temp;
            temp.real = real + obj.real;
            temp.imag = imag + obj.imag;
            return temp;
        }
        void display(){
            cout<< "real:"<< real << " imag:"<< imag << endl;
        }
};
int main(){
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // Calls the overloaded + operator
    c3.display(); // Displays the result
    cout<< "sab theek hai"<<endl;
    return 0;
}