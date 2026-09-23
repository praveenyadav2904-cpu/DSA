#include <iostream>
using namespace std;

class student{
    public:
    void print(){
        cout<<"I am Student\n";
    }
};
 class male{
    public:
    void maleprint(){
        cout<<"I am Male\n";
    }
 };
 class female{
    public:
    void femaleprint(){
        cout<<"I am Female\n";
    }
 };
 class Boy :public student,public male{
    public:
    void boyprint(){
        cout<<"I am Boy\n";
    }
 };
 class Girl :public student,public female{
    public:
    void girlprint(){
        cout<<"I am Girl\n";
    }
 };

int main(){
  Boy B;
  B.print();
  B.maleprint();

  Girl G;
  G.femaleprint();
  G.print();
}