#include<iostream>
using namespace std;
int merge(int *arr,int n,int s, int e){
    if(s>e){
        return 0;
    }
    if(s=e){
        return 0;
    }
    int a;
    if(arr[0]>arr[1]){
        swap(arr[0],arr[1]);
    arr++;
    }
   return merge(arr,n,s,e);
}
int main(){
    int arr[5]={1,5,4,6,3};
    int n=5;
    merge(arr,n,0,n-1);
    for(int i=0;i<=n;i++){
        cout<<arr[i];
    }
}