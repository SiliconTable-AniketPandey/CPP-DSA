#include<iostream>
using namespace std;

class Vechiel{
    public:
        void display1(){
            cout<<"This is a vechiel"<<endl;
        }
};

class Car : public Vechiel{
    public:
        void display2(){
            cout<<"This is a car"<<endl;
        }
};

int main(){
    Car c;
    c.display1();
    c.display2();
}