#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int a= fib(n-1)+fib(n-2);
    return a;
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    fib(n);
    cout<<fib(n)<<endl;
}