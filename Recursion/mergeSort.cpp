#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int start,int mid,int end){
    vector<int>temp(end-start+1);
    int left=start,right=mid+1,index=0;
    while(left<=mid && right<=end){
        if(arr[left]<arr[right]){
            temp[index]=arr[left];
            index++,left++;
        }
        else {
            temp[index]=arr[right];
            right++,index++;
        }
      
    }
      while(left<=mid){
            temp[index]=arr[left];
            index++,left++;
        }
        while(right<=end){
            temp[index]=arr[right];
            right++,index++;
        }

        // Fill the value of temp int arr

        index=0;
        while(start<=end){
            arr[start]=temp[index];
            index++,start++;
        }
}

void mergesort(int arr[],int start,int end){
       if(start==end)
       return;
       int mid=start+(end-start)/2;
        //left Divided Part
       mergesort(arr,start,mid);
       //right divided part
       mergesort(arr,mid+1,end);
       // Now Merging the Divided Array
       merge(arr,start,mid,end);
}

int main(){
   int arr[10]={5,8,9,4,1,3,6,5,1,2};
   mergesort(arr,0,9);
   for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
   }
}
