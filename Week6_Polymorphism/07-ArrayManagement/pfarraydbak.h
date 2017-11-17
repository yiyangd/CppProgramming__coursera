# ifndef PFARRAYDBAK_H
# define PFARRAYDBAK_H
# include "pfarrayd.h"
class PFArrayDBak: public PFArrayD
{
private:
    double* arr_B;
    int usedB;
public:
    PFArrayDBak();
    PFArrayDBak(int capacityValue);
    PFArrayDBak(const PFArrayDBak& rhs);
    PFArrayDBak& operator= (const PFArrayDBak& rhs);
    ~PFArrayDBak();
    
    void backup();
    void restore();
    
};

# endif // PFARRAYDBAK_H
