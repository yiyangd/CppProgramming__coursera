#include "pfarraydbak.h"
#include <iostream>

PFArrayDBak::PFArrayDBak():PFArrayD(),usedB(0)
{
    arr_B = new double[getCapacity()]; // super important!!
}

PFArrayDBak::PFArrayDBak(int capacityValue):PFArrayD(capacityValue),usedB(0)
{
    arr_B = new double[getCapacity()];
}

PFArrayDBak::PFArrayDBak(const PFArrayDBak& rhs)
            :PFArrayD(rhs)  // base copy constructor can take it'sderived class
{
    usedB = rhs.usedB;   // we can access private member by public function
    arr_B = new double [getCapacity()];
    for (int i = 0; i < usedB; i++)
        arr_B[i] = rhs.arr_B[i];
}

PFArrayDBak& PFArrayDBak:: operator=(const PFArrayDBak &rhs)
{
    PFArrayD::operator=(rhs);
    
    if ( getCapacity() < rhs.usedB)
    {
        delete [] arr_B;
        arr_B = new double [rhs.getCapacity()];
    }
    
    usedB = rhs.usedB;
    for(int i = 0; i < usedB; i++)
        arr_B[i] = rhs.arr_B[i];
    return *this;
}

PFArrayDBak:: ~PFArrayDBak()
{
    delete [] arr_B;
}

void PFArrayDBak::backup()
{
    //backup usedB
    usedB = getNumberUsed();
    //backeup arr_B
    for(int i = 0; i < usedB; i++)
        arr_B[i] = operator[](i);
}

void PFArrayDBak::restore()
{
    emptyArray();
    // give back arr_B elements to arr
    for(int i = 0; i<usedB; i++)
    {
        addElement(arr_B[i]);
    }
    
}

