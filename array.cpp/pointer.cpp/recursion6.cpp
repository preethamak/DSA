#include<iostream>
using namespace std;
int stairs(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int ans;
     ans=stairs(n-1)+stairs(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    stairs(n);
    cout<<"number of stairs are "<<stairs(n)<<endl;
    return 0;
}