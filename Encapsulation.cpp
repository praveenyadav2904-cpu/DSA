#include <iostream>
using namespace std;
    class customer{
       string name;
       int bal;
       int age;

       public:
       customer(string a,int b,int c){
        name=a;
        bal=b;
        age=c;
       }
        void deposite(int amount){
            if(amount>0){
                bal+=amount;
                cout<<amount <<" "<<"Is deposited"<<endl;
            }
            else {
            cout<<"Enter valid Amount to deposite"<<endl;
            }
        }
        void setage(int n){
            if (n>0&&n<100){
            age=n;
        cout<<"age "<<"is updated to "<< n <<endl;
            }
        else
            cout<<"Enter valid age"<<endl;
        }

       void display(){
        cout<<name<<" "<<bal<<" "<<age<<endl;
       }
    };
int main(){
    customer A1("Vivekanand Yadav",500,27);
    A1.display();
    A1.deposite(5000);
    A1.display();
    A1.setage(30);
    A1.display();
    

}