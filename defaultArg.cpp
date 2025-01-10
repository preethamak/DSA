#include<iostream>
using namespace std;
void output(int arr[],int n,int start=1){
    for(int i=start;i<=n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[4]={1,2,3,4};
    int size=5;
    int n;
        output(arr,size);
        cout<<endl;
        output(arr,size,2);
        
}
