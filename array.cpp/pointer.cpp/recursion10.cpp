#include<iostream>
using namespace std;
bool linear(int arr[],int ele,int n){
    if (n==0){
        return false;
    }
    if(arr[0]==ele){
        return true;
    }
    else{
       bool remaining= linear(arr+1,ele,n-1);
       return remaining;
    }
}
int main(){
    int arr[5]={2,4,6,8,10};
    int ele=10;
    int n=5;
    int ans = linear(arr,ele,n);
    if(ans){
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element not present"<<endl;
    }
}