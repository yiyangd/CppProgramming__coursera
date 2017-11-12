#include <iostream>
#include <string>
using namespace std;

class base
{
    
};

class derived : public base  // inheritance is must be public!! no private! no protected!
{
    
};

int main(int argc, const char * argv[]) {
    base b;
    derived d;
    b = d; // assign derived obj to base obj
    base& br = d; //derived obj could be used to initialise base&
    base *pb = &d;
    return 0;
}
