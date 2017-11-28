
// class template
#include <iostream>
#include <string>
using namespace std;


template <class T1,class T2>
class Pair // name of class template
{
public:
    T1 key;
    T2 value;
    Pair(T1 k, T2 v): key(k), value(v){};
    bool operator < (const Pair<T1,T2>& p) const;
};

template<class T1, class T2>
bool Pair<T1,T2>:: operator<(const Pair<T1, T2> &p) const  // don't forget <T1,T2> after Pair
{
    return key < p.key;
}



int main(int argc, const char * argv[])
{
    Pair<string,int> student("Tom",19);
    cout << student.key << " " << student.value;
    return 0;

}
