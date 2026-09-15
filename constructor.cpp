#include <iostream>
using namespace std;

class customer
{
    string name;
    int account_no;
    int balance;
    int * p;
    

    // Default Constructor
       public:
    customer()
    {
        name = "Praveen Yadav";
        account_no = 8916;
        balance = 700;
       
    }
    void display()
    {
        cout << name << " " << account_no << " " << balance << endl;
    }
    // Parameterized Constructor
    // customer(string a, int b, int c)
    // {
    //     name = a;
    //     account_no = b;
    //     balance = c;
    // }
    customer(string name, int account_no)
    {
        this->name = name;
        this->account_no = account_no;
        balance = 1800;
    }
    customer(string name){
        this->name=name;
        account_no=5689;
        balance=10500;
    }
    //Inline Constructor
    
    inline customer(string a,int b,int c):name(a),account_no(b),balance(c){

    }
    //Copy Constructor
     //User Defined Copy Constructor
    customer(customer &B){
        name=B.name;
        account_no=B.account_no;
        balance=B.balance;
    }
};

int main()
{
    customer A1;
    customer A2("Prince", 9018, 1500);
    customer A3("Alok Mishra", 3891);
    customer A4("Sachchidanand Yadav");
    customer A5(A4);
    customer A6;
    A6=A3;
    A1.display();
    A2.display();
    A3.display();
    A4.display();
    A5.display(); 
    A6.display();


    return 0;
}
