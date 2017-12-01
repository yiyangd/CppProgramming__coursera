#include <vector>
#include <iostream>
using namespace std;

int main()
{
  vertor<int>v;
  v.push_back(1);v.push_back(2);v.push_back(3);v.push_back(4);
  vector<int>::const_iterator i;
  for(i = v.begin(), i != v.end(); ++i)
    cout << *i << ",";
  cout << endl;
}
