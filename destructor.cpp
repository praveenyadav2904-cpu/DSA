#include <iostream>
using namespace std;

class customer{
   string name;
   int *data;
   public:
   customer(string name){
    this->name=name;
    // data=new int;
    // *data=balance;
    cout<<"Constructor is " <<name<<endl;;
   }
   ~customer(){
    delete data;
    cout<<"Destructor is " <<name<<endl;
   }
};
int main(){
    customer A1("1"),A2("2"),A3("3");

}