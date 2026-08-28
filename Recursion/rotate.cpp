# include <iostream>
using namespace std;
void rotate(int arr[],int index,int n){
    if(index<0)
    return;
    int last=arr[n-1];
    arr[index+1]=arr[index];
 rotate(arr,index-1,n);
    arr[0]=last;

}
int main(){
    int arr[]={2,5,6,8,10};
    rotate(arr,3,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}