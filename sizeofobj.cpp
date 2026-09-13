#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    int rollno;
    string grade;
};
int main()
{
    student *s = new student;
    (*s).name = "Praveen Yadav";
    (*s).age = 18;
    (*s).rollno = 102;
    (*s).grade = "A+";

    cout << (*s).name << endl;
    cout << s->age << endl;
    cout << s->rollno << endl;
    cout << s->grade;
}