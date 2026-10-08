#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("zoom.txt");

    fout<<"Praveen kaise ho tum!"<<endl;
    fout<<"Prince yaar tum kaise ho!";
    fout.close();
}