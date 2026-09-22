#include <iostream>
using namespace std;

class Engineer{
protected :
   string specialization;
   void work(){
    cout<<"I have specialization in "<<specialization<<endl;
   }
};
  class Youtuber{
    protected:
    int subscriber;

    void youtube(){
        cout<<"I have base of subsriber of "<<subscriber<<endl;
    }
  };
  class coderTeacher : public Engineer,public Youtuber {
   string name;
   public:
       coderTeacher(string name,string specialization,int subscriber){
           this->name=name;
           this->specialization=specialization;
           this->subscriber=subscriber;
       }
       void display(){
        cout<<"My name is "<<name<<endl;
        work();
        youtube();
       }
     
  };
int main(){
        coderTeacher A("Sadanand Yadav","Chemical Engineering",2810);
        A.display();
      
}