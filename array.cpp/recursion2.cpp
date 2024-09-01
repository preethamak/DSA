#include<iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    else{

        return 2*power(n-1);
    }
}
int main(){
    int n,m;
    cout<<"enter n"<<endl;
    cin>>n;
    power(n);
    cout<<"power of given number is "<<power(n)<<endl;
    return 0; 
}