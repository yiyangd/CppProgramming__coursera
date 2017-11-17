#include "pfarrayd.h"
#include <iostream>
using namespace std;

PFArrayD::PFArrayD():capacity(50),used(0)
{
    arr = new double [capacity];
}

PFArrayD::PFArrayD(int capacityValue):capacity(capacityValue),used(0)
{
    arr = new double [capacity];
}

PFArrayD::PFArrayD(const PFArrayD& rhs)
        :capacity(rhs.getCapacity()),
            used(rhs.getNumberUsed())
{
    arr = new double [capacity];
    for (int i = 0; i < used; i++)
        arr[i] = rhs.arr[i];
}

PFArrayD& PFArrayD:: operator= (const PFArrayD& rhs)
{
    if (capacity < rhs.getNumberUsed())
    {
        delete [] arr;//                        dont forget []
        arr = new double [rhs.getCapacity()];
    }
    used = rhs.getNumberUsed();
    capacity = rhs.getCapacity();
    for (int i = 0; i < used; i++)
        arr[i] = rhs.arr[i];
    return *this;
}

PFArrayD:: ~PFArrayD()
{
    delete [] arr; // [] is before arr!!
}

bool PFArrayD:: full() const
{
    return (used == capacity);
}

void PFArrayD::addElement(double element)
{
    if (full()!= 1)
    {
        arr[used] = element;
        used++;
    }
    else
        return;
    
}

double& PFArrayD:: operator[] (int index)
{
    if (index < used)
        return arr[index];
    else
    {
        cout<<"error";
        exit(0);
    }
    
}



