#include<iostream>
using namespace std;
int main(){
    int f=8;
    int s=18;
    int *ptr=&s;
    *ptr=8;
    cout<<f<<endl;
    cout<<s<<endl;
}