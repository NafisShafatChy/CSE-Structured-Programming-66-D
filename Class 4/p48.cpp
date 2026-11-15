#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int low,int high,int target){
    if(low>high){
        return -1;
    }
    int mid =(low+high)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(target<arr[mid]){
        return bs(arr,low,mid-1,target);
    }
    else{
        return bs(arr,mid+1,high,target);
    }
}
int main(){
    int n,arr[100],target;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>target;
    int index=bs(arr,0,n-1,target);
    if(index!=-1){
        cout<<"Found"<<"\n";
    }
    else{
        cout<<"Not found\n";
    }
}