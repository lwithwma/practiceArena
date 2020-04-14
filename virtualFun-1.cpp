#include<iostream>
using namespace std;

class Base{
public:
    void display(){cout<<"Base display"<<endl;}
    virtual void show(){cout<<"Base show"<<endl;}
    virtual void help(){cout<<"Base help"<<endl;}
};

class Derived : public Base
{
public:
    void display(){cout<<"Derived display"<<endl;}
    void show(){cout<<"Derived show"<<endl;}
    void shout(){cout<<"Derived shout"<<endl;}
};

int main(){
    Base *bptr;
    Derived D;
    bptr=&D;

    bptr->display();
    bptr->show();
    bptr->help();
    //bptr->shout();

    return 0;
}
