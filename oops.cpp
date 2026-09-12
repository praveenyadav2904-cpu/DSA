#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age, rollno;
    string grade;
};

int main()
{
    student s1;
    s1.name = "Praveen Yadav";
    s1.age = 21;
    s1.grade = "A+";

    cout << s1.name << " " << s1.age << " " << s1.grade << " " << endl;

    student s2;
    s2.name = "Prince Yadav";
    s2.age = 22;
    cout << s2.name << " " << s2.age << endl;
}