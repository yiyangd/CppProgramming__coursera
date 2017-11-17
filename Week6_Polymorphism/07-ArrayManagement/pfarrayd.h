#ifndef PFARRAYD_H
#define PFARRAYD_H
#include <iostream>

class PFArrayD
{
private:
    double* arr;
    int capacity;
    int used;
public:
    PFArrayD();
    PFArrayD(int capacityValue);
    PFArrayD(const PFArrayD& rhs);
    PFArrayD& operator= (const PFArrayD& rhs);
    ~PFArrayD();
    
    bool full() const;
    void addElement (double element);
    
    int getCapacity() const {return capacity;}
    int getNumberUsed() const {return used;}
    
    void emptyArray(){used = 0;}
    
    double& operator[] (int index);
    
};

#endif //PFARRAYD_H
