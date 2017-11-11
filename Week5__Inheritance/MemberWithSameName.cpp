#include <iostream>
#include <string>
using namespace std;

class base
{
    int j;
public:
    int i;
    void func(){}
};

class derived: public base
{
public:
    int i; //same name!
    void access();
    void func(){} //same name!
};

void derived::access()
{
    j = 5; //error! private member from base class cannot be accessed by functions from derived class!!!
    
    i = 5; // i from derived class
    base::i = 5; // i from base class
    func(); // from derived class
    base:: func(); //from base class
}


int main(int argc, const char * argv[]) {
    derived obj;
    obj.i = 1;
    obj.base::i = 1;
    system("pause");
    return 0;
}
