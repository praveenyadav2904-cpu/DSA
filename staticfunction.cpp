#include <iostream>
using namespace std;
class customer{
    string name;
    int account_no,bal;
    static int count;
    static int total_balance;

    public:
    customer(string a,int b,int bal){
        name=a;
        account_no=b;
        this->bal=bal;
            count++;
            total_balance+=bal;
    }
    void display(){
        cout<<name<<" "<<account_no<<" "<<bal<<endl;
    }

       void deposite(int amount){
            if(amount>0){
                bal+=amount;
                total_balance+=amount;
                cout<<amount<<" "<<"deposited"<<endl;
            }
       }
       void withdraw(int amount){
        if(amount<=bal && amount >0){
            bal-=amount;
            total_balance-=amount;
            cout<<amount<<" "<<"withdrawl"<<endl;
        }
        else cout<<"No sufficient balance in Your Account for Withdraw" <<endl;
        
        
       }
       static void display_count(){
        cout<<"total customer :"<<count<<endl;
        cout<<"Total Balance :"<<total_balance<<endl;
       }
   
};
int customer::count=0;
int customer::total_balance=0;
int main(){
       customer A1("Devanand Yadav",9874,1500);
       customer A2("Sadanand Yadav",4561,20500);
       A1.display();
       A2.display();
       A1.withdraw(5000);
       A2.deposite(2100);
       
       customer::display_count();
}