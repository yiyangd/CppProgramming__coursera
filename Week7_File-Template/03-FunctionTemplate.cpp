

#include <iostream>
using namespace std;

template<class T>
void Swap(T& x, T& y)
{
    T tmp = x;  // T may be int or double
    x = y;
    y = tmp;
}

template<class T>
T MaxElement(T arr[], int size)
{
    T max = arr[0];
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// function template could be overload
// as long as they have different parameter list

template<class T>
void print(T arg1, T arg2)
{
    cout << arg1 << " <= same type =>" << arg2 << endl;
}

template<class T1, class T2>
void print( T1 arg1, T2 arg2)
{
    cout << arg1 << "<= different type => " << arg2 << endl;
}



int main(int argc, const char * argv[]) {
    int n = 1, m = 2;
    Swap(n,m);  // int&
    double f = 1.2, g = 2.3;
    Swap(f,g);  // double&
    print(n,m);
    print(f,g);
    print(n,g);
    return 0;
}
