
// class template
#include <iostream>
#include <string>
using namespace std;

/*
 Pair <string, int> *p;
 Pair <string, double> a;
 p = &a ;   // wrong!! incompatible!!
 */

template <class T>
class A{
public:
    template<class T2> //!! function template must be different from class template!!!
    void Func(T2 t) {cout << t; }
};

// type parameter list can include non-type parameter
template <class T, int size>
class CArray{
    T array[size];
public:
    void Print()
    {
        for (int i = 0; i < size; ++i)
            cout << array[i] << endl;
    }
};

int main(int argc, const char * argv[])
{
    A<int> a;
    a.Func('K');
    
    CArray<double, 40> a2; // double array with size 40; default construtor
    CArray<int, 50> a3;    // int array with size 50; default constructor
    // these two above are totally different class!!
    
    return 0;
}
