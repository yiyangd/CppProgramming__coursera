/*
 cin>>n; which means how many shapes you will input
 Shape: Rectangle,Circle,Triangle
 print area: from small to large
 */
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

class CShape
{
public:
    virtual double Area() = 0; // Pure Virtual Function.. no function body!
    virtual void PrintInfo() = 0; // Because CShape includes rectangle,circle with THEIR area
    // there is no ===> CShape a; a.Area()....
    // they just mean that Area and PrintInfo are common operation for different shapes!
};

class CRectangle: public CShape
{
public:
    int w,h;
    virtual double Area();
    virtual void PrintInfo();
};

class CCircle:public CShape
{
public:
    int r;
    virtual double Area();
    virtual void PrintInfo();
};

class CTriangle: public CShape
{
public:
    int a,b,c;
    virtual double Area();
    virtual void PrintInfo();
};

double CRectangle::Area()
{
    return w*h;
}

void CRectangle::PrintInfo()
{
    cout<<"Rectangle:"<<Area()<<endl;
}

double CCircle::Area()
{
    return 3.14*r*r;
}

void CCircle::PrintInfo()
{
    cout<<"Circle"<<Area()<<endl;
}

double CTriangle::Area()
{
    double p = (a+b+c)/2.0;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

void CTriangle::PrintInfo()
{
    cout<<"Triangle:"<<Area()<<endl;
}

CShape *pShapes[100]; // Base pointers array ---> base or derived object
int MyCompare(const void *s1,const void *s2);

/*
 COMMON USE:
 Let base pointer array manage various pointers to derived objects
 iterate the array and do some works
 */

int main(int argc, const char * argv[])
{
    int i; int n;
    CRectangle *pr; CCircle *pc; CTriangle *pt;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        switch(c)
        {
            case 'R':
                pr = new CRectangle();
                cin >> pr->w >> pr->h;
                pShapes[i] = pr;          // assign derived pointer to base pointer!
                break;
            case 'C':
                pc = new CCircle();
                cin >> pc->r;
                pShapes[i] = pc;
                break;
            case 'T':
                pt = new CTriangle();
                cin >> pt->a >> pt->b >> pt->c;
                pShapes[i] = pt;
                break;
        }
    }
    qsort(pShapes, n, sizeof(CShape*), MyCompare); // array-sorting from the smallest area to the
                                                   // biggest one
    for(i = 0; i < n; i++)
        pShapes[i] -> PrintInfo();  // polymorphism
    return 0;
}

int MyCompare(const void *s1, const void *s2)
{
    double a1,a2;
    CShape ** p1;  // Because pShapes is an array of pointers,
    CShape ** p2;  // Cshape* is the element type, Cshape* *p is declare a pointer to pointer
    p1 = (CShape **) s1; // s1 is a void pointer, which must be converted to certain type
    p2 = (CShape **) s2;
    a1 = (*p1) -> Area(); // type for *p1 is Cshape*, base pointer ===> polymorphism
    a2 = (*p2) -> Area();
    if (a1<a2)
        return -1;
    else if (a2<a1)
        return 1;
    else
        return 0;
}
