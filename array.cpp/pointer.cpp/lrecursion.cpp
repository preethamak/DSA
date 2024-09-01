#include<iostream>
using namespace std;
bool recursion(int *arr, int n, int k){
    if(n==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    arr++;
   int ans = recursion(arr+1,n-1,k);
    return ans;
}
int main(){
    int arr[5]={1,4,6,8,3};
    int n=5;
    int k=10;
    int ans=recursion(arr,n,k);
    if(ans){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
}