#include <iostream>
#include <string>
using namespace std;

class Bug
{
private:
    int nLegs;
    int nColor;
public:
    int nType;
    Bug(int legs,int color);
    ~Bug(){cout<<"Base destructed"<<endl;};
};

class FlyBug:public Bug{
    int nWings;
public:
    FlyBug(int legs, int color, int wings);
    ~FlyBug(){cout<<"derived destructed"<<endl;};
    
};


Bug::Bug(int legs, int color)   // constructor for base class
{
    nLegs = legs;
    nColor = color;
    cout << "Base Constructed"<<endl;
}

FlyBug::FlyBug(int legs, int color, int wings):Bug(legs,color)  // constructor for derived class
{
    nWings = wings;
    cout << "Derived Constructed"<<endl;
}
// Need to call the constructor for base class first to initialize the member in base class
// Constructor is always called first before calling constructor for derived class


int main(int argc, const char * argv[]) {
    FlyBug a(2,3,4); //base constructor ==> derived contructor ==> derived destructor ==> base destructor
    return 0;
}
