#include <iostream>
#include <string>
using namespace std;

class Father
{
private:
    int nPrivate;
public:
    int nPublic;
protected:
    int nProtected;
};

class Son: public Father
{
public:
    void AccessFather()
    {
        nPublic = 1; //ok
        //nPrivate = 1; // Wrong!!
        nProtected = 1; //ok, access protected member in base class by function from derived class
    }
};


int main(int argc, const char * argv[]) {
    Father f;
    Son s;
    f.nPublic = 1;
    s.nPublic = 1;
    s.AccessFather(); //!! fuctions from derived class could access protected member in base class
    
    system("pause");
    return 0;
}
