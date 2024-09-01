#include<iostream>
using namespace std;
void sort(int *arr, int n){
    if(n==0 || n==1){
        return;
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sort(arr,n-1);
}
int main(){
    int arr[5]={5,3,7,2,1};
    int n=5;
    sort(arr,5);
    for(int i=0;i<5;i++){                //bubble sort
        cout<<arr[i]<<endl;
    }
    return 0;
}