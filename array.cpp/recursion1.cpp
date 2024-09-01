#include<iostream>
using namespace std;
int factorial(int n){
    if (n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    factorial(n);
    cout<<"factorial of given number is "<< factorial(n) <<endl;
    return 0;
}

