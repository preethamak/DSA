#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *ptr=&a;
    int **p=&ptr;
    cout<<a<<endl;
    cout<<ptr<<endl;
    cout<<p<<endl;
}