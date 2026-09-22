#include <iostream>
using namespace std;
class person{
    protected:
    string name;

    public:
    void introduce(){
        cout<<"My name is "<<name<<endl;
    }
};
class employee :public person{
    protected:
    int salary;

    public:
    void monthly_salary(){
        cout<<"My salary is "<<salary<<endl;

    }

};
class manager:public employee{
    public:
    string department;

      manager(string name,int salary,string department){
        this->name=name;
        this->salary=salary;
        this->department=department;
      }

    void deptname(){
        cout<<"My department is "<<department<<endl;
    }
    void display(){
        cout<<name<<" "<<salary<<" "<<department<<endl;
    }

};
int main(){
   manager A("Praveen",200,"Finance");
   A.introduce();
   A.monthly_salary();
   A.deptname();
   A.display();
}
