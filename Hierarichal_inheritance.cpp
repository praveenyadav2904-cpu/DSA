#include <iostream>
#include <string>
using namespace std;

class Human{
    public:
    string name;
    int age;
};
class teacher :public Human{
    int salary;
    public:
    teacher(string name,int age,int salary){
        this->name=name;
        this->age=age;
        this->salary=salary;
    }
    void displaytecaher(){
        cout<<name<<" "<<age<<" "<<salary<<endl;
    }

};
class staff :public Human{
    int id;
    public:

    staff(string name, int age,int id){
        this->name=name;
        this->age=age;
        this->id=id;
    }
    void displaystaff(){
        cout<<name<<" "<<age<<" "<<id<<endl;
    }
};
int main(){
   teacher T("Rajan Sir",27,7500);
   T.displaytecaher();
   staff S("Daayi",38,101);
   S.displaystaff();
}