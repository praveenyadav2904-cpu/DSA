# include <iostream>
using namespace std;
 int bs(int arr[],int start,int end,int x){
    if(start>end)
    return -1;
    int mid=start+(end-start)/2;
    if(arr[mid]==x)
    return mid;
     else if(arr[mid]<x)
     return bs(arr,mid+1,end,x);

     else
     return bs(arr,start,mid-1,x);
 }
int main(){
    int arr[]={3,8,11,15,20,22,45};
    int n=sizeof(arr);
    cout<<bs(arr,0,n-1,15);
}