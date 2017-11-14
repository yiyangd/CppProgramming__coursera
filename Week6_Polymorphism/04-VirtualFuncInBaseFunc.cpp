
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

class Base
{
public:
    void fun1(){ fun2();} // =====> this -> fun2(), this-> is base pointer, ==> *pBase
                          // fun2 is virtual function
                          // polymorphism~
    // Polymorphism works when we call the virtual function in NON-con/destructor member function
    virtual void fun2() {cout<<"Base::fun2()"<<endl;}
};

class Derived : public Base
{
public:
    virtual void fun2(){cout<<"Derived::fun2()"<<endl;}
};

int main(int argc, const char * argv[])
{
    Derived d;
    Base *pBase = &d; // points to derived class!
    pBase -> fun1();  // fun1 is public member function from base class
    // output is "Derived::fun2()"
    return 0;
}


