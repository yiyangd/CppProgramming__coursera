
#include <iostream>
#include <string>
using namespace std;

class CStudent
{
private:
    string name;
    string id;
    char gender;
    int age;
public:
    void PrintInfo();
    void SetInfo(const string& name_, const string& id_,
                 int age_, char gender_);
    string Getname(){return name;}
};

class CUndergraduateStudent:public CStudent
{
private:
    string department;
public:
    void QualifiedSchlarship(){
        cout<<"qualified for schlarship"<<endl;
    }
    
    void PrintInfo(){
        CStudent::PrintInfo();   // calling function from base class
        cout<<"Department:"<<department<<endl;
    }
    
    void SetInfo(const string& name_,const string& id_,
                 int age_, char gender_,const string& department_){
        CStudent::SetInfo(name_,id_,age_,gender_);
        department = department_; //private member variable
    }
};
void CStudent::PrintInfo()
{
    cout<<"Name:"<<name<<endl;
    cout<<"ID:"<<id<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Gender:"<<gender<<endl;
}

void CStudent::SetInfo(const string& name_, const string& id_,
                       int age_, char gender_)
{
    name = name_;
    id = id_;
    age = age_;
    gender = gender_;
}

int main(int argc, const char * argv[]) {
    CUndergraduateStudent s2;
    s2.SetInfo("YiyangDong","001",19,'M',"Computer Science");
    cout<<s2.Getname()<<" "; //calling function from base class;
    s2.QualifiedSchlarship();
    s2.PrintInfo();
    system("pause");
    return 0;
}
