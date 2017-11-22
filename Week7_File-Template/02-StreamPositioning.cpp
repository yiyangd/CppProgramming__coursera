// http://www.cplusplus.com/doc/tutorial/files/
/*
tellg() and tellp()
==> These two member functions with no parameters returns a value of the member type [streampos], 
    which is a type representing the current get position from ifstream(in the case of tellg) 
    or the put position form ofstream(in the case of tellp)
    
seekg() and seekp()
==> These functions allow to change the location of the get&put positions.
    Both functions are overloaded with two different prototypes.
    ==> seekg(position),seekp(position): the STREAM POINTER is changed to the absolute [position],
                                         (counting from the beginning of the file),
                                         The type for this parameter is streampos, which is the same type
                                         as returned by functions tellg() and tellp() ==> position.
    ==> seekg/seekp(offset, direction):  offset is of type streamoff, and direction is of type seekdir
                                         ios::beg, ios::cur, ios::end
*/


#include <iostream>
#include <fstream>
using namespace std;

// read the file ~
int main()
{
  streampos begin, end; // end - begin = 40 bytes !!!
  
  ifstream myfile ("example.bin", ios::binary); 
  begin = myfile.tellg(); // get the position of ifstream pointer
  myfile.seekg (0, ios::end); // pointer is changed to the last position
  end = myfile.tellg(); // get the position after seekg() is called
  myfile.close();
  cout << "size is: " << (end - begin) << " bytes. \n";
  return 0;
}
