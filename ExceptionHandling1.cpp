
#include <iostream>
using namespace std;

class customer{
    string name;
    int balance,AccNo;

    public:
       customer(string name,int balance,int AccNo){
        this->name=name;
        this->balance=balance;
        this->AccNo=AccNo;
       }

       void Deposit(int amount){
        if(amount>0){
            balance+=amount;
            cout<<amount<<" is successfully credited !"<<endl;
        }
        else {
           throw "amount is less than 0 !";
        }
       }

       void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<amount<<" is successfully withdrtawl !"<<endl;
        }
        else if(amount<0){
            throw "amount is less than 0";
        }
        else 
       throw "amount  is less than your balance";
       }

       void display(){
        cout<<"Customer name is "<<name<<" and his balance is "<<balance<<" and Account Number is "<<AccNo<<endl;
       }
};

int main(){
customer C("Praveen Yadav",900,8916);
try {
C.Deposit(400);
C.withdraw(8000);
C.display();
}
catch(const char *msg){
    cout<<"Exception Occured ! "<<msg;
}
}