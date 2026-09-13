#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int rollno;
    int age;
    string grade;

public:
    void setname(string s)
    {
        name = s;
    }
    void setroll(int n)
    {
        rollno = n;
    }
    void setage(int a)
    {
        age = a;
    }
    void getname()
    {
        cout << name << endl;
    }
    string getage()
    {
        if (age < 18)
        {
            cout << "Not eligible" << endl;
            return "Not eligible";
        }
        else
            return "Eligible";
    }
    string getgrade(int n)
    {
        if (n == 1234)
            return grade;

        return "Incorrect PIN";
    }
};
int main()
{
    student s1;
    s1.setname("Praveen Yadav");
    s1.setage(20);
    s1.getname();
    s1.getage();
    s1.getgrade(124);
}