#include <iostream>
#include <string>
using namespace std;

class Human{
    protected:
    string name;
    int age;
    public:
    void display(){
        cout<<"My Name is "<<name<<" Age is "<<age<<endl;
    }
};
class youtuber : public virtual Human{
    public:
    int subsciber;
};
class engineer : public virtual Human{
    public:
    int salary;
};
class teacher: public youtuber,public engineer{
    public:
    string subject;

    teacher (string name,int age,int subsciber,int salary,string subject){
        this->name=name;
        this->age=age;
        this->subsciber=subsciber;
        this->salary=salary;
        this->subject=subject;
    }
    void show(){
        cout<<name<<" "<<age<<" "<<subsciber<<" "<<salary<<" "<<subject<<endl;
    }
};
int main(){
   teacher T("Sunny Deol",56,45000,2510,"CSE");
   T.display();
   T.show();
}