#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int age;
    int rollno;
    string grade;

public:
    // Setter
    void setname(string s)
    {
        name = s;
    }
    void setage(int n)
    {
        age = n;
    }
    void setgrade(string g)
    {
        grade = g;
    }
    // Getter
    // void getname()
    // {
    //     cout << name << endl;
    // }
    // void getage()
    // {
    //     cout << age << endl;
    // }
    // void getgrade()
    // {
    //     cout << grade << endl;
    // }
    string getname(int pin)
    {
        if (pin == 123)
            return name;
        return "Invalid Pin";
    }
    string getgrade(int password)
    {
        if (password == 2904)
            return grade;
        return "ENter Valid Password to get Grade";
    }

    int getage(int key)
    {
        if (key == 1235)
            return age;
        return -1;
    }
};
int main()
{
    student s1;
    s1.setname("Praveen Yadav");
    s1.setage(22);
    s1.setgrade("A+");
    cout << s1.getname(123) << endl;
    cout << s1.getage(12356) << endl;
    cout << s1.getgrade(2904);
}