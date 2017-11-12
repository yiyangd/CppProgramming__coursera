#include <iostream>
#include <string>
using namespace std;

class CBase
{
public:
    virtual void SomeVirtualFunction(){cout<<"virtual func from base";}
};

class CDerived:public CBase
{
public:
    virtual void SomeVirtualFunction(){cout<<"virtual func from derive";}
};


int main(int argc, const char * argv[]) {
    CDerived ODerived;
    CBase *p = &ODerived;
    p -> SomeVirtualFunction(); // function from the obj(ODerived) which is pointed by CBase pointer p
    return 0;
}

