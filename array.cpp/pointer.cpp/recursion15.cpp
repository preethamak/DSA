#include<iostream>
using namespace std;
int lenght(string arr[],int n){
    for(int i=0;i<=n;i++){
        cout<<arr[i];
    }
}
int main(){
    string arr[3]="abc";
    int n=3;
    int i;
    lenght(arr,n);
    cout<<arr[i];
    return 0;
}