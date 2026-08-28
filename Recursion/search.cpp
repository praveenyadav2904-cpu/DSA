# include <iostream>
using namespace std;
int search(int arr[],int index,int x){
         if(index==-1)
         return -1;
         
         if(arr[index]==x)
         return index;

         return search(arr,index-1,7);
}
int main(){
    int arr[]={4,5,6,4,8,5,7};
  
     cout<<search(arr,6,7);

}