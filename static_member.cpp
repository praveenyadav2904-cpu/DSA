#include <iostream>
using namespace std;

class customer{
         string name;
         int account_no,balance;
         static int total_customer;

         public:
        
         customer(string name,int account_no,int balance){
            this->name=name;
            this->account_no=account_no;
            this->balance=balance;
            total_customer++;
         }

         void display(){
            cout<<name<<" "<<account_no<<" "<<balance<<" "<<total_customer<<endl;
         }
        static void display_totalcustomer(){
            cout<<"Total Customer in Bank : "<<total_customer<<endl;
         }
        
};
        int customer::total_customer=0;
int main(){
    customer A1("Praveen",3891,1500);
    customer A2("Prince",7845,2000);
    // A1.display();
    // A2.display();
    A2.display_totalcustomer();
    customer A3("Alok Mishra",4561,2500);
    // A3.display();
    A2.display_totalcustomer();
     customer::display_totalcustomer();
    //A2.display_totalcustomer();

}